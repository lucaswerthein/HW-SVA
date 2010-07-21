#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofBackground(0, 0, 0);							//set background to black
	ofSetVerticalSync(true);						//make your application run at the maximum frame rate your screen can handle (good for animation on macs)
    ofEnableAlphaBlending();
}

//--------------------------------------------------------------
void testApp::update(){
	
}

//--------------------------------------------------------------
void testApp::draw(){
	
	pctHours = (float) ofGetHours()/24.0;			// convert hours to a pct														//set pctHours to a percentage or a number between 0 and 1
	ofSetColor(116,255,204, 35);																		//set color of shape
	//ofRect(0, ofGetHeight(), (ofGetWidth()/3)-20, pctHours * -ofGetHeight());						//draw your rectangle
	
	ofCircle(ofGetWidth() * .5, ofGetHeight() * .5, ofGetWidth()*.5*pctHours);
	
	pctMinutes = (float) ofGetMinutes()/60.0;		// convert minutes to a pct											//set pctHours to a percentage or a number between 0 and 1
	ofSetColor(255, 180, 0, 25);																		//set color of shape
	//ofRect(ofGetWidth()/3, ofGetHeight(), (ofGetWidth()/3)-20, pctMinutes * -ofGetHeight());		//draw your rectangle
	ofCircle(ofGetWidth() * .5, ofGetHeight() * .5, ofGetWidth()*.2*pctMinutes);
	
	
	pctSeconds = (float) ofGetSeconds() / 60.0;		// convert seconds to a pct												//set pctHours to a percentage or a number between 0 and 1
	ofSetColor(165, 20, 204, 20);																	//set color of shape
	//ofRect((ofGetWidth()/3)*2, ofGetHeight(), (ofGetWidth()/3)-20, pctSeconds * -ofGetHeight());	//draw your rectangle
	ofCircle(ofGetWidth() * .5, ofGetHeight() * .5, ofGetWidth()*.1*pctSeconds);
	
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

