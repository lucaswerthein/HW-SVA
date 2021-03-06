#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){



}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

	ofSetColor(0xFFFFFF);

	ofTranslate( ofGetWidth()/2, ofGetHeight()/2);

	int centerX = ofGetWidth()*sin(ofGetElapsedTimef())/2;
	int centerY = ofGetHeight()*sin(ofGetElapsedTimef()*4)/2;

	int colorX = ((float)centerX / (float)ofGetWidth()) * 255;
	
	ofFill();
	for (int i = 0; i < 30; i++){
		ofSetColor((int)ofRandom(0,colorX),(int)ofRandom(0,255),(int)ofRandom(0,255));
		ofRect(ofRandom(centerX-50,centerX+50),ofRandom(centerY-50,centerY+50),ofRandom(10,20),ofRandom(10,20));
	}

	for (int i = 0; i < 100; i++){
		ofSetColor((int)ofRandom(0,colorX),(int)ofRandom(0,255),(int)ofRandom(0,255));
		ofRect(ofRandom(centerX-200,centerX+200),ofRandom(centerY-200,centerY+200),ofRandom(10,20),ofRandom(10,20));
	}

	for (int i = 0; i < 100; i++){
		ofSetColor((int)ofRandom(0,colorX),(int)ofRandom(0,255),(int)ofRandom(0,255));
		ofRect(ofRandom(centerX-400,centerX+400),ofRandom(centerY-400,centerY+400),ofRandom(10,20),ofRandom(10,20));
	}

	for (int i = 0; i < 200; i++){
		ofSetColor((int)ofRandom(0,colorX),(int)ofRandom(0,255),(int)ofRandom(0,255));
		ofRect(ofRandom(centerX-600,centerX+600),ofRandom(centerY-600,centerY+600),ofRandom(10,20),ofRandom(10,20));
	}

	for (int i = 0; i < 200; i++){
		ofSetColor((int)ofRandom(0,colorX),(int)ofRandom(0,255),(int)ofRandom(0,255));
		ofRect(ofRandom(centerX-ofGetWidth(),centerX+ofGetWidth()),ofRandom(centerY-ofGetHeight(),centerY+ofGetHeight()),ofRandom(10,20),ofRandom(10,20));
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

