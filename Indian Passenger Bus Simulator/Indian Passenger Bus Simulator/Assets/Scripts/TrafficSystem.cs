using System.Collections;
using UnityEngine;

public class TrafficSystem : MonoBehaviour
{
    #region TrafficLightsSetup
    public GameObject[] TrafficLights;
    public GameObject[] TrafficLights1;
    public GameObject[] TrafficLights2;
    public GameObject[] TrafficLights3;
    public GameObject[] TrafficLights4;
    public GameObject[] TrafficLights5;
    public GameObject[] TrafficLights6;
    public GameObject[] TrafficLights7;
    public GameObject[] TrafficLights8;
    public GameObject[] TrafficLights9;
    public GameObject[] TrafficLights10;
    public GameObject[] TrafficLights11;
    public GameObject[] TrafficLights12;
    public GameObject[] TrafficLights13;
    public GameObject[] TrafficLights14;
    public GameObject[] TrafficLights15;
    public GameObject[] TrafficLights16;
    public GameObject[] TrafficLights17;
    public GameObject[] TrafficLights18;
    public GameObject[] TrafficLights19;
    public GameObject[] TrafficLights20;
    public GameObject[] TrafficLights21;
    public GameObject[] TrafficLights22;
    public GameObject[] TrafficLights23;
    public GameObject[] TrafficLights24;
    public GameObject[] TrafficLights25;
    public GameObject[] TrafficLights26;
    public GameObject[] TrafficLights27;
    public GameObject[] TrafficLights28;
    public GameObject[] TrafficLights29;
    public GameObject[] TrafficLights30;
    public GameObject[] TrafficLights31;
    public GameObject[] TrafficLights32;
    public GameObject[] TrafficLights33;
    public GameObject[] TrafficLights34;
    public GameObject[] TrafficLights35;
    public GameObject[] TrafficLights36;
    public GameObject[] TrafficLights37;
    public GameObject[] TrafficLights38;
    public GameObject[] TrafficLights39;
    public GameObject[] TrafficLights40;
    public GameObject[] TrafficLights41;
    public GameObject[] TrafficLights42;
    public GameObject[] TrafficLights43;
    public GameObject[] TrafficLights44;
    public GameObject[] TrafficLights45;
    public GameObject[] TrafficLights46;
    public GameObject[] TrafficLights47;
    public GameObject[] TrafficLights48;
    public GameObject[] TrafficLights49;
    public GameObject[] TrafficLights50;
    public GameObject[] TrafficLights51;
    public GameObject[] TrafficLights52;
    public GameObject[] TrafficLights53;
    public GameObject[] TrafficLights54;
    public GameObject[] TrafficLights55;
    public GameObject[] TrafficLights56;
    public GameObject[] TrafficLights57;
    public GameObject[] TrafficLights58;
    public GameObject[] TrafficLights59;
    public GameObject[] TrafficLights60;
    public GameObject[] TrafficLights61;
    public GameObject[] TrafficLights62;
    public GameObject[] TrafficLights63;
    public GameObject[] TrafficLights64;
    public GameObject[] TrafficLights65;
    public GameObject[] TrafficLights66;
    public GameObject[] TrafficLights67;
    public GameObject[] TrafficLights68;
    public GameObject[] TrafficLights69;
    public GameObject[] TrafficLights70;
    public GameObject[] TrafficLights71;
    public GameObject[] TrafficLights72;
    public GameObject[] TrafficLights73;
    public GameObject[] TrafficLights74;
    public GameObject[] TrafficLights75;
    public GameObject[] TrafficLights76;
    public GameObject[] TrafficLights77;
    public GameObject[] TrafficLights78;
    public GameObject[] TrafficLights79;
    public GameObject[] TrafficLights80;
    public GameObject[] TrafficLights81;
    public GameObject[] TrafficLights82;
    public GameObject[] TrafficLights83;
    public GameObject[] TrafficLights84;
    public GameObject[] TrafficLights85;
    public GameObject[] TrafficLights86;
    public GameObject[] TrafficLights87;
    public GameObject[] TrafficLights88;
    public GameObject[] TrafficLights89;
    public GameObject[] TrafficLights90;
    public GameObject[] TrafficLights91;
    public GameObject[] TrafficLights92;
    public GameObject[] TrafficLights93;
    public GameObject[] TrafficLights94;
    public GameObject[] TrafficLights95;
    public GameObject[] TrafficLights96;
    public GameObject[] TrafficLights97;
    public GameObject[] TrafficLights98;
    public GameObject[] TrafficLights99;
    public GameObject[] TrafficLights100;
    public GameObject[] TrafficLights101;
    public GameObject[] TrafficLights102;
    public GameObject[] TrafficLights103;    

    [Space]
    public Rigidbody rigidbody;

    private void OnTriggerStay(Collider collider)
    {
        if (collider.gameObject.tag == ("GameController"))
        {
            if (TrafficLights[0].activeInHierarchy)
            {
                rigidbody.drag = 15f;
            }
            else
            {
                rigidbody.drag = 0.1f;
            }
        }
    }

    private void Start()
    {
        StartCoroutine(TrafficLightsSystem());
        StartCoroutine(TrafficLightsSystem1());
        StartCoroutine(TrafficLightsSystem2());
        StartCoroutine(TrafficLightsSystem3());
        StartCoroutine(TrafficLightsSystem4());
        StartCoroutine(TrafficLightsSystem5());
        StartCoroutine(TrafficLightsSystem6());
        StartCoroutine(TrafficLightsSystem7());
        StartCoroutine(TrafficLightsSystem8());
        StartCoroutine(TrafficLightsSystem9());
        StartCoroutine(TrafficLightsSystem10());
        StartCoroutine(TrafficLightsSystem11());
        StartCoroutine(TrafficLightsSystem12());
        StartCoroutine(TrafficLightsSystem13());
        StartCoroutine(TrafficLightsSystem14());
        StartCoroutine(TrafficLightsSystem15());
        StartCoroutine(TrafficLightsSystem16());
        StartCoroutine(TrafficLightsSystem17());
        StartCoroutine(TrafficLightsSystem18());
        StartCoroutine(TrafficLightsSystem19());
        StartCoroutine(TrafficLightsSystem20());
        StartCoroutine(TrafficLightsSystem21());
        StartCoroutine(TrafficLightsSystem22());
        StartCoroutine(TrafficLightsSystem23());
        StartCoroutine(TrafficLightsSystem24());
        StartCoroutine(TrafficLightsSystem25());
        StartCoroutine(TrafficLightsSystem26());
        StartCoroutine(TrafficLightsSystem27());
        StartCoroutine(TrafficLightsSystem28());
        StartCoroutine(TrafficLightsSystem29());
        StartCoroutine(TrafficLightsSystem30());
        StartCoroutine(TrafficLightsSystem31());
        StartCoroutine(TrafficLightsSystem32());
        StartCoroutine(TrafficLightsSystem33());
        StartCoroutine(TrafficLightsSystem34());
        StartCoroutine(TrafficLightsSystem35());
        StartCoroutine(TrafficLightsSystem36());
        StartCoroutine(TrafficLightsSystem37());
        StartCoroutine(TrafficLightsSystem38());
        StartCoroutine(TrafficLightsSystem39());
        StartCoroutine(TrafficLightsSystem40());
        StartCoroutine(TrafficLightsSystem41());
        StartCoroutine(TrafficLightsSystem42());
        StartCoroutine(TrafficLightsSystem43());
        StartCoroutine(TrafficLightsSystem44());
        StartCoroutine(TrafficLightsSystem45());
        StartCoroutine(TrafficLightsSystem46());
        StartCoroutine(TrafficLightsSystem47());
        StartCoroutine(TrafficLightsSystem48());
        StartCoroutine(TrafficLightsSystem49());
        StartCoroutine(TrafficLightsSystem50());
        StartCoroutine(TrafficLightsSystem51());
        StartCoroutine(TrafficLightsSystem52());
        StartCoroutine(TrafficLightsSystem53());
        StartCoroutine(TrafficLightsSystem54());
        StartCoroutine(TrafficLightsSystem55());
        StartCoroutine(TrafficLightsSystem56());
        StartCoroutine(TrafficLightsSystem57());
        StartCoroutine(TrafficLightsSystem58());
        StartCoroutine(TrafficLightsSystem59());
        StartCoroutine(TrafficLightsSystem60());
        StartCoroutine(TrafficLightsSystem61());
        StartCoroutine(TrafficLightsSystem62());
        StartCoroutine(TrafficLightsSystem63());
        StartCoroutine(TrafficLightsSystem64());
        StartCoroutine(TrafficLightsSystem65());
        StartCoroutine(TrafficLightsSystem66());
        StartCoroutine(TrafficLightsSystem67());
        StartCoroutine(TrafficLightsSystem68());
        StartCoroutine(TrafficLightsSystem69());
        StartCoroutine(TrafficLightsSystem70());
        StartCoroutine(TrafficLightsSystem71());
        StartCoroutine(TrafficLightsSystem72());
        StartCoroutine(TrafficLightsSystem73());
        StartCoroutine(TrafficLightsSystem74());
        StartCoroutine(TrafficLightsSystem75());
        StartCoroutine(TrafficLightsSystem76());
        StartCoroutine(TrafficLightsSystem77());
        StartCoroutine(TrafficLightsSystem78());
        StartCoroutine(TrafficLightsSystem79());
        StartCoroutine(TrafficLightsSystem80());
        StartCoroutine(TrafficLightsSystem81());
        StartCoroutine(TrafficLightsSystem82());
        StartCoroutine(TrafficLightsSystem83());
        StartCoroutine(TrafficLightsSystem84());
        StartCoroutine(TrafficLightsSystem85());
        StartCoroutine(TrafficLightsSystem86());
        StartCoroutine(TrafficLightsSystem87());
        StartCoroutine(TrafficLightsSystem88());
        StartCoroutine(TrafficLightsSystem89());
        StartCoroutine(TrafficLightsSystem90());
        StartCoroutine(TrafficLightsSystem91());
        StartCoroutine(TrafficLightsSystem92());
        StartCoroutine(TrafficLightsSystem93());
        StartCoroutine(TrafficLightsSystem94());
        StartCoroutine(TrafficLightsSystem95());
        StartCoroutine(TrafficLightsSystem96());
        StartCoroutine(TrafficLightsSystem97());
        StartCoroutine(TrafficLightsSystem98());
        StartCoroutine(TrafficLightsSystem99());
        StartCoroutine(TrafficLightsSystem100());
        StartCoroutine(TrafficLightsSystem101());
        StartCoroutine(TrafficLightsSystem102());
        StartCoroutine(TrafficLightsSystem103());
    }

    public IEnumerator TrafficLightsSystem()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights.Length; j++)
            {
                TrafficLights[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights[0].SetActive(false);
                yield return null;
                TrafficLights[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights[1].SetActive(false);
                yield return null;
                TrafficLights[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem1()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights1.Length; j++)
            {
                TrafficLights1[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights1[0].SetActive(false);
                yield return null;
                TrafficLights1[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights1[1].SetActive(false);
                yield return null;
                TrafficLights1[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights1[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem2()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights2.Length; j++)
            {
                TrafficLights2[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights2[0].SetActive(false);
                yield return null;
                TrafficLights2[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights2[1].SetActive(false);
                yield return null;
                TrafficLights2[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights2[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem3()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights3.Length; j++)
            {
                TrafficLights3[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights3[0].SetActive(false);
                yield return null;
                TrafficLights3[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights3[1].SetActive(false);
                yield return null;
                TrafficLights3[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights3[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem4()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights4.Length; j++)
            {
                TrafficLights4[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights4[0].SetActive(false);
                yield return null;
                TrafficLights4[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights4[1].SetActive(false);
                yield return null;
                TrafficLights4[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights4[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem5()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights5.Length; j++)
            {
                TrafficLights5[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights5[0].SetActive(false);
                yield return null;
                TrafficLights5[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights5[1].SetActive(false);
                yield return null;
                TrafficLights5[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights5[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem6()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights6.Length; j++)
            {
                TrafficLights6[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights6[0].SetActive(false);
                yield return null;
                TrafficLights6[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights6[1].SetActive(false);
                yield return null;
                TrafficLights6[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights6[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem7()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights7.Length; j++)
            {
                TrafficLights7[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights7[0].SetActive(false);
                yield return null;
                TrafficLights7[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights7[1].SetActive(false);
                yield return null;
                TrafficLights7[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights7[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem8()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights8.Length; j++)
            {
                TrafficLights8[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights8[0].SetActive(false);
                yield return null;
                TrafficLights8[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights8[1].SetActive(false);
                yield return null;
                TrafficLights8[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights8[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem9()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights9.Length; j++)
            {
                TrafficLights9[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights9[0].SetActive(false);
                yield return null;
                TrafficLights9[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights9[1].SetActive(false);
                yield return null;
                TrafficLights9[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights9[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem10()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights10.Length; j++)
            {
                TrafficLights10[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights10[0].SetActive(false);
                yield return null;
                TrafficLights10[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights10[1].SetActive(false);
                yield return null;
                TrafficLights10[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights10[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem11()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights11.Length; j++)
            {
                TrafficLights11[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights11[0].SetActive(false);
                yield return null;
                TrafficLights11[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights11[1].SetActive(false);
                yield return null;
                TrafficLights11[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights11[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem12()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights12.Length; j++)
            {
                TrafficLights12[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights12[0].SetActive(false);
                yield return null;
                TrafficLights12[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights12[1].SetActive(false);
                yield return null;
                TrafficLights12[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights12[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem13()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights13.Length; j++)
            {
                TrafficLights13[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights13[0].SetActive(false);
                yield return null;
                TrafficLights13[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights13[1].SetActive(false);
                yield return null;
                TrafficLights13[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights13[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem14()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights14.Length; j++)
            {
                TrafficLights14[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights14[0].SetActive(false);
                yield return null;
                TrafficLights14[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights14[1].SetActive(false);
                yield return null;
                TrafficLights14[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights14[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem15()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights15.Length; j++)
            {
                TrafficLights15[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights15[0].SetActive(false);
                yield return null;
                TrafficLights15[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights15[1].SetActive(false);
                yield return null;
                TrafficLights15[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights15[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem16()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights16.Length; j++)
            {
                TrafficLights16[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights16[0].SetActive(false);
                yield return null;
                TrafficLights16[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights16[1].SetActive(false);
                yield return null;
                TrafficLights16[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights16[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem17()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights17.Length; j++)
            {
                TrafficLights17[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights17[0].SetActive(false);
                yield return null;
                TrafficLights17[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights17[1].SetActive(false);
                yield return null;
                TrafficLights17[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights17[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem18()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights18.Length; j++)
            {
                TrafficLights18[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights18[0].SetActive(false);
                yield return null;
                TrafficLights18[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights18[1].SetActive(false);
                yield return null;
                TrafficLights18[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights18[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem19()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights19.Length; j++)
            {
                TrafficLights19[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights19[0].SetActive(false);
                yield return null;
                TrafficLights19[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights19[1].SetActive(false);
                yield return null;
                TrafficLights19[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights19[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem20()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights20.Length; j++)
            {
                TrafficLights20[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights20[0].SetActive(false);
                yield return null;
                TrafficLights20[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights20[1].SetActive(false);
                yield return null;
                TrafficLights20[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights20[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem21()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights21.Length; j++)
            {
                TrafficLights21[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights21[0].SetActive(false);
                yield return null;
                TrafficLights21[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights21[1].SetActive(false);
                yield return null;
                TrafficLights21[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights21[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem22()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights22.Length; j++)
            {
                TrafficLights22[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights22[0].SetActive(false);
                yield return null;
                TrafficLights22[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights22[1].SetActive(false);
                yield return null;
                TrafficLights22[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights22[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem23()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights23.Length; j++)
            {
                TrafficLights23[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights23[0].SetActive(false);
                yield return null;
                TrafficLights23[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights23[1].SetActive(false);
                yield return null;
                TrafficLights23[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights23[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem24()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights24.Length; j++)
            {
                TrafficLights24[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights24[0].SetActive(false);
                yield return null;
                TrafficLights24[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights24[1].SetActive(false);
                yield return null;
                TrafficLights24[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights24[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem25()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights25.Length; j++)
            {
                TrafficLights25[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights25[0].SetActive(false);
                yield return null;
                TrafficLights25[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights25[1].SetActive(false);
                yield return null;
                TrafficLights25[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights25[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem26()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights26.Length; j++)
            {
                TrafficLights26[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights26[0].SetActive(false);
                yield return null;
                TrafficLights26[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights26[1].SetActive(false);
                yield return null;
                TrafficLights26[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights26[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem27()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights27.Length; j++)
            {
                TrafficLights27[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights27[0].SetActive(false);
                yield return null;
                TrafficLights27[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights27[1].SetActive(false);
                yield return null;
                TrafficLights27[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights27[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem28()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights28.Length; j++)
            {
                TrafficLights28[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights28[0].SetActive(false);
                yield return null;
                TrafficLights28[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights28[1].SetActive(false);
                yield return null;
                TrafficLights28[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights28[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem29()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights29.Length; j++)
            {
                TrafficLights29[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights29[0].SetActive(false);
                yield return null;
                TrafficLights29[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights29[1].SetActive(false);
                yield return null;
                TrafficLights29[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights29[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem30()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights30.Length; j++)
            {
                TrafficLights30[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights30[0].SetActive(false);
                yield return null;
                TrafficLights30[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights30[1].SetActive(false);
                yield return null;
                TrafficLights30[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights30[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem31()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights31.Length; j++)
            {
                TrafficLights31[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights31[0].SetActive(false);
                yield return null;
                TrafficLights31[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights31[1].SetActive(false);
                yield return null;
                TrafficLights31[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights31[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem32()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights32.Length; j++)
            {
                TrafficLights32[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights32[0].SetActive(false);
                yield return null;
                TrafficLights32[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights32[1].SetActive(false);
                yield return null;
                TrafficLights32[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights32[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem33()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights33.Length; j++)
            {
                TrafficLights33[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights33[0].SetActive(false);
                yield return null;
                TrafficLights33[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights33[1].SetActive(false);
                yield return null;
                TrafficLights33[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights33[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem34()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights34.Length; j++)
            {
                TrafficLights34[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights34[0].SetActive(false);
                yield return null;
                TrafficLights34[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights34[1].SetActive(false);
                yield return null;
                TrafficLights34[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights34[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem35()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights35.Length; j++)
            {
                TrafficLights35[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights35[0].SetActive(false);
                yield return null;
                TrafficLights35[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights35[1].SetActive(false);
                yield return null;
                TrafficLights35[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights35[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem36()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights36.Length; j++)
            {
                TrafficLights36[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights36[0].SetActive(false);
                yield return null;
                TrafficLights36[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights36[1].SetActive(false);
                yield return null;
                TrafficLights36[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights36[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem37()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights37.Length; j++)
            {
                TrafficLights37[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights37[0].SetActive(false);
                yield return null;
                TrafficLights37[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights37[1].SetActive(false);
                yield return null;
                TrafficLights37[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights37[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem38()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights38.Length; j++)
            {
                TrafficLights38[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights38[0].SetActive(false);
                yield return null;
                TrafficLights38[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights38[1].SetActive(false);
                yield return null;
                TrafficLights38[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights38[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem39()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights39.Length; j++)
            {
                TrafficLights39[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights39[0].SetActive(false);
                yield return null;
                TrafficLights39[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights39[1].SetActive(false);
                yield return null;
                TrafficLights39[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights39[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem40()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights40.Length; j++)
            {
                TrafficLights40[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights40[0].SetActive(false);
                yield return null;
                TrafficLights40[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights40[1].SetActive(false);
                yield return null;
                TrafficLights40[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights40[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem41()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights41.Length; j++)
            {
                TrafficLights41[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights41[0].SetActive(false);
                yield return null;
                TrafficLights41[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights41[1].SetActive(false);
                yield return null;
                TrafficLights41[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights41[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem42()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights42.Length; j++)
            {
                TrafficLights42[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights42[0].SetActive(false);
                yield return null;
                TrafficLights42[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights42[1].SetActive(false);
                yield return null;
                TrafficLights42[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights42[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem43()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights43.Length; j++)
            {
                TrafficLights43[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights43[0].SetActive(false);
                yield return null;
                TrafficLights43[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights43[1].SetActive(false);
                yield return null;
                TrafficLights43[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights43[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem44()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights44.Length; j++)
            {
                TrafficLights44[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights44[0].SetActive(false);
                yield return null;
                TrafficLights44[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights44[1].SetActive(false);
                yield return null;
                TrafficLights44[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights44[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem45()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights45.Length; j++)
            {
                TrafficLights45[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights45[0].SetActive(false);
                yield return null;
                TrafficLights45[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights45[1].SetActive(false);
                yield return null;
                TrafficLights45[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights45[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem46()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights46.Length; j++)
            {
                TrafficLights46[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights46[0].SetActive(false);
                yield return null;
                TrafficLights46[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights46[1].SetActive(false);
                yield return null;
                TrafficLights46[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights46[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem47()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights47.Length; j++)
            {
                TrafficLights47[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights47[0].SetActive(false);
                yield return null;
                TrafficLights47[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights47[1].SetActive(false);
                yield return null;
                TrafficLights47[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights47[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem48()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights48.Length; j++)
            {
                TrafficLights48[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights48[0].SetActive(false);
                yield return null;
                TrafficLights48[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights48[1].SetActive(false);
                yield return null;
                TrafficLights48[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights48[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem49()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights49.Length; j++)
            {
                TrafficLights49[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights49[0].SetActive(false);
                yield return null;
                TrafficLights49[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights49[1].SetActive(false);
                yield return null;
                TrafficLights49[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights49[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem50()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights50.Length; j++)
            {
                TrafficLights50[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights50[0].SetActive(false);
                yield return null;
                TrafficLights50[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights50[1].SetActive(false);
                yield return null;
                TrafficLights50[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights50[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem51()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights51.Length; j++)
            {
                TrafficLights51[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights51[0].SetActive(false);
                yield return null;
                TrafficLights51[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights51[1].SetActive(false);
                yield return null;
                TrafficLights51[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights51[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem52()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights52.Length; j++)
            {
                TrafficLights52[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights52[0].SetActive(false);
                yield return null;
                TrafficLights52[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights52[1].SetActive(false);
                yield return null;
                TrafficLights52[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights52[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem53()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights53.Length; j++)
            {
                TrafficLights53[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights53[0].SetActive(false);
                yield return null;
                TrafficLights53[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights53[1].SetActive(false);
                yield return null;
                TrafficLights53[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights53[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem54()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights54.Length; j++)
            {
                TrafficLights54[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights54[0].SetActive(false);
                yield return null;
                TrafficLights54[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights54[1].SetActive(false);
                yield return null;
                TrafficLights54[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights54[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem55()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights55.Length; j++)
            {
                TrafficLights55[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights55[0].SetActive(false);
                yield return null;
                TrafficLights55[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights55[1].SetActive(false);
                yield return null;
                TrafficLights55[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights55[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem56()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights56.Length; j++)
            {
                TrafficLights56[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights56[0].SetActive(false);
                yield return null;
                TrafficLights56[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights56[1].SetActive(false);
                yield return null;
                TrafficLights56[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights56[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem57()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights57.Length; j++)
            {
                TrafficLights57[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights57[0].SetActive(false);
                yield return null;
                TrafficLights57[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights57[1].SetActive(false);
                yield return null;
                TrafficLights57[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights57[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem58()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights58.Length; j++)
            {
                TrafficLights58[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights58[0].SetActive(false);
                yield return null;
                TrafficLights58[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights58[1].SetActive(false);
                yield return null;
                TrafficLights58[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights58[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem59()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights59.Length; j++)
            {
                TrafficLights59[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights59[0].SetActive(false);
                yield return null;
                TrafficLights59[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights59[1].SetActive(false);
                yield return null;
                TrafficLights59[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights59[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem60()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights60.Length; j++)
            {
                TrafficLights60[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights60[0].SetActive(false);
                yield return null;
                TrafficLights60[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights60[1].SetActive(false);
                yield return null;
                TrafficLights60[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights60[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem61()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights61.Length; j++)
            {
                TrafficLights61[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights61[0].SetActive(false);
                yield return null;
                TrafficLights61[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights61[1].SetActive(false);
                yield return null;
                TrafficLights61[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights61[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem62()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights62.Length; j++)
            {
                TrafficLights62[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights62[0].SetActive(false);
                yield return null;
                TrafficLights62[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights62[1].SetActive(false);
                yield return null;
                TrafficLights62[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights62[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem63()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights63.Length; j++)
            {
                TrafficLights63[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights63[0].SetActive(false);
                yield return null;
                TrafficLights63[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights63[1].SetActive(false);
                yield return null;
                TrafficLights63[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights63[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem64()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights64.Length; j++)
            {
                TrafficLights64[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights64[0].SetActive(false);
                yield return null;
                TrafficLights64[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights64[1].SetActive(false);
                yield return null;
                TrafficLights64[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights64[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem65()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights65.Length; j++)
            {
                TrafficLights65[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights65[0].SetActive(false);
                yield return null;
                TrafficLights65[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights65[1].SetActive(false);
                yield return null;
                TrafficLights65[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights65[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem66()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights66.Length; j++)
            {
                TrafficLights66[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights66[0].SetActive(false);
                yield return null;
                TrafficLights66[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights66[1].SetActive(false);
                yield return null;
                TrafficLights66[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights66[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem67()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights67.Length; j++)
            {
                TrafficLights67[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights67[0].SetActive(false);
                yield return null;
                TrafficLights67[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights67[1].SetActive(false);
                yield return null;
                TrafficLights67[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights67[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem68()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights68.Length; j++)
            {
                TrafficLights68[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights68[0].SetActive(false);
                yield return null;
                TrafficLights68[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights68[1].SetActive(false);
                yield return null;
                TrafficLights68[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights68[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem69()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights69.Length; j++)
            {
                TrafficLights69[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights69[0].SetActive(false);
                yield return null;
                TrafficLights69[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights69[1].SetActive(false);
                yield return null;
                TrafficLights69[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights69[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem70()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights70.Length; j++)
            {
                TrafficLights70[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights70[0].SetActive(false);
                yield return null;
                TrafficLights70[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights70[1].SetActive(false);
                yield return null;
                TrafficLights70[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights70[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem71()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights71.Length; j++)
            {
                TrafficLights71[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights71[0].SetActive(false);
                yield return null;
                TrafficLights71[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights71[1].SetActive(false);
                yield return null;
                TrafficLights71[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights71[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem72()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights72.Length; j++)
            {
                TrafficLights72[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights72[0].SetActive(false);
                yield return null;
                TrafficLights72[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights72[1].SetActive(false);
                yield return null;
                TrafficLights72[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights72[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem73()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights73.Length; j++)
            {
                TrafficLights73[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights73[0].SetActive(false);
                yield return null;
                TrafficLights73[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights73[1].SetActive(false);
                yield return null;
                TrafficLights73[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights73[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem74()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights74.Length; j++)
            {
                TrafficLights74[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights74[0].SetActive(false);
                yield return null;
                TrafficLights74[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights74[1].SetActive(false);
                yield return null;
                TrafficLights74[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights74[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem75()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights75.Length; j++)
            {
                TrafficLights75[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights75[0].SetActive(false);
                yield return null;
                TrafficLights75[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights75[1].SetActive(false);
                yield return null;
                TrafficLights75[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights75[2].SetActive(false);
                yield return null;
            }
        }
    }

    public IEnumerator TrafficLightsSystem76()
    {
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < TrafficLights76.Length; j++)
            {
                TrafficLights76[0].SetActive(true);
                yield return new WaitForSeconds(3f);
                TrafficLights76[0].SetActive(false);
                yield return null;
                TrafficLights76[1].SetActive(true);
                yield return new WaitForSeconds(0.5f);
                TrafficLights76[1].SetActive(false);
                yield return null;
                TrafficLights76[2].SetActive(true);
                yield return new WaitForSeconds(4f);
                TrafficLights76[2].SetActive(false);
                yield return null;
            }
        }
    }

        public IEnumerator TrafficLightsSystem77()
        {
            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < TrafficLights77.Length; j++)
                {
                    TrafficLights77[0].SetActive(true);
                    yield return new WaitForSeconds(3f);
                    TrafficLights77[0].SetActive(false);
                    yield return null;
                    TrafficLights77[1].SetActive(true);
                    yield return new WaitForSeconds(0.5f);
                    TrafficLights77[1].SetActive(false);
                    yield return null;
                    TrafficLights77[2].SetActive(true);
                    yield return new WaitForSeconds(4f);
                    TrafficLights77[2].SetActive(false);
                    yield return null;
                }
            }
        }

        public IEnumerator TrafficLightsSystem78()
        {
            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < TrafficLights78.Length; j++)
                {
                    TrafficLights78[0].SetActive(true);
                    yield return new WaitForSeconds(3f);
                    TrafficLights78[0].SetActive(false);
                    yield return null;
                    TrafficLights78[1].SetActive(true);
                    yield return new WaitForSeconds(0.5f);
                    TrafficLights78[1].SetActive(false);
                    yield return null;
                    TrafficLights78[2].SetActive(true);
                    yield return new WaitForSeconds(4f);
                    TrafficLights78[2].SetActive(false);
                    yield return null;
                }
            }
        }

        public IEnumerator TrafficLightsSystem79()
        {
            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < TrafficLights79.Length; j++)
                {
                    TrafficLights79[0].SetActive(true);
                    yield return new WaitForSeconds(3f);
                    TrafficLights79[0].SetActive(false);
                    yield return null;
                    TrafficLights79[1].SetActive(true);
                    yield return new WaitForSeconds(0.5f);
                    TrafficLights79[1].SetActive(false);
                    yield return null;
                    TrafficLights79[2].SetActive(true);
                    yield return new WaitForSeconds(4f);
                    TrafficLights79[2].SetActive(false);
                    yield return null;
                }
            }
        }

        public IEnumerator TrafficLightsSystem80()
        {
            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < TrafficLights80.Length; j++)
                {
                    TrafficLights80[0].SetActive(true);
                    yield return new WaitForSeconds(3f);
                    TrafficLights80[0].SetActive(false);
                    yield return null;
                    TrafficLights80[1].SetActive(true);
                    yield return new WaitForSeconds(0.5f);
                    TrafficLights80[1].SetActive(false);
                    yield return null;
                    TrafficLights80[2].SetActive(true);
                    yield return new WaitForSeconds(4f);
                    TrafficLights80[2].SetActive(false);
                    yield return null;
                }
            }
        }

        public IEnumerator TrafficLightsSystem81()
        {
            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < TrafficLights81.Length; j++)
                {
                    TrafficLights81[0].SetActive(true);
                    yield return new WaitForSeconds(3f);
                    TrafficLights81[0].SetActive(false);
                    yield return null;
                    TrafficLights81[1].SetActive(true);
                    yield return new WaitForSeconds(0.5f);
                    TrafficLights81[1].SetActive(false);
                    yield return null;
                    TrafficLights81[2].SetActive(true);
                    yield return new WaitForSeconds(4f);
                    TrafficLights81[2].SetActive(false);
                    yield return null;
                }
            }
        }

        public IEnumerator TrafficLightsSystem82()
        {
            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < TrafficLights82.Length; j++)
                {
                    TrafficLights82[0].SetActive(true);
                    yield return new WaitForSeconds(3f);
                    TrafficLights82[0].SetActive(false);
                    yield return null;
                    TrafficLights82[1].SetActive(true);
                    yield return new WaitForSeconds(0.5f);
                    TrafficLights82[1].SetActive(false);
                    yield return null;
                    TrafficLights82[2].SetActive(true);
                    yield return new WaitForSeconds(4f);
                    TrafficLights82[2].SetActive(false);
                    yield return null;
                }
            }
        }

        public IEnumerator TrafficLightsSystem83()
        {
            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < TrafficLights83.Length; j++)
                {
                    TrafficLights83[0].SetActive(true);
                    yield return new WaitForSeconds(3f);
                    TrafficLights83[0].SetActive(false);
                    yield return null;
                    TrafficLights83[1].SetActive(true);
                    yield return new WaitForSeconds(0.5f);
                    TrafficLights83[1].SetActive(false);
                    yield return null;
                    TrafficLights83[2].SetActive(true);
                    yield return new WaitForSeconds(4f);
                    TrafficLights83[2].SetActive(false);
                    yield return null;
                }
            }
        }

        public IEnumerator TrafficLightsSystem84()
        {
            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < TrafficLights84.Length; j++)
                {
                    TrafficLights84[0].SetActive(true);
                    yield return new WaitForSeconds(3f);
                    TrafficLights84[0].SetActive(false);
                    yield return null;
                    TrafficLights84[1].SetActive(true);
                    yield return new WaitForSeconds(0.5f);
                    TrafficLights84[1].SetActive(false);
                    yield return null;
                    TrafficLights84[2].SetActive(true);
                    yield return new WaitForSeconds(4f);
                    TrafficLights84[2].SetActive(false);
                    yield return null;
                }
            }
        }

        public IEnumerator TrafficLightsSystem85()
        {
            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < TrafficLights85.Length; j++)
                {
                    TrafficLights85[0].SetActive(true);
                    yield return new WaitForSeconds(3f);
                    TrafficLights85[0].SetActive(false);
                    yield return null;
                    TrafficLights85[1].SetActive(true);
                    yield return new WaitForSeconds(0.5f);
                    TrafficLights85[1].SetActive(false);
                    yield return null;
                    TrafficLights85[2].SetActive(true);
                    yield return new WaitForSeconds(4f);
                    TrafficLights85[2].SetActive(false);
                    yield return null;
                }
            }
        }

        public IEnumerator TrafficLightsSystem86()
        {
            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < TrafficLights86.Length; j++)
                {
                    TrafficLights86[0].SetActive(true);
                    yield return new WaitForSeconds(3f);
                    TrafficLights86[0].SetActive(false);
                    yield return null;
                    TrafficLights86[1].SetActive(true);
                    yield return new WaitForSeconds(0.5f);
                    TrafficLights86[1].SetActive(false);
                    yield return null;
                    TrafficLights86[2].SetActive(true);
                    yield return new WaitForSeconds(4f);
                    TrafficLights86[2].SetActive(false);
                    yield return null;
                }
            }
        }

        public IEnumerator TrafficLightsSystem87()
        {
            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < TrafficLights87.Length; j++)
                {
                    TrafficLights87[0].SetActive(true);
                    yield return new WaitForSeconds(3f);
                    TrafficLights87[0].SetActive(false);
                    yield return null;
                    TrafficLights87[1].SetActive(true);
                    yield return new WaitForSeconds(0.5f);
                    TrafficLights87[1].SetActive(false);
                    yield return null;
                    TrafficLights87[2].SetActive(true);
                    yield return new WaitForSeconds(4f);
                    TrafficLights87[2].SetActive(false);
                    yield return null;
                }
            }
        }

        public IEnumerator TrafficLightsSystem88()
        {
            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < TrafficLights88.Length; j++)
                {
                    TrafficLights88[0].SetActive(true);
                    yield return new WaitForSeconds(3f);
                    TrafficLights88[0].SetActive(false);
                    yield return null;
                    TrafficLights88[1].SetActive(true);
                    yield return new WaitForSeconds(0.5f);
                    TrafficLights88[1].SetActive(false);
                    yield return null;
                    TrafficLights88[2].SetActive(true);
                    yield return new WaitForSeconds(4f);
                    TrafficLights88[2].SetActive(false);
                    yield return null;
                }
            }
        }

        public IEnumerator TrafficLightsSystem89()
        {
            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < TrafficLights89.Length; j++)
                {
                    TrafficLights89[0].SetActive(true);
                    yield return new WaitForSeconds(3f);
                    TrafficLights89[0].SetActive(false);
                    yield return null;
                    TrafficLights89[1].SetActive(true);
                    yield return new WaitForSeconds(0.5f);
                    TrafficLights89[1].SetActive(false);
                    yield return null;
                    TrafficLights89[2].SetActive(true);
                    yield return new WaitForSeconds(4f);
                    TrafficLights89[2].SetActive(false);
                    yield return null;
                }
            }
        }

        public IEnumerator TrafficLightsSystem90()
        {
            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < TrafficLights90.Length; j++)
                {
                    TrafficLights90[0].SetActive(true);
                    yield return new WaitForSeconds(3f);
                    TrafficLights90[0].SetActive(false);
                    yield return null;
                    TrafficLights90[1].SetActive(true);
                    yield return new WaitForSeconds(0.5f);
                    TrafficLights90[1].SetActive(false);
                    yield return null;
                    TrafficLights90[2].SetActive(true);
                    yield return new WaitForSeconds(4f);
                    TrafficLights90[2].SetActive(false);
                    yield return null;
                }
            }
        }

        public IEnumerator TrafficLightsSystem91()
        {
            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < TrafficLights91.Length; j++)
                {
                    TrafficLights91[0].SetActive(true);
                    yield return new WaitForSeconds(3f);
                    TrafficLights91[0].SetActive(false);
                    yield return null;
                    TrafficLights91[1].SetActive(true);
                    yield return new WaitForSeconds(0.5f);
                    TrafficLights91[1].SetActive(false);
                    yield return null;
                    TrafficLights91[2].SetActive(true);
                    yield return new WaitForSeconds(4f);
                    TrafficLights91[2].SetActive(false);
                    yield return null;
                }
            }
        }

        public IEnumerator TrafficLightsSystem92()
        {
            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < TrafficLights92.Length; j++)
                {
                    TrafficLights92[0].SetActive(true);
                    yield return new WaitForSeconds(3f);
                    TrafficLights92[0].SetActive(false);
                    yield return null;
                    TrafficLights92[1].SetActive(true);
                    yield return new WaitForSeconds(0.5f);
                    TrafficLights92[1].SetActive(false);
                    yield return null;
                    TrafficLights92[2].SetActive(true);
                    yield return new WaitForSeconds(4f);
                    TrafficLights92[2].SetActive(false);
                    yield return null;
                }
            }
        }

        public IEnumerator TrafficLightsSystem93()
        {
            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < TrafficLights93.Length; j++)
                {
                    TrafficLights93[0].SetActive(true);
                    yield return new WaitForSeconds(3f);
                    TrafficLights93[0].SetActive(false);
                    yield return null;
                    TrafficLights93[1].SetActive(true);
                    yield return new WaitForSeconds(0.5f);
                    TrafficLights93[1].SetActive(false);
                    yield return null;
                    TrafficLights93[2].SetActive(true);
                    yield return new WaitForSeconds(4f);
                    TrafficLights93[2].SetActive(false);
                    yield return null;
                }
            }
        }

        public IEnumerator TrafficLightsSystem94()
        {
            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < TrafficLights94.Length; j++)
                {
                    TrafficLights94[0].SetActive(true);
                    yield return new WaitForSeconds(3f);
                    TrafficLights94[0].SetActive(false);
                    yield return null;
                    TrafficLights94[1].SetActive(true);
                    yield return new WaitForSeconds(0.5f);
                    TrafficLights94[1].SetActive(false);
                    yield return null;
                    TrafficLights94[2].SetActive(true);
                    yield return new WaitForSeconds(4f);
                    TrafficLights94[2].SetActive(false);
                    yield return null;
                }
            }
        }

        public IEnumerator TrafficLightsSystem95()
        {
            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < TrafficLights95.Length; j++)
                {
                    TrafficLights95[0].SetActive(true);
                    yield return new WaitForSeconds(3f);
                    TrafficLights95[0].SetActive(false);
                    yield return null;
                    TrafficLights95[1].SetActive(true);
                    yield return new WaitForSeconds(0.5f);
                    TrafficLights95[1].SetActive(false);
                    yield return null;
                    TrafficLights95[2].SetActive(true);
                    yield return new WaitForSeconds(4f);
                    TrafficLights95[2].SetActive(false);
                    yield return null;
                }
            }
        }

        public IEnumerator TrafficLightsSystem96()
        {
            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < TrafficLights96.Length; j++)
                {
                    TrafficLights96[0].SetActive(true);
                    yield return new WaitForSeconds(3f);
                    TrafficLights96[0].SetActive(false);
                    yield return null;
                    TrafficLights96[1].SetActive(true);
                    yield return new WaitForSeconds(0.5f);
                    TrafficLights96[1].SetActive(false);
                    yield return null;
                    TrafficLights96[2].SetActive(true);
                    yield return new WaitForSeconds(4f);
                    TrafficLights96[2].SetActive(false);
                    yield return null;
                }
            }
        }

        public IEnumerator TrafficLightsSystem97()
        {
            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < TrafficLights97.Length; j++)
                {
                    TrafficLights97[0].SetActive(true);
                    yield return new WaitForSeconds(3f);
                    TrafficLights97[0].SetActive(false);
                    yield return null;
                    TrafficLights97[1].SetActive(true);
                    yield return new WaitForSeconds(0.5f);
                    TrafficLights97[1].SetActive(false);
                    yield return null;
                    TrafficLights97[2].SetActive(true);
                    yield return new WaitForSeconds(4f);
                    TrafficLights97[2].SetActive(false);
                    yield return null;
                }
            }
        }

        public IEnumerator TrafficLightsSystem98()
        {
            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < TrafficLights98.Length; j++)
                {
                    TrafficLights98[0].SetActive(true);
                    yield return new WaitForSeconds(3f);
                    TrafficLights98[0].SetActive(false);
                    yield return null;
                    TrafficLights98[1].SetActive(true);
                    yield return new WaitForSeconds(0.5f);
                    TrafficLights98[1].SetActive(false);
                    yield return null;
                    TrafficLights98[2].SetActive(true);
                    yield return new WaitForSeconds(4f);
                    TrafficLights98[2].SetActive(false);
                    yield return null;
                }
            }
        }

        public IEnumerator TrafficLightsSystem99()
        {
            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < TrafficLights99.Length; j++)
                {
                    TrafficLights99[0].SetActive(true);
                    yield return new WaitForSeconds(3f);
                    TrafficLights99[0].SetActive(false);
                    yield return null;
                    TrafficLights99[1].SetActive(true);
                    yield return new WaitForSeconds(0.5f);
                    TrafficLights99[1].SetActive(false);
                    yield return null;
                    TrafficLights99[2].SetActive(true);
                    yield return new WaitForSeconds(4f);
                    TrafficLights99[2].SetActive(false);
                    yield return null;
                }
            }
        }

        public IEnumerator TrafficLightsSystem100()
        {
            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < TrafficLights100.Length; j++)
                {
                    TrafficLights100[0].SetActive(true);
                    yield return new WaitForSeconds(3f);
                    TrafficLights100[0].SetActive(false);
                    yield return null;
                    TrafficLights100[1].SetActive(true);
                    yield return new WaitForSeconds(0.5f);
                    TrafficLights100[1].SetActive(false);
                    yield return null;
                    TrafficLights100[2].SetActive(true);
                    yield return new WaitForSeconds(4f);
                    TrafficLights100[2].SetActive(false);
                    yield return null;
                }
            }
        }

        public IEnumerator TrafficLightsSystem101()
        {
            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < TrafficLights101.Length; j++)
                {
                    TrafficLights101[0].SetActive(true);
                    yield return new WaitForSeconds(3f);
                    TrafficLights101[0].SetActive(false);
                    yield return null;
                    TrafficLights101[1].SetActive(true);
                    yield return new WaitForSeconds(0.5f);
                    TrafficLights101[1].SetActive(false);
                    yield return null;
                    TrafficLights101[2].SetActive(true);
                    yield return new WaitForSeconds(4f);
                    TrafficLights101[2].SetActive(false);
                    yield return null;
                }
            }
        }

        public IEnumerator TrafficLightsSystem102()
        {
            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < TrafficLights102.Length; j++)
                {
                    TrafficLights102[0].SetActive(true);
                    yield return new WaitForSeconds(3f);
                    TrafficLights102[0].SetActive(false);
                    yield return null;
                    TrafficLights102[1].SetActive(true);
                    yield return new WaitForSeconds(0.5f);
                    TrafficLights102[1].SetActive(false);
                    yield return null;
                    TrafficLights102[2].SetActive(true);
                    yield return new WaitForSeconds(4f);
                    TrafficLights102[2].SetActive(false);
                    yield return null;
                }
            }
        }

        public IEnumerator TrafficLightsSystem103()
        {
            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < TrafficLights103.Length; j++)
                {
                    TrafficLights103[0].SetActive(true);
                    yield return new WaitForSeconds(3f);
                    TrafficLights103[0].SetActive(false);
                    yield return null;
                    TrafficLights103[1].SetActive(true);
                    yield return new WaitForSeconds(0.5f);
                    TrafficLights103[1].SetActive(false);
                    yield return null;
                    TrafficLights103[2].SetActive(true);
                    yield return new WaitForSeconds(4f);
                    TrafficLights103[2].SetActive(false);
                    yield return null;
                }
            }
        }

    #endregion
}
