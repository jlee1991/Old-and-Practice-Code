/*

• A function called willPassTheTest() that returns true if the student has studied and ((10*hungry) + tired) is less than 100. You cannot pass the test if you miss the test.

• A function called willGetAnAOnTheTest() that returns true if the student has studied and tired is less than 20. You have to pass the test and not miss it to get an A.

• A function called willMissTheTest() which returns true if tired is greater than 90 or hungry is greater than 8.

• A default student should have NOT studied and have a hungry value of 5 and a tired value of 50.

• A constructor should be provided which lets you set all three member variables.

*/
#include <iostream>
#include "Student.h"
using namespace std;

//Define Functions for the accessors and mutators
/*Tired*/
int Student::get_tired(void)
{
  return tired;
}
void Student::set_tired(int t)
{
	if (tired<0||tired>100)
		cout<<"Data for tired not within range"<<endl;
	else tired = t;
}

/*Hungry*/
int Student::get_hungry(void)
{
  return hungry;
}
void Student::set_hungry(int h)
{
	if (hungry<0||hungry>10)
		cout<<"Data for hungry not within range"<<endl;
	else hungry = h;
}

/*Studied*/
int Student::get_studied(void)
{
  return studied;
}
void Student::set_studied(int s)
{
	if(studied!=true && studied!=false)
		cout<<"Data for studied not within range"<<endl;
	else studied=s;
}

//Default Constructor
Student::Student()
{
	studied=false;
	hungry=5;
	tired=50;
}

//Initialize constructors
Student::Student(int hungry, int tired, bool studied)
{
	this->hungry=hungry;
	this->tired=tired;
	this->studied=studied;
}

/*These functions will be accessed from the "Student.h" file*/
//Turns true if the student has studied and ((10*hungry) + tired) is less than 100. You cannot pass the test if you miss the test.
bool Student::willPassTheTest()
{
	if (((10*hungry+tired)<100) && studied==true && willMissTheTest()==false) 
		return true;
	else
		return false;
}

//Returns true if the student has studied and tired is less than 20. You have to pass the test and not miss it to get an A
bool Student::willGetAnAOnTheTest()
{
	if (studied==true && tired<20 && willMissTheTest()==false && willPassTheTest()==true)
		return true;
	else
		return false;
}

//Returns true if tired is greater than 90 or hungry is greater than 8.
bool Student::willMissTheTest()
{
	if (tired>90 || hungry>8)
		return true;
	else
		return false;
}
