#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

	myImage.loadImage("lucy.jpg");

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

	ofSetColor(0xFFFFFF);

	myImage.draw(10,20);

    ofSetColor(0x000000);
    unsigned char * pixels = myImage.getPixels();
    
    for (int i = 2; i < ofGetElapsedTimef()*500 && i < 500 ; i+=4){
        for (int j = 2; j <  ofGetElapsedTimef()*10 && j < 338; j+=4){
            unsigned char r = pixels[(j * 500 + i)*3];
            float val = 1 - ((float)r / 255.0f);
            ofCircle(520 + i,20+j,5*val);
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

