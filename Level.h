#pragma once
#include "ofMain.h"
#include <vector> 
#include <string>

class Level {
public:
	void setup(int level);
	void update();
	void draw();

	ofSoundPlayer music;
	ofImage obstacle;

	std::vector<ofImage> blocks;
	std::vector<int> level_vector;
	std::vector<int> x_vector;
	std::string level_string;

	int temp;
	int x_start = 970;
	int gap = 100;
	int x_dimension = 100;
	int y_dimension = 100;
	int v_ground = 10;

};