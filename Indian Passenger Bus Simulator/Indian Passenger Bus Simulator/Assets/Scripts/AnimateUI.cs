using UnityEngine;

public class AnimateUI : MonoBehaviour
{
    [SerializeField]
    private Animator ParkingIcon;
    [SerializeField]
    private Animator ParkingIcon1;
    [SerializeField]
    private Animator ParkingIcon2;
    [SerializeField]
    private Animator ParkingIcon3;

    private void Update()
    {
        if (ParkingIcon) ParkingIcon.Play("ParkingIcon");
        if (ParkingIcon1) ParkingIcon1.Play("ParkingIcon1");
        if (ParkingIcon2) ParkingIcon2.Play("ParkingIcon2");
        if (ParkingIcon3) ParkingIcon3.Play("ParkingIcon3");
    }
}
