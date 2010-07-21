#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	
	ofBackground(255,255,255);					//set background to black
	
	ofSetVerticalSync(true);
	
	ofSetCircleResolution(100);
	
	ofEnableAlphaBlending();
	
	bg = 0;
	
	bgSmooth = 0;
	
	
}

//--------------------------------------------------------------
void testApp::update(){
	
	/*bgSmooth = 0.99 * bgSmooth + 0.01 * bg;
	
	if (mouseX > 500) { 
		
		bg = 0;
		
	} else {
		
		bg = 255;
		
	}*/
	
	bgSmooth = 128 + 128 * sin(ofGetElapsedTimef()*2);
	
	ofBackground(bgSmooth, bgSmooth, bgSmooth);
	

}

//--------------------------------------------------------------
void testApp::draw(){
	
	ofTranslate(0, ofGetHeight()/2, 0);
	
	ofPushMatrix();
	ofRotateX(mouseY);
	
	ofTranslate(0, -1* ofGetHeight()/2, 0);	
	
	ofPopMatrix();

	
	
	ofSetRectMode(OF_RECTMODE_CENTER);
	
	
	for (int i = 0; i < 500; i++){
		
		ofSetColor(10, i*5, 0, 15);		// R,G,B,A (we need to say "enable alpha blening", see setup)
		
		
		// how do i get the rotation to occur as a forloop?
		
		ofPushMatrix();
		ofTranslate(50 + i * 30, 300, 0);
		ofRotateZ(mouseY);
		ofRotateZ(mouseX);
		ofRotateZ( ofGetElapsedTimef() + ofGetElapsedTimef()*i);
		ofRect(10,0, 40, 100 + 10 * i);
		ofRect(20,10, 50, 200 + 20 * i);
		ofRect(30,20, 60, 300 + 30 * i);

		ofPopMatrix();
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

