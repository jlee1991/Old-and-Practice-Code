#pragma once
#include <sstream>
#include "shape.h"
#include "shapeList.h"
#include "constants.h"

namespace draw {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->Show(); // set up the window
			shapes = new shapeList();
		}

		/// <summary>
		/// Where all the shapes you create are stored
		/// </summary>
		shapeList *shapes;

		// various colors
		const static Color ForeColor = Color::Blue; // the foreground color
		const static Color BackColor = Color::LightGray; // the background color

	private: System::Windows::Forms::Timer^  timer1;
	public: 
	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::Timer^  animationTimer;


	protected:
		/// <summary>
		/// What to do on a paint request
		/// </summary>
		virtual void OnPaint(PaintEventArgs ^e) override {
			shapes->displayShapes(e->Graphics);
		}

		virtual void OnKeyDown(KeyEventArgs ^e) override {
			// register left or right arrow presses on the keyboard
			if (e->KeyCode == Keys::Left) {
				shapes->leftKey();
			}
			if (e->KeyCode == Keys::Right) {
				shapes->rightKey();
			}
		}

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->animationTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// animationTimer
			// 
			this->animationTimer->Enabled = true;
			this->animationTimer->Interval = 100;
			this->animationTimer->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(300, 300);
			this->DoubleBuffered = true;
			this->KeyPreview = true;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
				 this->Refresh();     // redraw window
			 }

	};
}

