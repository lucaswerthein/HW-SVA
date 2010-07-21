#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

	ofSetVerticalSync(true);
	
	ofBackground(150, 150, 150);
	
	colorX = 0;
	colorY = 0;
	
	T = 50;

}

//--------------------------------------------------------------
void testApp::update(){
	
	colorX = ((float)mouseX / (float)ofGetWidth()) * 255;
	colorY = ((float)mouseY / (float)ofGetHeight()) * 255;
	
	if ( ofGetElapsedTimef() >= 3 ) {
		T++;
	} if ( T >= ofGetWidth() ) {
		T = -400;
	}

}

//--------------------------------------------------------------
void testApp::draw(){
	
	
	ofSetColor(177, colorX, colorY);
	
	ofRect(T, 50, 10, 160);
	ofRect(T, 50, 100, 10);
	ofRect(T, 150, 100, 10);
	ofRect(T, 200, 100, 10);
	
	ofRect(T+110, 50, 100, 10);
	ofRect(T+110, 50, 10, 100);
	ofRect(T+110, 150, 100, 10);
	ofRect(T+200, 150, 10, 50);
	ofRect(T+110, 200, 100, 10);
	
	ofRect(T+220, 50, 100, 10);
	ofRect(T+265, 50, 10, 160);
	
	ofRect(380, 50, 10, 160);
	ofRect(380, 150, 100, 10);
	ofRect(470, 50, 10, 160);
	
	ofRect(490, 50, 10, 160);
	ofRect(490, 50, 100, 10);
	ofRect(490, 150, 100, 10);
	ofRect(490, 200, 100, 10);
	
	ofRect(600, 50, 100, 10);
	ofRect(600, 50, 10, 160);
	ofRect(600, 150, 100, 10);
	ofRect(600, 150, 10, 50);
	ofRect(690, 50, 10, 100);
	ofPushMatrix();
		ofTranslate(670, 160, 0);
		ofRotateZ(315);
		ofRect(0, 0, 10, 30);
	ofPopMatrix();
	ofRect(690, 174, 10, 36);

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

