using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bricks : MonoBehaviour {
	// public variables
	public Sprite[] hitSprite;
	public AudioClip crack;
	public static int breakableCount = 0;
	public GameObject partical;

	// private variables
	private int timesHit;
	private LevelManager levelManager;
	private bool isBreakable;

	// Use this for initialization
	void Start ()
	{
		isBreakable = (this.tag == "Breakable");
		// keep track on breakable bricks
		if (isBreakable) {
			breakableCount ++;
		}
		timesHit = 0;
		levelManager = GameObject.FindObjectOfType<LevelManager>();
	}

	// Update is called once per frame
	void Update () {
		
	}

	// When the ball hit the bricks, increase the 'timesHit' number.
	void OnCollisionEnter2D (Collision2D collision)
	{	
		AudioSource.PlayClipAtPoint(crack, Camera.main.transform.position);
		timesHit++;
		Debug.Log("hit:" + timesHit);

//		StimulateWin();
	}

	void OnCollisionExit2D (Collision2D collision)
	{
		if (isBreakable) {
			HandleHits();
		}
		
	}

	void HandleHits(){
		int maxHits = hitSprite.Length + 1;
		if (timesHit >= maxHits) {
			Destroy (gameObject);
			breakableCount --;
			PuffSmoke();
			levelManager.BrickDestroied();
		} else {
			LoadSprite();
		}
	}

	void PuffSmoke ()
	{
		GameObject smokePuff = Instantiate(partical, gameObject.transform.position, Quaternion.identity);
		ParticleSystem.MainModule main = smokePuff.GetComponent<ParticleSystem>().main;
		main.startColor = gameObject.GetComponent<SpriteRenderer>().color;
	}

	void LoadSprite ()
	{
		int spriteIndex = timesHit - 1;
		spriteIndex = timesHit - 1;
		if (hitSprite [spriteIndex] != null) {
			this.GetComponent<SpriteRenderer> ().sprite = hitSprite [spriteIndex]; 
		} else {
			Debug.LogError("Brick sprite missing");
		}
	}

	// TODO remove this method once we can actually win!
	void StimulateWin ()
	{
		levelManager.LoadNextLevel();
	}
}
