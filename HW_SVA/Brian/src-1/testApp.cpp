#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	
	
	ofBackground(255, 255, 255);
	
	ofSetVerticalSync(true);
	
	ofSetCircleResolution(100);
	
	bg = 0;
	bgSmooth = 0;
	
}

//--------------------------------------------------------------
void testApp::update(){
	
	
	
	bgSmooth = 0.99 * bgSmooth + 0.01 * bg;
	
	if (mouseX > 500) { 
		
		bg = 0;
		
	} else {
		
		bg = 255;
		
	}
	
	ofBackground(bgSmooth, bgSmooth, bgSmooth);
	
	
	
	//	if (mouseX < 300) { ofBackground(255, 255, 255);}
	
	
}

//--------------------------------------------------------------
void testApp::draw(){
	
	// set my color
	ofSetColor(255, 0, 0);
	
	// b
	ofRect(10, 10, 50, 200);
	ofRect(50, 110, 50, 100);
	
	// r
	ofRect(110, 110, 50, 100);
	ofRect(150, 110, 50, 25);
	
	// i
	ofRect(210, 110, 50, 25);
	ofRect(210, 140, 50, 70);

	// a
	ofRect(270, 110, 75, 25);
	ofRect(295, 130, 50, 80);
	ofRect(270, 160, 50, 50);
	
	// n
	ofRect(355, 110, 75, 25);
	ofRect(355, 130, 25, 80);
	ofRect(405, 130, 25, 80);

	
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

