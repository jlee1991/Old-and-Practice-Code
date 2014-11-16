#ifndef SHAPE
#define SHAPE

// This is a generic shape class.  Specific shapes extend this class.


namespace draw { // all items will be in the "draw" namespace

	// these namespaces are needed for actual drawing
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	class shape {
	public:
		// constructor
		shape(bool visible=true) {             // constructs an arbitrary shape, which is visible iff "visible" is true
			this->visible=visible; }

		// for display
		virtual void display(Graphics ^dc) {}; // displays the shape
		virtual void leftKey() {};             // left arrow was pressed
		virtual void rightKey() {};            // right arrow was pressed

		// accessors for shape visibility
		bool getVisible() { return visible; }
		void setVisible(bool visible) { this->visible=visible; }
	
	protected:
		bool visible; // if true, the shape is displayed in the sytem foreground color; otherwise it is displayed in system background color
	};
};

#endif