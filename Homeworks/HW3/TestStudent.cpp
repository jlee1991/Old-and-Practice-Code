#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
//Student(int hungry, int tired, bool studied);
Student a(2, 3, true);//Get An A on the Test
Student p(5, 30, true);//Pass the Test
Student m(9, 50, false);//Miss the Test

/*Student s*/
cout<<"Student 1"<<endl;
//Test Conditions for student will get an A
if (a.willGetAnAOnTheTest())
  cout << "Student will get an A!" << endl;
else
  cout << "Student won't get an A!" << endl;

//Test Conditions for student will pass the test
if (a.willPassTheTest())
  cout << "Student will pass the test!" << endl;
else
  cout << "Student won't pass the test!" << endl;

//Test Conditions for student will miss the test
if (a.willMissTheTest())
  cout << "Student will miss the test!" << endl;
else
  cout << "Student won't miss the test!" << endl <<endl;

/*Student t*/
cout<<"Student 2"<<endl;
//Test Conditions for student will get an A
if (p.willGetAnAOnTheTest())
  cout << "Student will get an A!" << endl;
else
  cout << "Student won't get an A!" << endl;

//Test Conditions for student will pass the test
if (p.willPassTheTest())
  cout << "Student will pass the test!" << endl;
else
  cout << "Student won't pass the test!" << endl;

//Test Conditions for student will miss the test
if (p.willMissTheTest())
  cout << "Student will miss the test!" << endl;
else
  cout << "Student won't miss the test!" << endl<<endl;

/*Student r*/
cout<<"Student 3"<<endl;
//Test Conditions for student will get an A
if (m.willGetAnAOnTheTest())
  cout << "Student will get an A!" << endl;
else
  cout << "Student won't get an A!" << endl;

//Test Conditions for student will pass the test
if (m.willPassTheTest())
  cout << "Student will pass the test!" << endl;
else
  cout << "Student won't pass the test!" << endl;

//Test Conditions for student will miss the test
if (m.willMissTheTest())
  cout << "Student will miss the test!" << endl;
else
  cout << "Student won't miss the test!" << endl<<endl<<endl;

//Access mutator for condition where student misses the test
m.set_tired(2);
m.set_hungry(3);
m.set_studied(true);

/*Student r*/
cout<<"Student 3 Modified"<<endl;
//Test Conditions for student will get an A
if (m.willGetAnAOnTheTest())
  cout << "Student will get an A!" << endl;
else
  cout << "Student won't get an A!" << endl;

//Test Conditions for student will pass the test
if (m.willPassTheTest())
  cout << "Student will pass the test!" << endl;
else
  cout << "Student won't pass the test!" << endl;

//Test Conditions for student will miss the test
if (m.willMissTheTest())
  cout << "Student will miss the test!" << endl;
else
  cout << "Student won't miss the test!" << endl;

return 0;
}
