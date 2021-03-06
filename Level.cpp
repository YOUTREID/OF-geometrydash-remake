#include "Level.h"
#include "ofMain.h"
#include <vector> 
#include <string>

using std::fstream;
using std::string;

void Level::setup(int level) {
	music.load("song_" + std::to_string(level) + ".mp3");
	music.setVolume(0.4);
	music.play();

	ofBuffer buffer = ofBufferFromFile("level_" + std::to_string(level) + ".txt");
	level_string = buffer.getText();
	level_vector.resize(level_string.size());
	for (int i = 0; i < level_string.size(); i++) {
		level_vector[i] = level_string.at(i) - '0';
	}

	//fill vector with ofImage objects
	for (int i = 0; i < level_vector.size(); i++) {
		blocks.push_back(obstacle);
		if (level_vector[i] != 0) {
			blocks[i].load("shape_" + std::to_string(level_vector[i]) + ".png");
		}
		x_vector.push_back(970 + i * gap);
	}

}

void Level::update() {
	for (int i = 0; i < blocks.size(); i++) {
		x_vector[i] -= v_ground;
	}
}

void Level::draw() {
	ofSetColor(0, 255, 255); //cyan

	for (int i = 0; i < blocks.size(); i++) {
		if (level_vector[i] != 0) {
			blocks[i].draw(x_vector[i], 550, 100, 100);
		}
	}

}

