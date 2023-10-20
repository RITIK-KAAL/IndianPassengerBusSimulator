using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class BusScreenShooter : MonoBehaviour
{
    [SerializeField] private Camera m_Camera;
    [SerializeField] private float m_Margin = 1.1f;
    [SerializeField] private float m_Height = 1.0f;
    [SerializeField] private Vector3 m_LookOffset;
 
    [Space(10)]

    [SerializeField] private int m_CurrentBusIndex = 0;
    [SerializeField] private BusSkinsDB m_BusesSkinDB;
    [SerializeField] private BusSkinsTexturesDB m_BusTexturesSkinDB;
    [SerializeField] private BusGarageItem[] m_BusesList;

    private BusGarageItem m_CurrentBus;
    private BusSkinsItem m_CurrentBusSkinItem;    

    private void Update()
    {
        if (m_BusesList[m_CurrentBusIndex] == null) return;

        for (int i = 0; i < m_BusesList.Length; i++)
            m_BusesList[i].gameObject.SetActive(i == m_CurrentBusIndex);

        m_CurrentBus = m_BusesList[m_CurrentBusIndex];
        m_CurrentBusSkinItem = m_BusesSkinDB.GetBusSkinsItem(m_CurrentBusIndex);
        float radius = m_CurrentBus.BusSize.magnitude;

        float theta = Mathf.Sin(Mathf.Deg2Rad * m_Camera.fieldOfView * 0.5f);
        float minDistance = (radius * m_Margin) / Mathf.Sin(Mathf.Deg2Rad * m_Camera.fieldOfView / 2f);

        Vector3 newPos = m_CurrentBus.BusCenter - Vector3.forward * minDistance;
        newPos.y *= m_Height;
        m_Camera.transform.position = newPos;
        m_Camera.transform.LookAt(m_CurrentBus.BusCenter + m_LookOffset);
    }

    [ContextMenu("Take Screenshots")]
    public void TakeScreenshots()
    {
        StartCoroutine(TakeScreenshotRoutine());
    }

    private IEnumerator TakeScreenshotRoutine()
    {
        int scWidth = 1024;
        int scHeight = 1024;

        for(int i = 0; i < m_CurrentBusSkinItem.busSkins.Length; i++) 
        {
            int skinIndex = m_CurrentBusSkinItem.busSkins[i].skinTextureIndex;
            m_CurrentBus.ApplySkinTexture(m_BusTexturesSkinDB.busTextures[skinIndex]);

            Rect rect = new Rect(0, 0, (float)scWidth, (float)scHeight);
            RenderTexture renderTextureTemp = new RenderTexture(scWidth, scHeight, 32);
            Texture2D screenshotTex = new Texture2D(scWidth, scHeight, TextureFormat.RGBA32, false);

            m_Camera.targetTexture = renderTextureTemp;
            m_Camera.Render();

            RenderTexture.active = renderTextureTemp;
            screenshotTex.ReadPixels(rect, 0, 0);
            screenshotTex.Apply();

            m_Camera.targetTexture = null;
            RenderTexture.active = null;

            Destroy(renderTextureTemp);
            renderTextureTemp = null;

            Byte[] imageData = screenshotTex.EncodeToPNG();
            string savePath = "Assets/UI/BusSkinsScreenshots/";
            string saveFilename = "Bus" + m_CurrentBusIndex + "_Skin" + skinIndex + ".png";
            File.WriteAllBytes(savePath + saveFilename, imageData);

            yield return new WaitForSeconds(1.0f);
        }
    }
}
