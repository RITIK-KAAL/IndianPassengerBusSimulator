using System;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "BusItem", menuName = "Bus Skins/Create Bus Item", order = 4)]
public class BusItem : ScriptableObject
{
    public enum SkinUnlockStatus
    {
        Status_Locked = 0,
        Status_Unlocked_Permanent = 1,
        Status_Unlocked_Temporary = 2
    };

    [Serializable]
    private struct UnlockedSkins
    {
        public int unlockSkinIndex;
        public SkinUnlockStatus unlockStatus;
        public string unlockSkinTime;
    }

    public int index;
    [SerializeField] private int currentSkinIndex;
    [SerializeField] private int currentUnlockIndex;
    [SerializeField] private List<UnlockedSkins> m_UnlockedSkinsList = new List<UnlockedSkins>();

    private void Reset()
    {
        currentSkinIndex = index * 3 + 0;

        m_UnlockedSkinsList.Clear();

        UnlockedSkins skin1Data;
        skin1Data.unlockStatus = SkinUnlockStatus.Status_Unlocked_Permanent;
        skin1Data.unlockSkinIndex = index * 3 + 0;
        skin1Data.unlockSkinTime = string.Empty;

        UnlockedSkins skin2Data;
        skin2Data.unlockStatus = SkinUnlockStatus.Status_Locked;
        skin2Data.unlockSkinIndex = index * 3 + 1;
        skin2Data.unlockSkinTime = string.Empty;

        UnlockedSkins skin3Data;
        skin3Data.unlockStatus = SkinUnlockStatus.Status_Locked;
        skin3Data.unlockSkinIndex = index * 3 + 2;
        skin3Data.unlockSkinTime = string.Empty;

        m_UnlockedSkinsList.Add(skin1Data);
        m_UnlockedSkinsList.Add(skin2Data);
        m_UnlockedSkinsList.Add(skin3Data);
    }

    private void OnValidate()
    {
        if (m_UnlockedSkinsList.Count == 0) return;
        if (Application.isPlaying) return;

        for (int i = 0; i < m_UnlockedSkinsList.Count; i++)
        {
            UnlockedSkins skinData = m_UnlockedSkinsList[i];
            skinData.unlockSkinIndex = index * 3 + i;
            m_UnlockedSkinsList[i] = skinData;
        }
    }

    public int GetCurrentUnlockIndex() { return currentUnlockIndex; }

    public int GetCurrentSkinIndex() { return currentSkinIndex; }

    public void SetCurrentUnlockIndex(int unlockIndex) => currentUnlockIndex = unlockIndex;

    public void SetCurrentSkinIndex(int skinIndex) => currentSkinIndex = skinIndex;

    public DateTime GetSkinTemporaryUnlockTime(int unlockIndex)
    {
        if (m_UnlockedSkinsList.Count == 0)
            return DateTime.Now;

        return DateTime.Parse(m_UnlockedSkinsList[unlockIndex].unlockSkinTime.ToString());
    }

    public bool IsOnTimer(int unlockIndex)
    {
        UnlockedSkins skinData = m_UnlockedSkinsList[unlockIndex];
        if (skinData.unlockStatus == SkinUnlockStatus.Status_Locked || skinData.unlockStatus == SkinUnlockStatus.Status_Unlocked_Permanent)
            return false;

        DateTime currentTime = DateTime.Now;
        DateTime skinTime = DateTime.Parse(skinData.unlockSkinTime);

        if (currentTime != null && skinTime != null)
        {
            TimeSpan elaspedTime = skinTime - currentTime;
            return elaspedTime.Seconds > 0.0;
        }

        return false;
    }

    public void ValidateSkinTemporaryStatus()
    {
        if (m_UnlockedSkinsList.Count == 0) return;

        for (int i = 0; i < m_UnlockedSkinsList.Count; i++)
        {
            UnlockedSkins skinData = m_UnlockedSkinsList[i];

            if (skinData.unlockStatus == SkinUnlockStatus.Status_Locked || skinData.unlockStatus == SkinUnlockStatus.Status_Unlocked_Permanent)
                continue;

            DateTime currentTime = DateTime.Now;
            DateTime skinTime = DateTime.Parse(skinData.unlockSkinTime);

            if (currentTime != null && skinTime != null)
            {
                TimeSpan elaspedTime = skinTime - currentTime;
                if (elaspedTime.Seconds <= 0.0)
                {
                    skinData.unlockStatus = SkinUnlockStatus.Status_Locked;
                    skinData.unlockSkinTime = string.Empty;

                    currentUnlockIndex = 0;
                    currentSkinIndex = m_UnlockedSkinsList[currentUnlockIndex].unlockSkinIndex;
                }
            }

            m_UnlockedSkinsList[i] = skinData;
        }

        SaveToFile();
    }

    public void TemporarySkinEnded(int unlockIndex)
    {
        UnlockedSkins skinData = m_UnlockedSkinsList[unlockIndex];
        skinData.unlockStatus = SkinUnlockStatus.Status_Locked;
        skinData.unlockSkinTime = string.Empty;
        
        m_UnlockedSkinsList[unlockIndex] = skinData;

        currentUnlockIndex = 0;
        currentSkinIndex = m_UnlockedSkinsList[currentUnlockIndex].unlockSkinIndex;

        SaveToFile();
    }

    //0 - Not Unlocked, 1 - Unlocked Permanent, 2 - Unlocked Temporary (Ads)
    public int IsSkinUnlocked(int unlockIndex) 
    {
        if (m_UnlockedSkinsList.Count == 0)
            return (int)SkinUnlockStatus.Status_Locked;

        UnlockedSkins skinData = m_UnlockedSkinsList[unlockIndex];
        return (int)skinData.unlockStatus;        
    }

    public void AddUnlockedSkin(int unlockIndex, int skinIndex)
    {
        if (unlockIndex < 0) return;

        currentUnlockIndex = unlockIndex;
        currentSkinIndex = skinIndex;

        UnlockedSkins skinData = m_UnlockedSkinsList[currentUnlockIndex];
        skinData.unlockStatus = SkinUnlockStatus.Status_Unlocked_Permanent;
        skinData.unlockSkinTime = string.Empty;

        m_UnlockedSkinsList[currentUnlockIndex] = skinData;
    }

    public void AddUnlockedAdSkin(int unlockIndex, int skinIndex)
    {
        if (unlockIndex < 0) return;

        currentUnlockIndex = unlockIndex;
        currentSkinIndex = skinIndex;

        UnlockedSkins skinData = m_UnlockedSkinsList[currentUnlockIndex];
        skinData.unlockStatus = SkinUnlockStatus.Status_Unlocked_Temporary;

#if UNITY_EDITOR
        skinData.unlockSkinTime = DateTime.Now.AddSeconds(30.0).ToString();
#elif UNITY_ANDROID || UNITY_IOS
        skinData.unlockSkinTime = DateTime.Now.AddMinutes(30.0).ToString();
#endif
        m_UnlockedSkinsList[currentUnlockIndex] = skinData;        
    }

    public void SaveToFile()
    {
        string saveData = JsonUtility.ToJson(this);
        SerializationManager.SaveAsTextFile(typeof(BusItem).Name + index, saveData);
    }
}
