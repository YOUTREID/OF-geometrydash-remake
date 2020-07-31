#include "Player.h"
#include "ofMain.h"

void Player::setup() {
	image.load("player.png");
	ground1.load("ground.png");
	ground2.load("ground.png");
	ground3.load("ground.png");
	ground4.load("ground.png");
}

void Player::update() {
	x1 -= ground_v;
	if (x1 < -1600) {
		x1 += 1600;
	}
	x2 -= ground_v;
	if (x2 < 0) {
		x2 += 1600;
	}

	x3 -= wall_v;
	if (x3 < -1600) {
		x3 += 1600;
	}
	x4 -= wall_v;
	if (x4 < 0) {
		x4 += 1600;
	}

	if (jumping) {
		if (up) {
			cube_height -= gravity;
		}
		else if (hanging && !up) {
			delay--;
		}
		else {
			cube_height += gravity;
		}

		if (cube_height <= pre_jump_height - jump_height) {
			up = false;
			if (delay > 0) {
				hanging = true;
			}
			else {
				hanging = false;
			}
		}
		if (cube_height == pre_jump_height) {
			jumping = false;
			up = true;
			hanging = false;
			delay = 3;
		}
	}
}

void Player::draw() {
	ofSetColor(255, 255, 255); //white
	ground3.draw(x3, 0, 1600, 650);
	ground4.draw(x4, 0, 1600, 650);
	ofSetColor(135, 206, 250); //blue
	image.draw(570, cube_height, 100, 100);
	ofSetColor(148, 0, 211); //purple
	ground1.draw(x1, 650, 1600, 350);
	ground2.draw(x2, 650, 1600, 350);
}

void Player::jump() {
	if (!jumping) {
		jumping = true;
	}
	pre_jump_height = cube_height;
}
