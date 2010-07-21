#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

	ofSetVerticalSync(true);
	ofBackground(0, 0, 0);
	
	timeH = ofGetHours();
	timeM = ofGetMinutes();
	timeS = ofGetSeconds();
	
	rotH = 0;
	rotM = 0;
	rotS = 0;

}

//--------------------------------------------------------------
void testApp::update(){

	timeH = ofGetHours();
	timeM = ofGetMinutes();
	timeS = ofGetSeconds();
	
	rotH = (timeH / 12) * 360;
	rotM = (timeM / 60) * 360;
	rotS = (timeS / 60) * 360;

}

//--------------------------------------------------------------
void testApp::draw(){

	ofSetCircleResolution(100);

	ofSetColor(50, 50, 50);
	ofCircle(512, 384, 350);
	
	ofSetColor(0, 0, 0);
	ofCircle(512, 384, 330);
	
	ofPushMatrix();
		ofSetColor(0, 0, 120);
		ofTranslate(512, 384, 0);
		ofRotateZ(rotH - 90);
		ofRect(0, -7, 150, 15);
	ofPopMatrix();
	
	ofPushMatrix();
		ofSetColor(200, 80, 0);
		ofTranslate(512, 384, 0);
		ofRotateZ(rotM - 90);
		ofRect(0, -5, 240, 10);
	ofPopMatrix();			
	
	ofPushMatrix();
		ofSetColor(0, 255, 0);
		ofTranslate(512, 384, 0);
		ofRotateZ(rotS - 90);
		ofRect(0, -2, 300, 5);
	ofPopMatrix();

	ofSetColor(50, 50, 50);
	ofCircle(512, 384, 15);

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
	cout << timeH << " " << timeM << " " << timeS << endl;
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

