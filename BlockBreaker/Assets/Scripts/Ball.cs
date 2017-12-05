using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ball : MonoBehaviour {
	private Paddle paddle;
	private bool gameStart = false;
	private Vector3 PaddleToBallPos;

	// Use this for initialization
	void Start () {
		paddle = GameObject.FindObjectOfType<Paddle>();
		PaddleToBallPos = this.transform.position - paddle.transform.position;
	}

	void OnCollisionEnter2D (Collision2D collsion)
	{
		Vector2 tweak = new Vector2(Random.Range(0f, 0.2f), Random.Range(0f, 0.2f));

		if (gameStart) {
			this.GetComponent<AudioSource>().Play();
			this.GetComponent<Rigidbody2D>().velocity += tweak;
		}

	}

	// Update is called once per frame
	void Update ()
	{
		if (!gameStart) {
			// locked the ball to the paddle
			this.transform.position = paddle.transform.position + PaddleToBallPos;

			// Wait for a mouse clicking to launch
			if (Input.GetMouseButtonDown (0)) {
				print ("press the left mouse");
				gameStart = true;
				this.GetComponent<Rigidbody2D>().velocity = new Vector2 (5f, 10f);	
			}
		}
	}
}
