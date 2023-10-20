using UnityEngine;
using UnityEngine.EventSystems;
using UnityStandardAssets.Vehicles.Car;

public class SteeringWheel : MonoBehaviour, IDragHandler, IPointerDownHandler, IPointerUpHandler
{
    private bool Wheelbeingheld = false;
    public RectTransform Wheel;
    public float WheelAngle = 0f;
    public float LastWheelAngle = 0f;
    private Vector2 center;
    public float MaxSteerAngle;
    public float ReleaseSpeed;
    public float OutPut;
    public BusMovement Bus;
    void Update()
    {
        if (!Wheelbeingheld && WheelAngle != 0f)
        {
            float DeltaAngle = ReleaseSpeed * Time.deltaTime;
            if (Mathf.Abs(DeltaAngle) > Mathf.Abs(WheelAngle))
                WheelAngle = 0f;
            else if (WheelAngle > 0f)
                WheelAngle -= DeltaAngle;
            else
                WheelAngle += DeltaAngle;
        }
        Wheel.localEulerAngles = new Vector3(0, 0, -MaxSteerAngle * OutPut);
        OutPut = WheelAngle / MaxSteerAngle;
        Bus.h = OutPut;
    }
    public void OnPointerDown(PointerEventData data)
    {
        Wheelbeingheld = true;
        center = RectTransformUtility.WorldToScreenPoint(data.pressEventCamera, Wheel.position);
        LastWheelAngle = Vector2.Angle(Vector2.up, data.position - center);
    }
    public void OnDrag(PointerEventData data)
    {
        float NewAngle = Vector2.Angle(Vector2.up, data.position - center);
        if ((data.position - center).sqrMagnitude >= 400)
        {
            if (data.position.x > center.x)
                WheelAngle += NewAngle - LastWheelAngle;
            else
                WheelAngle -= NewAngle - LastWheelAngle;
        }
        WheelAngle = Mathf.Clamp(WheelAngle, -MaxSteerAngle, MaxSteerAngle);
        LastWheelAngle = NewAngle;
    }
    public void OnPointerUp(PointerEventData data)
    {
        OnDrag(data);
        Wheelbeingheld = false;
    }
}