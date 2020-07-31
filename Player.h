#pragma once
#include "ofMain.h"

class Player
{
public:
	void setup();
	void update();
	void draw();
	void jump();

	ofImage image;
	ofImage ground1;
	ofImage ground2;
	ofImage ground3;
	ofImage ground4;

	int ground_v = 10;
	int wall_v = 2;
	double gravity = 10;


	int x1 = 0;
	int x2 = 1600;
	int x3 = 0;
	int x4 = 1600;
	int cube_height = 550;

	int pre_jump_height = 0;
	int jump_height = 250;

	bool up = true;
	bool jumping = false;
	bool hanging = false;
	int delay = 3;
};

