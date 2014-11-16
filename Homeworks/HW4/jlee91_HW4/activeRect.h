#pragma once
#include "rect.h"
#include "smartMovingRotatingRhombus.h"

/* activeRect.h
** Objects of this class represent a rectangle, either empty or filled, which responds to key presses.
**    Press the left arrow on the keyboard, and the rectangle moves to the left.
**    Press the right arrow on the keyboard, and the rectangle moves to the right.
*/

namespace draw {
	// these namespaces are needed for actual drawing
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	class smartMovingRotatingRhombus;

	class activeRect : public rect {
	public:
		// constructor
		activeRect(int x1=10, int y1=10, int x2=80, int y2=20, bool filled=true) : rect(x1,y1,x2,y2,filled)
			{delta=1;};

		void leftKey() { // the left key has been pressed - move the rectangle to the left
			if (delta>0)
				delta=-1;
			else
				delta--;
			x1+=delta; x2+=delta;
		}

		void rightKey() { // the right key has been pressed - move the rectangle to the right
			if (delta<0)
				delta=1;
			else
				delta++;
				
			x1+=delta; x2+=delta;
		}
		friend class smartMovingRotatingRhombus;

		//Allow paddle to grow if smartMovingRotatingRhombus hits it
		if()
		{
			x2+=x2
		}

	private:
		int delta;        // how many pixels to move the rectangle
	};
}
