#pragma once

#include "ofMain.h"
#include "Player.h"
#include "Level.h"

class ofApp : public ofBaseApp {
	//music player
	ofVideoPlayer background;
	ofSoundPlayer home;
	ofImage player_image;
	ofTrueTypeFont font1;
	ofTrueTypeFont font2;
	ofTrueTypeFont font3;

	string game_state;
	Player cube;
	Level game;

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	//void mouseMoved(int x, int y);
	//void mouseDragged(int x, int y, int button);
	//void mousePressed(int x, int y, int button);
	//void mouseReleased(int x, int y, int button);
	//void mouseEntered(int x, int y);
	//void mouseExited(int x, int y);
	//void windowResized(int w, int h);
	//void dragEvent(ofDragInfo dragInfo);
	//void gotMessage(ofMessage msg);

};