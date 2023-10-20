using UnityEngine;
using System;  

public class AudioManager : MonoBehaviour
{
    public Sound[] sounds;
    public static AudioManager instance;
    private bool m_StartedSound; 

    private void Awake()
    { 
        if(instance == null)
        {
            instance = this; 
        }
        else
        {
            Destroy(gameObject);
            return; 
        }

        DontDestroyOnLoad(gameObject); 

        foreach(Sound s in sounds)
        {
            s.source = gameObject.AddComponent<AudioSource>();
            s.source.clip = s.clip;
        }
    } 

    public void Play(string name)
    {
        Sound s = Array.Find(sounds, sounds => sounds.name == name);
        if (s == null)
        {
            Debug.Log("Sound not Found!!"); 
            return;
        }

        s.source.volume = s.volume;
        s.source.pitch = s.pitch;
        s.source.loop = s.loop;
        s.source.Play(); 
    }

    public void Stop(string name)
    {
        Sound s = Array.Find(sounds, sounds => sounds.name == name);
        if (s == null)
        {
            Debug.Log("Sound not Found!!");
            return;
        }

        s.source.Stop();
    }

    public void StopSound()
    {
        //Destroy all audio sources on this object:
        foreach (var source in GetComponents<AudioSource>())
        {
            Destroy(source);
        }

        m_StartedSound = false;
    }
    public void StartSound()
    {
        foreach (Sound sound in sounds)
        {
            sound.source = gameObject.AddComponent<AudioSource>();
            sound.source.clip = sound.clip;
        }

        Sound s = Array.Find(sounds, sounds => sounds.name == name);
        if (s == null)
        {
            Debug.Log("Sound not Found!!");
            return;
        }

        s.source.volume = s.volume;
        s.source.pitch = s.pitch;
        s.source.loop = s.loop;
        s.source.Play();

        m_StartedSound = true;
    }
}
