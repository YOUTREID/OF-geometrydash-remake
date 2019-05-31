#pragma once
#include "ofMain.h"
#include <vector> 
#include <string>
using std::vector;
using std::string;

class Level {
public:
	void setup(int level);
	void update();
	void draw();
	void reset();
	vector<int> getX();
	vector<int> getY();

	ofSoundPlayer music;
	ofImage obstacle;

	vector<ofImage> blocks;
	vector<int> level_vector;
	vector<int> x_vector;
	vector<int> y_vector;
	string level_string;

	int temp;
	int x_start = 970;
	int gap = 100;
	int x_dimension = 100;
	int y_dimension = 100;
	int v_ground = 10;

};