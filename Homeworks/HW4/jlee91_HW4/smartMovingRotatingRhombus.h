#ifndef SMART_MOVING_ROTATING_RHOMBUS
#define SMART_MOVING_ROTATING_RHOMBUS

//includes
#include "shape.h"
#include "line.h"
#include "movingRhombus.h"
#include "rotatingRhombus.h"
#include "activeRect.h"
#include "Form1.h"

/* smartMovingRotatingRhombus.h
** Objects of this class represent a moving and rotating Rhombus.  The object
** is smart in that if changes the magnitude of this velocity and angular rotation
** each time it hits a boundary of the screen.
*/

namespace draw {
	class activeRect;
	class smartMovingRotatingRhombus:public movingRhombus, public rotatingRhombus {
	public:
		smartMovingRotatingRhombus(float x1=0, float y1=0, float length=0, float angle=0, float angle1=0, float xvel=3, float yvel=3)
			: movingRhombus(x1,y1,length,angle, angle1, xvel,yvel), Rhombus(x1,y1,length,angle,angle1), rotatingRhombus(x1,y1,length,angle,angle1) {}
		/* %E:  Constructs a smart moving and rotating Rhombus */

		friend class activeRect;

		void display(Graphics ^dc) { // displays the shape on "dc"
			if ((l1->x1 < 0) || (l1->x1 > XSIZE) ||
				(l1->x2 < 0) || (l1->x2 > XSIZE) ||
				(l2->x2 < 0) || (l2->x2 > XSIZE) || // recall: l2->(x1,y1) is the same as l1->(x1,y1)
				(l3->x2 < 0) || (l3->x2 > XSIZE))
			{ xvel*=-1; angVel*=-1; }
			if ((l1->y1 < 0) || (l1->y1 > YSIZE) ||
				(l1->y2 < 0) || (l1->y2 > YSIZE) ||
				(l2->y2 < 0) || (l2->y2 > YSIZE) ||
				(l3->y2 < 0) || (l3->y2 > YSIZE))
			{ yvel*=-1; angVel*=-1; }

			rotate((float) angVel);
			move(xvel,yvel);
			Rhombus::display(dc);

		
		protected:
			activeRect * paddle;
	};
};

#endif