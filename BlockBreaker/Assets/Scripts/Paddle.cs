using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Paddle : MonoBehaviour {
	// public variables
	public bool autoPlay = false;
	public float minX, maxX;

	// private variables
	private Ball ball;
	
	// Use this for initialization
	void Start () {
		ball = GameObject.FindObjectOfType<Ball>();
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (!autoPlay) {
			MoveWithMouse ();
		} else {
			AutoPlay();
		}
	}

	void AutoPlay(){
		Vector3 ballPos = ball.transform.position;
		Vector3 paddlePos = new Vector3 (Mathf.Clamp(ballPos.x, minX, maxX), 
										this.transform.position.y, 
										0f);
		this.transform.position = paddlePos;
	}

	void MoveWithMouse(){
		float mousePosInBlocks = Input.mousePosition.x / Screen.width * 16;
		Vector3 paddlePos = new Vector3 (Mathf.Clamp(mousePosInBlocks, minX, maxX), 
										this.transform.position.y, 
										0f);
		this.transform.position = paddlePos;
	}
}
