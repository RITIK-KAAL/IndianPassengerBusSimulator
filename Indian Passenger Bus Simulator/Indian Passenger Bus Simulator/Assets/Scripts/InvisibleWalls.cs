using UnityEngine;

public class InvisibleWalls : MonoBehaviour
{
    [SerializeField]
    private BoxCollider[] ColliderGameObject;

    private void OnTriggerEnter(Collider collider)
    {
        if (collider.gameObject.tag == "Player")
        {
            for (int i = 0; i < ColliderGameObject.Length; i++)
            {
                ColliderGameObject[i].GetComponent<BoxCollider>().isTrigger = false;
            }
        }
        else 
        {
            for (int i = 0; i < ColliderGameObject.Length; i++)
            {
                ColliderGameObject[i].GetComponent<BoxCollider>().isTrigger = true;
            }
        }
    }
}
