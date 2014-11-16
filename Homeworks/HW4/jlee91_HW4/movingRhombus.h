#pragma once

/* movingRhombus.h
** Objects of this class represent a moving Rhombus.  These objects move
** with given horizontal and vertical velocities.
*/

// includes
#include "shape.h"
#include "line.h"
#include "Rhombus.h"

namespace draw {
	class movingRhombus:virtual public Rhombus {
	public:
		movingRhombus(float x1=0, float y1=0, float length=0, float angle=0, float angle1=0, float xvel=1, float yvel=1)
			: Rhombus(x1,y1,length,angle,angle1)
		/* %Rhombus:  Constructs a moving Rhombus with horizontal velocity "xvel" and vertical velocity "yvel",
		**            given in pixels / animation frame
		*/
		{
			this->xvel=xvel; this->yvel=yvel; }

		void display(Graphics ^dc) { // displays the shape on "dc"
			move(xvel,yvel);
			Rhombus::display(dc);
		}
		float xvel, yvel; // velocities in the x and y directions; publicly accessible

	};
};

