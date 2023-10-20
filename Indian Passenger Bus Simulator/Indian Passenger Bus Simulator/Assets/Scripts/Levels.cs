using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Analytics;
using System.Collections.Generic;

public class Levels : MonoBehaviour
{
    [SerializeField]
    private GameObject MapSelectionBackground;
    [SerializeField]
    private GameObject LoadingImage;
    [SerializeField]
    private Slider slider;
    [SerializeField]
    private TMP_Text LoadingPercentage;
    [SerializeField]
    private GameObject CoinCountBackground;
    [SerializeField]
    private Button[] LevelButtons;
    public int LevelCount;
    [SerializeField]
    private Transform Level1;
    [SerializeField]
    private Transform Level2;
    [SerializeField]
    private Transform Level3;
    [SerializeField]
    private Transform Level4;
    [SerializeField]
    private Transform Level5;
    [SerializeField]
    private Transform Level6;
    [SerializeField]
    private Transform Level7;
    [SerializeField]
    private Transform Level8;
    [SerializeField]
    private Transform Level9;
    [SerializeField]
    private Transform Level10;
    [SerializeField]
    private Transform Level11;
    [SerializeField]
    private Transform Level12;
    [SerializeField]
    private Transform Level13;
    [SerializeField]
    private Transform Level14;
    [SerializeField]
    private Transform Level15;
    [SerializeField]
    private Transform Level16;
    [SerializeField]
    private Transform Level17;
    [SerializeField]
    private Transform Level18;
    [SerializeField]
    private Transform Level19;
    [SerializeField]
    private Transform Level20;
    [SerializeField]
    private Transform Level21;
    [SerializeField]
    private Transform Level22;
    [SerializeField]
    private Transform Level23;
    [SerializeField]
    private Transform Level24;
    [SerializeField]
    private Transform Level25;
    [SerializeField]
    private Transform Level26;
    [SerializeField]
    private Transform Level27;
    [SerializeField]
    private Transform Level28;
    [SerializeField]
    private Transform Level29;
    [SerializeField]
    private Transform Level30;
    [SerializeField]
    private Transform Level31;
    [SerializeField]
    private Transform Level32;
    public int StarCount;
    [SerializeField]
    private TMP_Text TotalStarCount;
    [SerializeField]
    private TMP_Text TotalStarCount1;
    [SerializeField]
    private TMP_Text TotalStarCount2;
    [SerializeField]
    private TMP_Text TotalStarCount3;
    private int RealTimeScene;

    private void Awake()
    {
        RealTimeScene = SceneManager.GetActiveScene().buildIndex;

        LevelCount = PlayerPrefs.GetInt("LevelCount", 1);

        for (int i = 0; i < LevelButtons.Length; i++)
        {
            LevelButtons[i].interactable = false;
        }

        for (int i = 0; i < LevelCount && LevelButtons.Length > 0; i++)
        {
            LevelButtons[i].interactable = true;
        }

        if (PlayerPrefs.GetInt("Level1") == 1 && Level1)
        {
            if (PlayerPrefs.GetInt("Level1ThreeStared") == 1)
            {
                StarCount += 3; 
                Level1.GetChild(1).gameObject.SetActive(true);
                Level1.GetChild(2).gameObject.SetActive(true);
                Level1.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level1TwoStared") == 1)
            {
                StarCount += 2; 
                Level1.GetChild(1).gameObject.SetActive(true);
                Level1.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level1OneStared") == 1)
            {
                StarCount += 1; 
                Level1.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level2") == 1 && Level2)
        {
            if (PlayerPrefs.GetInt("Level2ThreeStared") == 1)
            {
                StarCount += 3;
                Level2.GetChild(1).gameObject.SetActive(true);
                Level2.GetChild(2).gameObject.SetActive(true);
                Level2.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level2TwoStared") == 1)
            {
                StarCount += 2; 
                Level2.GetChild(1).gameObject.SetActive(true);
                Level2.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level2OneStared") == 1)
            {
                StarCount += 1; 
                Level2.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level3") == 1 && Level3)
        {
            if (PlayerPrefs.GetInt("Level3ThreeStared") == 1)
            {
                StarCount += 3;
                Level3.GetChild(1).gameObject.SetActive(true);
                Level3.GetChild(2).gameObject.SetActive(true);
                Level3.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level3TwoStared") == 1)
            {
                StarCount += 2; 
                Level3.GetChild(1).gameObject.SetActive(true);
                Level3.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level3OneStared") == 1)
            {
                StarCount += 1; 
                Level3.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level4") == 1 && Level4)
        {
            if (PlayerPrefs.GetInt("Level4ThreeStared") == 1)
            {
                StarCount += 3;
                Level4.GetChild(1).gameObject.SetActive(true);
                Level4.GetChild(2).gameObject.SetActive(true);
                Level4.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level4TwoStared") == 1)
            {
                StarCount += 2; 
                Level4.GetChild(1).gameObject.SetActive(true);
                Level4.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level4OneStared") == 1)
            {
                StarCount += 1; 
                Level4.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level5") == 1 && Level5)
        {
            if (PlayerPrefs.GetInt("Level5ThreeStared") == 1)
            {
                StarCount += 3;
                Level5.GetChild(1).gameObject.SetActive(true);
                Level5.GetChild(2).gameObject.SetActive(true);
                Level5.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level5TwoStared") == 1)
            {
                StarCount += 2; 
                Level5.GetChild(1).gameObject.SetActive(true);
                Level5.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level5OneStared") == 1)
            {
                StarCount += 1; 
                Level5.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level6") == 1 && Level6)
        {
            if (PlayerPrefs.GetInt("Level6ThreeStared") == 1)
            {
                StarCount += 3;
                Level6.GetChild(1).gameObject.SetActive(true);
                Level6.GetChild(2).gameObject.SetActive(true);
                Level6.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level6TwoStared") == 1)
            {
                StarCount += 2; 
                Level6.GetChild(1).gameObject.SetActive(true);
                Level6.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level6OneStared") == 1)
            {
                StarCount += 1;
                Level6.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level7") == 1 && Level7)
        {
            if (PlayerPrefs.GetInt("Level7ThreeStared") == 1)
            {
                StarCount += 3;
                Level7.GetChild(1).gameObject.SetActive(true);
                Level7.GetChild(2).gameObject.SetActive(true);
                Level7.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level7TwoStared") == 1)
            {
                StarCount += 2; 
                Level7.GetChild(1).gameObject.SetActive(true);
                Level7.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level7OneStared") == 1)
            {
                StarCount += 1; 
                Level7.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level8") == 1 && Level8)
        {
            if (PlayerPrefs.GetInt("Level8ThreeStared") == 1)
            {
                StarCount += 3;
                Level8.GetChild(1).gameObject.SetActive(true);
                Level8.GetChild(2).gameObject.SetActive(true);
                Level8.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level8TwoStared") == 1)
            {
                StarCount += 2;
                Level8.GetChild(1).gameObject.SetActive(true);
                Level8.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level8OneStared") == 1)
            {
                StarCount += 1; 
                Level8.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level9") == 1 && Level9)
        {
            if (PlayerPrefs.GetInt("Level9ThreeStared") == 1)
            {
                StarCount += 3;
                Level9.GetChild(1).gameObject.SetActive(true);
                Level9.GetChild(2).gameObject.SetActive(true);
                Level9.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level9TwoStared") == 1)
            {
                StarCount += 2;
                Level9.GetChild(1).gameObject.SetActive(true);
                Level9.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level9OneStared") == 1)
            {
                StarCount += 1; 
                Level9.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level10") == 1 && Level10)
        {
            if (PlayerPrefs.GetInt("Level10ThreeStared") == 1)
            {
                StarCount += 3;
                Level10.GetChild(1).gameObject.SetActive(true);
                Level10.GetChild(2).gameObject.SetActive(true);
                Level10.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level10TwoStared") == 1)
            {
                StarCount += 2; 
                Level10.GetChild(1).gameObject.SetActive(true);
                Level10.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level10OneStared") == 1)
            {
                StarCount += 1;
                Level10.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level11") == 1 && Level11)
        {
            if (PlayerPrefs.GetInt("Level11ThreeStared") == 1)
            {
                StarCount += 3;
                Level11.GetChild(1).gameObject.SetActive(true);
                Level11.GetChild(2).gameObject.SetActive(true);
                Level11.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level11TwoStared") == 1)
            {
                StarCount += 2; 
                Level11.GetChild(1).gameObject.SetActive(true);
                Level11.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level11OneStared") == 1)
            {
                StarCount += 1; 
                Level11.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level12") == 1 && Level12)
        {
            if (PlayerPrefs.GetInt("Level12ThreeStared") == 1)
            {
                StarCount += 3;
                Level12.GetChild(1).gameObject.SetActive(true);
                Level12.GetChild(2).gameObject.SetActive(true);
                Level12.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level12TwoStared") == 1)
            {
                StarCount += 2; 
                Level12.GetChild(1).gameObject.SetActive(true);
                Level12.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level12OneStared") == 1)
            {
                StarCount += 1; 
                Level12.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level13") == 1 && Level13)
        {
            if (PlayerPrefs.GetInt("Level13ThreeStared") == 1)
            {
                StarCount += 3;
                Level13.GetChild(1).gameObject.SetActive(true);
                Level13.GetChild(2).gameObject.SetActive(true);
                Level13.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level13TwoStared") == 1)
            {
                StarCount += 2; 
                Level13.GetChild(1).gameObject.SetActive(true);
                Level13.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level13OneStared") == 1)
            {
                StarCount += 1; 
                Level13.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level14") == 1 && Level14)
        {
            if (PlayerPrefs.GetInt("Level14ThreeStared") == 1)
            {
                StarCount += 3;
                Level14.GetChild(1).gameObject.SetActive(true);
                Level14.GetChild(2).gameObject.SetActive(true);
                Level14.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level14TwoStared") == 1)
            {
                StarCount += 2; 
                Level14.GetChild(1).gameObject.SetActive(true);
                Level14.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level14OneStared") == 1)
            {
                StarCount += 1; 
                Level14.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level15") == 1 && Level15)
        {
            if (PlayerPrefs.GetInt("Level15ThreeStared") == 1)
            {
                StarCount += 3;
                Level15.GetChild(1).gameObject.SetActive(true);
                Level15.GetChild(2).gameObject.SetActive(true);
                Level15.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level15TwoStared") == 1)
            {
                StarCount += 2; 
                Level15.GetChild(1).gameObject.SetActive(true);
                Level15.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level15OneStared") == 1)
            {
                StarCount += 1; 
                Level15.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level16") == 1 && Level16)
        {
            if (PlayerPrefs.GetInt("Level16ThreeStared") == 1)
            {
                StarCount += 3;
                Level16.GetChild(1).gameObject.SetActive(true);
                Level16.GetChild(2).gameObject.SetActive(true);
                Level16.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level16TwoStared") == 1)
            {
                StarCount += 2; 
                Level16.GetChild(1).gameObject.SetActive(true);
                Level16.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level16OneStared") == 1)
            {
                StarCount += 1; 
                Level16.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level17") == 1 && Level17)
        {
            if (PlayerPrefs.GetInt("Level17ThreeStared") == 1)
            {
                StarCount += 3;
                Level17.GetChild(1).gameObject.SetActive(true);
                Level17.GetChild(2).gameObject.SetActive(true);
                Level17.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level17TwoStared") == 1)
            {
                StarCount += 2; 
                Level17.GetChild(1).gameObject.SetActive(true);
                Level17.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level17OneStared") == 1)
            {
                StarCount += 1; 
                Level17.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level18") == 1 && Level18)
        {
            if (PlayerPrefs.GetInt("Level18ThreeStared") == 1)
            {
                StarCount += 3; 
                Level18.GetChild(1).gameObject.SetActive(true);
                Level18.GetChild(2).gameObject.SetActive(true);
                Level18.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level18TwoStared") == 1)
            {
                StarCount += 2; 
                Level18.GetChild(1).gameObject.SetActive(true);
                Level18.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level18OneStared") == 1)
            {
                StarCount += 1; 
                Level18.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level19") == 1 && Level19)
        {
            if (PlayerPrefs.GetInt("Level19ThreeStared") == 1)
            {
                StarCount += 3;
                Level19.GetChild(1).gameObject.SetActive(true);
                Level19.GetChild(2).gameObject.SetActive(true);
                Level19.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level19TwoStared") == 1)
            {
                StarCount += 2;
                Level19.GetChild(1).gameObject.SetActive(true);
                Level19.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level19OneStared") == 1)
            {
                StarCount += 1;
                Level19.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level20") == 1 && Level20)
        {
            if (PlayerPrefs.GetInt("Level20ThreeStared") == 1)
            {
                StarCount += 3;
                Level20.GetChild(1).gameObject.SetActive(true);
                Level20.GetChild(2).gameObject.SetActive(true);
                Level20.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level20TwoStared") == 1)
            {
                StarCount += 2; 
                Level20.GetChild(1).gameObject.SetActive(true);
                Level20.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level20OneStared") == 1)
            {
                StarCount += 1;
                Level20.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level21") == 1 && Level21)
        {
            if (PlayerPrefs.GetInt("Level21ThreeStared") == 1)
            {
                StarCount += 3;
                Level21.GetChild(1).gameObject.SetActive(true);
                Level21.GetChild(2).gameObject.SetActive(true);
                Level21.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level21TwoStared") == 1)
            {
                StarCount += 2;
                Level21.GetChild(1).gameObject.SetActive(true);
                Level21.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level21OneStared") == 1)
            {
                StarCount += 1;
                Level21.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level22") == 1 && Level22)
        {
            if (PlayerPrefs.GetInt("Level22ThreeStared") == 1)
            {
                StarCount += 3;
                Level22.GetChild(1).gameObject.SetActive(true);
                Level22.GetChild(2).gameObject.SetActive(true);
                Level22.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level22TwoStared") == 1)
            {
                StarCount += 2;
                Level22.GetChild(1).gameObject.SetActive(true);
                Level22.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level22OneStared") == 1)
            {
                StarCount += 1;
                Level22.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level23") == 1 && Level23)
        {
            if (PlayerPrefs.GetInt("Level23ThreeStared") == 1)
            {
                StarCount += 3;
                Level23.GetChild(1).gameObject.SetActive(true);
                Level23.GetChild(2).gameObject.SetActive(true);
                Level23.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level23TwoStared") == 1)
            {
                StarCount += 2;
                Level23.GetChild(1).gameObject.SetActive(true);
                Level23.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level23OneStared") == 1)
            {
                StarCount += 1;
                Level23.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level24") == 1 && Level24)
        {
            if (PlayerPrefs.GetInt("Level24ThreeStared") == 1)
            {
                StarCount += 3;
                Level24.GetChild(1).gameObject.SetActive(true);
                Level24.GetChild(2).gameObject.SetActive(true);
                Level24.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level24TwoStared") == 1)
            {
                StarCount += 2;
                Level24.GetChild(1).gameObject.SetActive(true);
                Level24.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level24OneStared") == 1)
            {
                StarCount += 1;
                Level24.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level25") == 1 && Level25)
        {
            if (PlayerPrefs.GetInt("Level25ThreeStared") == 1)
            {
                StarCount += 3;
                Level25.GetChild(1).gameObject.SetActive(true);
                Level25.GetChild(2).gameObject.SetActive(true);
                Level25.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level25TwoStared") == 1)
            {
                StarCount += 2;
                Level25.GetChild(1).gameObject.SetActive(true);
                Level25.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level25OneStared") == 1)
            {
                StarCount += 1;
                Level25.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level26") == 1 && Level26)
        {
            if (PlayerPrefs.GetInt("Level26ThreeStared") == 1)
            {
                StarCount += 3;
                Level26.GetChild(1).gameObject.SetActive(true);
                Level26.GetChild(2).gameObject.SetActive(true);
                Level26.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level26TwoStared") == 1)
            {
                StarCount += 2;
                Level26.GetChild(1).gameObject.SetActive(true);
                Level26.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level26OneStared") == 1)
            {
                StarCount += 1;
                Level26.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level27") == 1 && Level27)
        {
            if (PlayerPrefs.GetInt("Level27ThreeStared") == 1)
            {
                StarCount += 3;
                Level27.GetChild(1).gameObject.SetActive(true);
                Level27.GetChild(2).gameObject.SetActive(true);
                Level27.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level27TwoStared") == 1)
            {
                StarCount += 2;
                Level27.GetChild(1).gameObject.SetActive(true);
                Level27.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level27OneStared") == 1)
            {
                StarCount += 1;
                Level27.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level28") == 1 && Level28)
        {
            if (PlayerPrefs.GetInt("Level28ThreeStared") == 1)
            {
                StarCount += 3;
                Level28.GetChild(1).gameObject.SetActive(true);
                Level28.GetChild(2).gameObject.SetActive(true);
                Level28.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level28TwoStared") == 1)
            {
                StarCount += 2;
                Level28.GetChild(1).gameObject.SetActive(true);
                Level28.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level28OneStared") == 1)
            {
                StarCount += 1;
                Level28.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level29") == 1 && Level29)
        {
            if (PlayerPrefs.GetInt("Level29ThreeStared") == 1)
            {
                StarCount += 3;
                Level29.GetChild(1).gameObject.SetActive(true);
                Level29.GetChild(2).gameObject.SetActive(true);
                Level29.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level29TwoStared") == 1)
            {
                StarCount += 2;
                Level29.GetChild(1).gameObject.SetActive(true);
                Level29.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level29OneStared") == 1)
            {
                StarCount += 1;
                Level29.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level30") == 1 && Level30)
        {
            if (PlayerPrefs.GetInt("Level30ThreeStared") == 1)
            {
                StarCount += 3;
                Level30.GetChild(1).gameObject.SetActive(true);
                Level30.GetChild(2).gameObject.SetActive(true);
                Level30.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level30TwoStared") == 1)
            {
                StarCount += 2;
                Level30.GetChild(1).gameObject.SetActive(true);
                Level30.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level30OneStared") == 1)
            {
                StarCount += 1;
                Level30.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level31") == 1 && Level31)
        {
            if (PlayerPrefs.GetInt("Level31ThreeStared") == 1)
            {
                StarCount += 3;
                Level31.GetChild(1).gameObject.SetActive(true);
                Level31.GetChild(2).gameObject.SetActive(true);
                Level31.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level31TwoStared") == 1)
            {
                StarCount += 2;
                Level31.GetChild(1).gameObject.SetActive(true);
                Level31.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level31OneStared") == 1)
            {
                StarCount += 1;
                Level31.GetChild(1).gameObject.SetActive(true);
            }
        }

        if (PlayerPrefs.GetInt("Level32") == 1 && Level32)
        {
            if (PlayerPrefs.GetInt("Level32ThreeStared") == 1)
            {
                StarCount += 3;
                Level32.GetChild(1).gameObject.SetActive(true);
                Level32.GetChild(2).gameObject.SetActive(true);
                Level32.GetChild(3).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level32TwoStared") == 1)
            {
                StarCount += 2;
                Level32.GetChild(1).gameObject.SetActive(true);
                Level32.GetChild(2).gameObject.SetActive(true);
            }
            else if (PlayerPrefs.GetInt("Level32OneStared") == 1)
            {
                StarCount += 1;
                Level32.GetChild(1).gameObject.SetActive(true);
            }
        }
    }  

    private void Update()
    {
        if (TotalStarCount) TotalStarCount.text = StarCount.ToString();
        if (TotalStarCount1) TotalStarCount1.text = StarCount.ToString();
        if (TotalStarCount2) TotalStarCount2.text = StarCount.ToString();
        if (TotalStarCount3) TotalStarCount3.text = StarCount.ToString();
    }

    public void LoadLevel(int sceneIndex)
    {
        Analytics.CustomEvent("LoadLevel" + RealTimeScene);

        AudioManager.instance.Play("Buttons");
        MapSelectionBackground.SetActive(false);
        CoinCountBackground.SetActive(false);
        StartCoroutine(LoadLevelAsync(sceneIndex));
    } 

    private IEnumerator LoadLevelAsync(int sceneIndex)
    {
        AsyncOperation operation = SceneManager.LoadSceneAsync(sceneIndex);
        LoadingImage.SetActive(true);

        while (!operation.isDone)
        {
            float Progress = Mathf.Clamp01(operation.progress / 0.9f);
            slider.value = Progress;
            LoadingPercentage.text = Progress * 100f + "%"; 
            yield return null;
        } 
    } 
}
