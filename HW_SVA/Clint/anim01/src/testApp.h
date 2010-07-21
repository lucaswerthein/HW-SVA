#ifndef _TEST_APP
#define _TEST_APP


#include "ofMain.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);

		int point1x;
		int point1y;
		int point1z;
		int point1w;
		int point1h;
	
		int point2x;
		int point2y;
		int point2z;
		int point2w;
		int point2h;
	
		int point3x;
		int point3y;
		int point3z;
		int point3w;
		int point3h;	
		
		int point4x;
		int point4y;
		int point4z;
		int point4w;
		int point4h;
	
		bool rotUp;
	
		float rot1x;
		float rot1y;
		float rot1z;
		
		float rot2x;
		float rot2y;
		float rot2z;
	
		int xGap;
		int yGap;
	
		int rotOffset;
};

#endif
