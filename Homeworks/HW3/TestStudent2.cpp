#include <iostream>
#include "Student2.h"
using namespace std;

int main()
{
//Student(int hungry, int tired, bool studied);
Student * a = new Student(2, 3, true);//Get An A on the Test
Student * p = new Student(5, 30, true);//Pass the Test
Student * m = new Student(9, 50, false);//Miss the Test

/////////////////////////
//Define Three Students//
/////////////////////////

/*Student s*/
cout<<"Student 1"<<endl;
//Test Conditions for student will get an A
if (a->willGetAnAOnTheTest())
  cout << "Student will get an A!" << endl;
else
  cout << "Student won't get an A!" << endl;

//Test Conditions for student will pass the test
if (a->willPassTheTest())
  cout << "Student will pass the test!" << endl;
else
  cout << "Student won't pass the test!" << endl;

//Test Conditions for student will miss the test
if (a->willMissTheTest())
  cout << "Student will miss the test!" << endl;
else
  cout << "Student won't miss the test!" << endl <<endl;

/*Student t*/
cout<<"Student 2"<<endl;
//Test Conditions for student will get an A
if (p->willGetAnAOnTheTest())
  cout << "Student will get an A!" << endl;
else
  cout << "Student won't get an A!" << endl;

//Test Conditions for student will pass the test
if (p->willPassTheTest())
  cout << "Student will pass the test!" << endl;
else
  cout << "Student won't pass the test!" << endl;

//Test Conditions for student will miss the test
if (p->willMissTheTest())
  cout << "Student will miss the test!" << endl;
else
  cout << "Student won't miss the test!" << endl<<endl;

/*Student r*/
cout<<"Student 3"<<endl;
//Test Conditions for student will get an A
if (m->willGetAnAOnTheTest())
  cout << "Student will get an A!" << endl;
else
  cout << "Student won't get an A!" << endl;

//Test Conditions for student will pass the test
if (m->willPassTheTest())
  cout << "Student will pass the test!" << endl;
else
  cout << "Student won't pass the test!" << endl;

//Test Conditions for student will miss the test
if (m->willMissTheTest())
  cout << "Student will miss the test!" << endl;
else
  cout << "Student won't miss the test!" << endl<<endl;

////////////////////////////////
//Set bestFriend to Each Other//
////////////////////////////////


a->set_bestFriend(p);

/*Student s*/
cout<<"Student 1 with Best Friend"<<endl;
//Test Conditions for student will get an A
if (a->willGetAnAOnTheTest())
  cout << "Student will get an A!" << endl;
else
  cout << "Student won't get an A!" << endl;

//Test Conditions for student will pass the test
if (a->willPassTheTest())
  cout << "Student will pass the test!" << endl;
else
  cout << "Student won't pass the test!" << endl;

//Test Conditions for student will miss the test
if (a->willMissTheTest())
  cout << "Student will miss the test!" << endl;
else
  cout << "Student won't miss the test!" << endl <<endl;

/*Student t*/
cout<<"Student 2 with Best Friend"<<endl;
//Test Conditions for student will get an A
if (p->willGetAnAOnTheTest())
  cout << "Student will get an A!" << endl;
else
  cout << "Student won't get an A!" << endl;

//Test Conditions for student will pass the test
if (p->willPassTheTest())
  cout << "Student will pass the test!" << endl;
else
  cout << "Student won't pass the test!" << endl;

//Test Conditions for student will miss the test
if (p->willMissTheTest())
  cout << "Student will miss the test!" << endl;
else
  cout << "Student won't miss the test!" << endl<<endl;


return 0;
}
