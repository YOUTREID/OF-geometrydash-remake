#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofBackground(255, 255, 255);

	home.load("title.mp3");
	home.setVolume(0.5);
	home.play();
	home.setLoop(true);
	font1.load("amatic.ttf", 150);
	font2.load("sans.otf", 30);
	font3.load("k.otf", 50);
	end.load("end.jpg");

	background.load("background.mp4");

	cube.setup();

	game_state = "home";
}

//--------------------------------------------------------------
void ofApp::update() {
	if (game_state == "home") {
		background.update();
		cube.reset();
		game.reset();
	}
	else if (game_state == "game") {
		cube.update();
		game.update();
		collisions();
		finished();
	}
}

//--------------------------------------------------------------
void ofApp::draw() {
	if (game_state == "home") {
		ofSetColor(255, 255, 255);
		background.draw(0, 0, 1600, 900);
		background.play();
		ofSetColor(255, 215, 0); //orange
		font1.drawString("Geometry  Jump", 400, 300);
		ofSetColor(0, 255, 0);
		font2.drawString("A game by Johnny Zhou", 700, 400);
		ofSetColor(0, 255, 0);
		ofDrawRectangle(400, 600, 150, 150);
		ofDrawRectangle(700, 600, 150, 150);
		ofDrawRectangle(1000, 600, 150, 150);
		ofSetColor(0, 0, 0);
		font3.drawString("1", 455, 685);
		font3.drawString("2", 755, 685);
		font3.drawString("3", 1055, 685);
	}
	else if (game_state == "game") {
		ofTrueTypeShutdown();
		cube.draw();
		game.draw();
		font1.drawString(std::to_string(cube.cube_height), 300, 200);
	}
	if (game_state == "end") {
		ofSetColor(255, 255, 255);
		end.draw(0, 0, 1600, 900);
		ofSetColor(255, 215, 0);
		font3.drawString("Congrats!", 700, 100);
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
	switch (key) {
	case '1':
		home.stop();
		game_state = "game";
		game.setup(1);
		break;
	case '2':
		home.stop();
		game_state = "game";
		game.setup(2);
		break;
	case '3':
		home.stop();
		game_state = "game";
		game.setup(3);
		break;
	case 'q':
		game.music.stop();
		ofTrueTypeShutdown();
		game_state = "home";
		game.reset();
		home.play();
		break;
	case ' ':
		cube.jump();
		break;
	case '0':
		game_state = "end";
		game.reset();
		cube.reset();
		home.play();
		break;
	}
}

void ofApp::collisions() {
	for (int i = 0; i < game.getX().size(); i++) {
		if (game.getX()[i] == 570) {
			if (game.getY()[i] != 900) {
				if (game.getY()[i] - 100 > cube.cube_height) {
					if (game.level_vector[i] == 3 && cube.cube_height == 450) {
						game.music.stop();
						game_state = "home";
						home.play();
					}
					else {
						cube.pre_jump_height = game.getY()[i] - 100;
						higher = true;
						cube.hanging = false;
					}
				}
			}
		}
		if (i != 0) {
			if (game.getX()[i] > 470 && game.getX()[i] < 570 && game.getY()[i] > game.getY()[i - 1] && higher) {
				cube.jumping = true;
				cube.up = false;
				if (game.getY()[i] = 900) {
					cube.pre_jump_height = 550;
				}
				//else {
				//	cube.pre_jump_height = game.getY()[i] - 100;
				//}
				higher = false;
			}

		}

		if (game.getX()[i] <= 670 && game.getX()[i] >= 470) {
			if (game.getY()[i] - 100 < cube.cube_height) {
				game.music.stop();
				game_state = "home";
				home.play();
			}
		}
	}
}

void ofApp::finished() {
	if (game.getX()[game.getX().size() - 1] < 0) {
		ofTrueTypeShutdown();
		game_state = "end";
		game.music.stop();
		game.reset();
		cube.reset();
		home.play();
	}
}

////--------------------------------------------------------------
//void ofApp::mouseMoved(int x, int y) {
//
//}
//
////--------------------------------------------------------------
//void ofApp::mouseDragged(int x, int y, int button) {
//
//}
//
////--------------------------------------------------------------
//void ofApp::mousePressed(int x, int y, int button) {
//
//}
//
////--------------------------------------------------------------
//void ofApp::mouseReleased(int x, int y, int button) {
//
//}
//
////--------------------------------------------------------------
//void ofApp::mouseEntered(int x, int y) {
//
//}
//
////--------------------------------------------------------------
//void ofApp::mouseExited(int x, int y) {
//
//}
//
////--------------------------------------------------------------
//void ofApp::windowResized(int w, int h) {
//
//}
//
////--------------------------------------------------------------
//void ofApp::gotMessage(ofMessage msg) {
//
//}
//
////--------------------------------------------------------------
//void ofApp::dragEvent(ofDragInfo dragInfo) {
//
//}