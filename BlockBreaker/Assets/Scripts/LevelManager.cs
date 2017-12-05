using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelManager : MonoBehaviour {

	public void LoadLevel(string name)
	{
		Debug.Log("Load Level Requested for: " + name);
		Bricks.breakableCount = 0;
		SceneManager.LoadScene(name);
	}

	public void QuitLevel()
	{
		Debug.Log("I Wanna Quit!");
		Application.Quit();
	}

	public void LoadNextLevel ()
	{
		SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		Bricks.breakableCount = 0;
	}

	public void BrickDestroied ()
	{
		if (Bricks.breakableCount <= 0) {
			LoadNextLevel();
		}
	}
}
