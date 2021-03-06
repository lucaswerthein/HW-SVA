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
	
		float bg;
		float bgSmooth;
	
		float pctHours;			//declare variable pctHours as type float
		float pctMinutes;		//declare variable pctMinutes as type float
		float pctSeconds;		//declare variable pctSeconds as type float
	
		float posX;			//define variable of type float named "posX"
		float posY;			//define variable of type float named "posY"
		float radius;		//define variable of type float named "radius"
	
	
	
	
};

#endif
