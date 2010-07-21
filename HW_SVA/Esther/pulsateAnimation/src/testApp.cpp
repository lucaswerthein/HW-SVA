#include "testApp.h"
// pulsateAnimation app

//--------------------------------------------------------------
void testApp::setup(){

	ofBackground(0, 0, 0);
	
	w = 80;
	h = 80;
	
	texNoise.allocate(w, h, GL_RGB);

	pixels = new unsigned char [w*h*3];
	
	for (int i = 0; i < w*h; i++) {
		pixels[i] = (unsigned char)(ofRandomuf() * 255);
	}
	
	texNoise.loadData(pixels, w, h, GL_RGB);

}

//--------------------------------------------------------------
void testApp::update(){

	for (int i = 0; i < w; i++){
		for (int j = 0; j < h; j++){
			pixels[(j*w+i)*3 + 0 ] = ofGetSeconds()*4.25; // r
			pixels[(j*w+i)*3 + 1 ] = ofGetMinutes()*4.25; // g
			pixels[(j*w+i)*3 + 2 ] = (unsigned char)(ofRandomuf() * 255); // b
		}
	}
	texNoise.loadData(pixels, w,h, GL_RGB); 

	
}

//--------------------------------------------------------------
void testApp::draw(){

	ofSetColor(170,170,sin(ofGetElapsedTimef())*255 );
	ofCircle(300,300, 10+sin(ofGetElapsedTimef()/5)*200 );

	ofSetColor(cos(ofGetElapsedTimef())*170,170,170 );
	ofCircle(700,200, 10+cos(ofGetElapsedTimef()/5)*100 );
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

