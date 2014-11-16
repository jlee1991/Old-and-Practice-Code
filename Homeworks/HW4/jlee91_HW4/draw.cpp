// draw.cpp : main project file.
#include <cmath>
#include "stdafx.h"
#include "Form1.h"
#include "constants.h"
#include "shape.h"
#include "line.h"
#include "rect.h"
#include "El.h"
#include "RotatingEl.h"
#include "MovingEl.h"
#include "SmartMovingRotatingEl.h"
#include "activeRect.h"
//New Rhombus Functions
#include "Rhombus.h"
#include "RotatingRhombus.h"
#include "MovingRhombus.h"
#include "SmartMovingRotatingRhombus.h"

using namespace draw;

[STAThreadAttribute]

void AddShapes(shapeList *sl); // forward declaration

int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Form1 ^screen = gcnew Form1();
	
	// Background is not needed because of double buffering
	//shape *BackGround = new rect(0,0,XSIZE,YSIZE,true);  // the background
	//BackGround->setVisible(false);                       // i.e. the background color
	//screen->shapes->add(BackGround);
	AddShapes(screen->shapes);

	Application::Run(screen);

	return 0;
}

void AddShapes(shapeList *sl) {
	// THIS IS WHERE YOU ADD YOUR SHAPES

	// some examples
	sl->add(new El(10,10,30,(float) Math::PI/4));           // an El, rotated 45 degrees

	/*
	//Example Code
	Follow form: pixel location (0,0) to (10,10)
	sl->add(new line(0,0,10,10));

	Follows form: upper-left corner (20,20) and lower-right corner (30,30) 
	sl->add(new rect(20,20,30,30));

	*/
	sl->add(new Rhombus(75,75,50,80,80));
/*
	//Q1a
	sl->add(new line(0,0,300,300));
	sl->add(new line(300,0,0,300));

	//Q1b

	sl->add(new rect(190,195,195,200));
	sl->add(new rect(185,200,190,205));
	sl->add(new rect(195,200,200,205));
	sl->add(new rect(180,205,185,210));
	sl->add(new rect(200,205,205,210));
	sl->add(new rect(175,210,180,215));
	sl->add(new rect(205,210,210,215));
	sl->add(new rect(180,215,185,220));
	sl->add(new rect(200,215,205,220));
	sl->add(new rect(185,220,190,225));
	sl->add(new rect(195,220,200,225));
	sl->add(new rect(190,225,195,230));
*/
/*
    //Moving Functions for El
	sl->add(new movingEl(20,20,20));                        // a moving EL
	sl->add(new rotatingEl(50,50,30,(float) Math::PI / 8)); // a rotating EL
	sl->add(new smartMovingRotatingEl(80,80,40));           // a large moving and rotating EL
*/
	sl->add(new movingRhombus(75,75,30,30));                        // a moving Rhombus
	sl->add(new rotatingRhombus(50,50,30,30,(float) Math::PI / 8)); // a rotating Rhombus
	sl->add(new smartMovingRotatingRhombus(80,80,40,30));           // a large moving and rotating Rhombus

	//New stuff into activeRect
	activeRect * r = new activeRect(10,100,80,110);
	sl->add(r);                 // a rectangle that responds to arrow key presses

}
