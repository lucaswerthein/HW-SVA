#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

	ofSetVerticalSync(true);
	ofBackground(0, 0, 0);

	mainX = mouseX;
	mainY = mouseY;
	
	midX = 512;
	midY = 384;
	
	rotZ = 0;

}

//--------------------------------------------------------------
void testApp::update(){

	mainX = mouseX;
	mainY = mouseY;

	rotZ = rotZ + 1;

}

//--------------------------------------------------------------
void testApp::draw(){

/* CHAOS
	ofPushMatrix();

		ofTranslate(midX, midY, 0);
		ofRotateX(rotZ * 2);
		ofRotateY(rotZ * 3);
		ofRotateZ(rotZ);
*/

		for (int i = -10; i < 10; i++) {
			for (int j = -10; j < 10; j++) {
				//right green
				ofPushMatrix();
					ofTranslate(mainX + (50 + (200 * i)), mainY - (50 + (200 * j)), 0);
					ofRotateY(90);
					ofSetColor(0, 255, 0);
					ofRect(0, 0, 100, 100);
				ofPopMatrix();
				
				//bottom yellow
				ofPushMatrix();
					ofTranslate(mainX - (50 + (200 * i)), mainY + (50 + (200 * j)), 0);
					ofRotateX(-90);
					ofSetColor(255, 255, 0);
					ofRect(0, 0, 100, 100);
				ofPopMatrix();		

				//top blue
				ofPushMatrix();
					ofTranslate(mainX - (50 + (200 * i)), mainY - (50 + (200 * j)), 0);
					ofRotateX(-90);
					ofSetColor(0, 0, 255);
					ofRect(0, 0, 100, 100);
				ofPopMatrix();	
				
				//left purple
				ofPushMatrix();
					ofTranslate(mainX - (50 + (200 * i)), mainY - (50 + (200 * j)), 0);
					ofRotateY(90);	
					ofSetColor(255, 0, 255);
					ofRect(0, 0, 100, 100);
				ofPopMatrix();
				
				//front red
				ofPushMatrix();
					ofTranslate(mainX - (50 + (200 * i)), mainY - (50 + (200 * j)), 0);
					ofRotateY(0);	
					ofSetColor(255, 0, 0);
					ofRect(0, 0, 100, 100);	
				ofPopMatrix();
			}
		}

/* END CHAOS	
	ofPopMatrix();
*/

	//center dot
	ofSetColor(255, 255, 255);
	ofRect(midX, midY, 1, 1);

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

