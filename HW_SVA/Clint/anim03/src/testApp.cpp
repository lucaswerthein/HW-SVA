#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	
	ofSetVerticalSync(true);
	ofBackground(0, 0, 0);
	
	rotZ = 0;
	mouseOn = false;
	mainZ = -5000;

}

//--------------------------------------------------------------
void testApp::update(){

	mainX = mouseX;
	mainY = mouseY;
	
	// rotation rate
	rotZ = rotZ + 1;
	
	// zoom when clicked
	if (mouseOn) {
		// zoom rate
		mainZ = mainZ + 20;
	}
	//zoom out when no click
	else {
		mainZ = mainZ - 20;
	}

	// zoom in max
	if (mainZ > 400) {
		mainZ = 400;
	}
	
	// zoom out max
	if (mainZ < -5000) {
		mainZ = -5000;
	}
}

//--------------------------------------------------------------
void testApp::draw(){

	ofTranslate(mainX, mainY, mainZ);

	ofRotateZ(rotZ * 2);
	ofSetColor(255, 255, 0);
	ofRect(50, 50, 100, 100);

	ofRotateY(rotZ);
	ofSetColor(0, 255, 0);	
	ofRect(50, 50, 100, 100);
	
	ofRotateX(rotZ);
	ofSetColor(255, 0, 0);	
	ofRect(50, 50, 100, 100);	

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
	mouseOn = true;
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
	mouseOn = false;
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

