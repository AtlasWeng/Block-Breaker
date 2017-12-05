using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MusicPlayer : MonoBehaviour {
	static MusicPlayer instance = null;

	void Awake ()
	{
		if (instance != null) {
			Destroy (gameObject);
			print ("Duplicated Music Player has been destroied.");
		} else {
			instance = this;
			GameObject.DontDestroyOnLoad (gameObject);
		}
	}

	// Update is called once per frame
	void Update () {
		
	}
}
