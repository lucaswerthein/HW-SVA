#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	
	ofSetVerticalSync(true);
	ofBackground(0, 0, 0);

	point1x = 80;
	point1y = 80;
	point1z = 0;
	point1w = 50;
	point1h = 50;
	
	point2x = 200;
	point2y = 200;
	point2z = 0;
	
	point3x = 50;
	point3y = 65;
	point3z = 0;	
	
	rot1z = 0;
	rotUp = true;
	
	xGap = 60;
	yGap = 60;
	
	rotOffset = 15;
}

//--------------------------------------------------------------
void testApp::update(){

	rot1z = rot1z + 3;
 
}

//--------------------------------------------------------------
void testApp::draw(){

	ofSetColor(255, 0, 0);
 
	//rotate on x
	
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 11; j++) {
			ofPushMatrix();
				ofTranslate(point3x + (xGap * i), point3y + (yGap * j), point3z);
				ofRotateX(rot1z + (rotOffset * i));
				ofRect(0, 0, point1w, point1h);
			ofPopMatrix();
		}
	}
		
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

