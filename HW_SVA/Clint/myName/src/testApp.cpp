#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	
	ofSetVerticalSync(true);
	ofBackground(0, 0, 0);
	
	// initialize random RGB
	rColor = ofRandom(0, 85);
	gColor = ofRandom(86, 170);
	bColor = ofRandom(171, 255);

	// set flags for increment / decrement
	rUp = gUp = bUp = true;
	
}

//--------------------------------------------------------------
void testApp::update(){

	// increment or decrement colors between 0 and 255
	if (rUp) {
		rColor++;
	}
	else {
		rColor--;
	}

	if (gUp) {
		gColor++;
	}
	else {
		gColor--;
	}

	if (bUp) {
		bColor++;
	}
	else {
		bColor--;
	}

	// conditionals for 0 to 255
	if (rColor > 255) {
		rUp = false;
	}
	else if (rColor < 0) {
		rUp = true;
	}
	
	if (gColor > 255) {
		gUp = false;
	}
	else if (gColor < 0) {
		gUp = true;
	}
	
	if (bColor > 255) {
		bUp = false;
	}
	else if (bColor < 0) {
		bUp = true;
	}
	
	ofBackground(255-rColor, 255-gColor, 255-bColor);
	
}

//--------------------------------------------------------------
void testApp::draw(){
	
	ofSetColor(rColor, gColor, bColor);
	
	//C
	ofRect(10, 10, 100, 5);
	ofRect(10, 10, 5, 100);
	ofRect(10, 110, 100, 5);
	
	//L
	ofRect(130, 10, 5, 100);
	ofRect(130, 110, 100, 5);
		
	//I
	ofRect(250, 10, 5, 105);
	
	//N
	ofRect(275, 10, 5, 105);
	
	//angle
	ofPushMatrix();
		ofTranslate(275, 14, 0);
		ofRotateZ(-45);
		ofRect(0, 0, 5, 142);
	ofPopMatrix();
	
	ofRect(375, 10, 5, 105);	
	
	//T
	ofRect(400, 10, 100, 5);
	ofRect(447, 10, 5, 105);
	
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

	cout << "r=" << rColor << " g=" << gColor << " b=" << bColor << endl;
	
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

