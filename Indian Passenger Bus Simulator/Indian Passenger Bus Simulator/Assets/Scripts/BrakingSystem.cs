using UnityEngine;
using UnityEngine.EventSystems;

namespace UnityStandardAssets.Vehicles.Car
{
    public class BrakingSystem : MonoBehaviour, IPointerUpHandler, IPointerDownHandler
    {
        public Rigidbody rb;
        private bool isDrag;
        private bool isBrakeApplied;
        public bool isBrakedInParking;
        private bool isHandBrakeApplied;
        public GameObject RearLeftIndicator;
        public GameObject RearRightIndicator;
        public GameObject[] TriLightRight = new GameObject[3];
        public GameObject[] TriLightLeft = new GameObject[3];
        public static BrakingSystem instance;
        private bool isTimeUp;
        [SerializeField]
        private Animator BrakeTutorial; 

        private void Awake()
        {
            if (instance == null)
            {
                instance = this;
            }
        }
        public void OnPointerUp(PointerEventData data)
        {
            isDrag = true;
            if (isBrakeApplied == true)
            {
                rb.drag = 15f;
            }
            else if (isHandBrakeApplied == true)
            {
                rb.drag = 20f;
            }
            else
            {
                rb.drag = 0.25f;
            }
        }

        public void OnPointerDown(PointerEventData data)
        {
            isDrag = false;
            rb.drag = 0.1f;
        }

        public void Brake()
        {
            if (isDrag == true)
            {
                BrakeTutorial.SetBool("isTutorial", false);
                isBrakeApplied = true;
                isBrakedInParking = true;
                AudioManager.instance.Play("Brake");
                rb.drag = 2.5f;
                isBrakeApplied = false;
            }
        }
    }
}
