#pragma once

//includes
#include "shape.h"
#include "line.h"

/* Rhombus.h
** Objects of this class represent the letter "L".  These objects can be displayed
** (typically on the screen) at any (x,y) location.  They can also be stretched to a
** given length and rotated by a given angle.
*/

namespace draw {
	class Rhombus:public shape {

	public:
		Rhombus(float x1=0, float y1=0, float length=0, float angle=0, float angle1=0);
		/*
		** %R:     "angle" represents an angle in radians
		**         "length">0
		** %Rhombus:  constructs an Rhombus at location (x1,y1) of side length "length" (in pixels), where the fours sides are equal. Angle of adjecent side an angle of "angle" radians
		*/

		void display(Graphics ^dc);    // displays the shape on "dc" (typically the screen)
		void rotate(float rotation);   // rotates the display angle of the Rhombus by "rotation" radians
		void move(float deltax1, float deltay1); // moves display location by deltax1 pixels horizontally and deltay1 pixels vertically

	protected:
		void reconstruct();            // reconstruct the rhombus according to the current private variables

		float x1, y1;                  // the location of the lowest point of Rhombus
		float length, angle, angle1;  // length and angle of the Rhombus 
		line *l1, *l2, *l3, *l4;      // the four lines used to form the Rhombus
		
		/*Add these somewhere*/		
		void addShape;
		void activemovingRhombus;
	};
};
