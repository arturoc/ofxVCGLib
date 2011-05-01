#pragma once

#include "ofMain.h"

#include "ofxVCGLib.h"
#include "ofxAssimpModelLoader.h"

class testApp : public ofBaseApp{
public:
	void setup();
	void update();
	void draw();
	
	void keyPressed(int key);
	
	ofMesh mesh;
	ofxAssimpModelLoader modelLoader;
	ofLight	light;
	
	vector<ofVec3f> in;
	vector<ofVec3f> out;
	
	ofEasyCam cam;
};
