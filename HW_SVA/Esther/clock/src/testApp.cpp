#include "testApp.h"
// clock app


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
	
	for (int i = 0; i < ofGetSeconds(); i++){
		
		int ypos = (int) i / 20;
		int xpos =  i % 20;
		
		texNoise.draw(xpos*30+20, ypos*30+20,20,20);
		
	}
	
	ofPushMatrix();
	ofTranslate(20, 140, 0);
	for (int i = 0; i < ofGetMinutes(); i++){
		
		int ypos = (int) i / 15;
		int xpos =  i % 15;
		
		texNoise.draw(xpos*60, ypos*60,40,40);
		
	}
	ofPopMatrix();
	
	ofPushMatrix();
	ofTranslate(20, 390, 0);
	for (int i = 0; i < ofGetHours(); i++){
		
		int ypos = (int) i / 8;
		int xpos =  i % 8;
		
		texNoise.draw(xpos*110, ypos*110,80,80);
		
	}
	ofPopMatrix();
	
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

