// includes
#include "stdafx.h" // needed for Forms
#include "Form1.h"  // for ForeColor and BackColor
#include "shape.h"
#include "Rhombus.h"
#include <cmath>

namespace draw {
	// these namespaces are needed for actual drawing
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// implement various "Rhombus" methods
	void Rhombus::reconstruct() {
		// reconstruct the Rhombus according to the current private variables
		// ... out with the old
		// The nature of Rhombus
        //  (1) The two diagonals of a rhombus are perpendicular.
        //  (2) Its diagonals bisect opposite angles. 

		
		//Original Rhombus.cpp
		if (!l1 && !l2 && !l3 && !l4) {
		// ... in with the new
		l1 = new line((int) x1,(int) y1,(int) (x1-length*sin(angle/2)),(int) (y1+length*cos(angle/2)));
		l2 = new line((int) x1,(int) y1,(int) (x1+length*sin(angle/2)),(int) (y1+length*cos(angle/2)));
		l3 = new line((int) (x1-length*sin(angle/2)),(int) (y1+length*cos(angle/2)), (int) x1,(int) (y1+2*length*cos(angle/2)));
		l4 = new line((int) (x1+length*sin(angle/2)),(int) (y1+length*cos(angle/2)), (int) x1,(int) (y1+2*length*cos(angle/2)));
		}
		else {
			l1->change((int) x1,(int) y1,(int) (x1-length*sin(angle/2)),(int) (y1+length*cos(angle/2)));
			l2->change((int) x1,(int) y1,(int) (x1+length*sin(angle/2)),(int) (y1+length*cos(angle/2)));
			l3->change((int) (x1-length*sin(angle/2)),(int) (y1+length*cos(angle/2)), (int) x1,(int) (y1+2*length*cos(angle/2)));
			l4->change((int) (x1+length*sin(angle/2)),(int) (y1+length*cos(angle/2)), (int) x1,(int) (y1+2*length*cos(angle/2)));
		}

		/*
		Attempt at adjusting for new angle geometry - angle1 is the rotation angle.

		if (!l1 && !l2 && !l3 && !l4) {
		// ... in with the new
		l1 = new line((int) x1,(int) y1,(int) (x1-length*sin(angle/2)+length*cos(angle1)),(int) (y1+length*cos(angle/2)+length*sin(angle1)));
		l2 = new line((int) x1,(int) y1,(int) (x1+length*sin(angle/2)+length*cos(angle1)),(int) (y1+length*cos(angle/2)+length*sin(angle1)));
		l3 = new line((int) (x1-length*sin(angle/2)-length*cos(angle1)),(int) (y1+length*cos(angle/2)+length*sin(angle1)), (int) x1,(int) (y1+2*length*cos(angle/2)+2*length*sin(angle1)));
		l4 = new line((int) (x1+length*sin(angle/2)+length*cos(angle1)),(int) (y1+length*cos(angle/2)+length*sin(angle1)), (int) x1,(int) (y1+2*length*cos(angle/2)+2*length*sin(angle1)));
		}
		else {
			l1->change((int) x1,(int) y1,(int) (x1-length*sin(angle/2)-length*cos(angle1)),(int) (y1+length*cos(angle/2)+length*sin(angle1)));
			l2->change((int) x1,(int) y1,(int) (x1+length*sin(angle/2)+length*cos(angle1)),(int) (y1+length*cos(angle/2)+length*sin(angle1)));
			l3->change((int) (x1-length*sin(angle/2)-length*cos(angle1)),(int) (y1+length*cos(angle/2)+length*sin(angle1)), (int) x1,(int) (y1+2*length*cos(angle/2)+length*sin(angle1)));
			l4->change((int) (x1+length*sin(angle/2)+length*cos(angle1)),(int) (y1+length*cos(angle/2)+length*sin(angle1)), (int) x1,(int) (y1+2*length*cos(angle/2)+length*sin(angle1)));
		}
		*/
	}
	

	Rhombus::Rhombus(float x1, float y1, float length, float angle, float angle1) : shape(true) {
		// creates a Rhombus at location (x1,y1) of side length "length" at angle "angle" radians
		// (x1, y1) is the bottom point of the Rhombus
		this->x1=x1; this->y1=y1; this->length = length; this->angle=angle, this->angle1=angle1;

		// construct the four lines that are part of the Rhombus
		l1=l2=l3=l4=NULL;     // initial values
		reconstruct();  // compute the actual lines
	}

	void Rhombus::rotate(float rotation) {   // rotates the the Rhombus by "rotation" radians
		this->angle1+=rotation;
	}

	/* 
	//Attempt at Rhombus Rotation

	void Rhombus::rotate(float rotation) {   // rotates the the Rhombus by "rotation" radians

	//this->angle+=rotation;

	int x0=this->x1;
	int y0=this->y1;

	this->x1=x0*cos(rotation)-y0*sin(rotation);  //Rotating Rectangular Coordinates
	this->y1=x0*sin(rotation)+y0*cos(rotation);  //Rotating Rectangular Coordinates
	}

	*/

	void Rhombus::move(float deltax1, float deltay1) { // moves the Rhombus by deltax1 pixels horizontally and deltay1 pixels vertically
		x1+=deltax1;
		y1+=deltay1;
	}

	void Rhombus::display(Graphics ^dc) {
		// displays the shape on the Graphics object

		// ... display both lines
		l1->display(dc);
		l2->display(dc);
		l3->display(dc);
		l4->display(dc);

		reconstruct(); // move along

	}
};
