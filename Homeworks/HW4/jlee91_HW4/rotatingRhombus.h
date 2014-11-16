#pragma once
/* rotatingRhombus.h
** Objects of this class represent a rotating Rhombus.  These objects rotate
** with a given angular velocity.
*/

// includes
#include "shape.h"
#include "line.h"

namespace draw {
	class rotatingRhombus:virtual public Rhombus {
	public:
		rotatingRhombus(float x1=0, float y1=0, float length=0, float angle=0, float angle1=0) : Rhombus(x1,y1,length,angle, angle1){
			angVel=(float) Math::PI/60; }
		/* %R: angVel is an angular velocity in radians / animation frame */

		void display(Graphics ^dc) { // displays the shape on "dc"
			rotate((float) angVel);
			Rhombus::display(dc);
		}

	protected:
		float angVel; // the speed of revolution, in radians per frame

	};
};

