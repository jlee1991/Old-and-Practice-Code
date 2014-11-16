#include <iostream>
#include "Teacher.h"
#include "Students.h"
#include "Course.h"
using namespace std;

int main()
{
  int teacher1;
  int teacher2;
  
  //Create Courses
  
  /* Method 1: Creates it on the stack. Automatically calls destructor when c goes out of scope */
  /*Course c("Biology", 5);*/
  
  /* Method 2: Creates on heap. Can manually delete in order to see behavior of destructor i.e., delete p;  
  will call the destructor.*/
  Course *c1 = new Course("Biology", 5);
  Course *c2 = new Course("Physics", 10);
  Course *c3 = new Course("Chemistry",10);
  
  //Create Teacher
  Teacher *t1 = new Teacher();
  Teacher *t2 = new Teacher();
  
  /*Set the teacher's name initialized in the array to an arbitrary teacher*/
  cout<<"Enter teacher's name --> d(^-^d)"<<endl;
  cin>>teacher1;
  t1->setName(teacher1);
  
  cout<<"Enter teacher's rival's name --> p(v_vp)"<<endl;
  cin>>teacher2;
  t2->setName(teacher2);
  
  //Create Students
  Student *s1 = new Student("Jim");
  Student *s2 = new Student("Joe");
  Student *s3 = new Student("John");
  Student *s4 = new Student("James");
  Student *s5 = new Student("Jane");
  Student *s6 = new Student("Josh");
  Student *s7 = new Student("Tim");
  Student *s8 = new Student("Jesse");
  Student *s9 = new Student("Derek");
  Student *s10 = new Student("Susan");
  Student *s11 = new Student("Paul");
  
  /*
  
  ********
  *RECALL*
  ********
  --------------
  c1 is Biology
  c2 is Physics
  c3 is Chemistry
  --------------
  t1 is Teacher1
  t2 is Teacher2
  --------------
  s1-11 are arbitrary students
  --------------
  */
  
  ///////////////
  //TEST COURSE//
  ///////////////
  
  cout<<"COURSE:"<<endl;
  
  /*FUNCTIONS*/
  /*
  void addTeacher(Teacher *t);
  void removeTeacher(void);
  void addStudent(Student *s);
  void removeStudent(Student *s);
  void setName(string n);
  */
  
  //Add a teacher to a course
  cout<<"Adding teacher: "<<teacher1<<endl;
  c1->addTeacher(t1);
  
  //Add another teacher to the same course
  cout<<"Adding teacher: "<<teacher2<<endl;
  c1->addTeacher(t2);
  
  //Remove a teacher from a course
  cout<<"Removing teacher: "<<teacher1<<endl; 
  c1->removeTeacher(t1);
  
  //Add a teacher to the course
  cout<<"Adding teacher: "<<teacher2<<endl;
  c1->addTeacher(t2);
  
  //Add a student to the course
  
  /*Course 1*/
  cout<<"Adding Students to Course 1"<<endl;
  c1->addStudent(s1);
  c1->addStudent(s2);
  c1->addStudent(s3);
  c1->addStudent(s4);
  c1->addStudent(s5);
  c1->addStudent(s6);
  c1->addStudent(s7);
  c1->addStudent(s8);
  c1->addStudent(s9);
  c1->addStudent(s10);
  c1->addStudent(s11);
  
  /*Course 2*/
  cout<<"Adding Students to Course 2"<<endl;
  /*
  c2->addStudent(s1);
  c2->addStudent(s2);
  c2->addStudent(s3);
  c2->addStudent(s4);
  c2->addStudent(s5);
  c2->addStudent(s6);
  c2->addStudent(s7);
  c2->addStudent(s8);
  c2->addStudent(s9);
  c2->addStudent(s10);
  */
  c2->addStudent(s11);
  
  /*
  //Course 3
  cout<<"Adding Students to Course 3"<<endl;
  c3->addStudent(s1);
  c3->addStudent(s2);
  c3->addStudent(s3);
  c3->addStudent(s4);
  c3->addStudent(s5);
  c3->addStudent(s6);
  c3->addStudent(s7);
  c3->addStudent(s8);
  c3->addStudent(s9);
  c3->addStudent(s10);
  c3->addStudent(s11);
  */
  
  //Remove a student from the course
  cout<<"Removing student named from Course 1: "<<s1<<endl;
  c1->removeStudent(s1);
  
  //Test getMyCourse() for Teacher
  x = t2->getMyCourse()->getName();
  if (x !="")
    cout <<"Test getMyCourse "<<t2->getName()<<" Teach the Course "<<x<<"\n";
  
  //Print the output of the course
  printCourse(c1);
  
  ////////////////
  //TEST TEACHER//
  ////////////////
  
  cout<<"TEACHER:"<<endl;
  
  /*FUNCTIONS*/
  /*
  void addToMyFavorites(Student *fav);
  void setMyCourse(Course *c);
  void setName(string n);
  */
  
  //Assign teacher to a course
  cout<<"Assigning teacher: "<<teacher1<<endl;
  t1->setMyCourse(c2);
  
  //Assign another teacher to the course
  cout<<"Assigning teacher: "<<teacher2<<endl;
  t2->setMyCourse(c2);
  
  //Assign students to favorites
  cout<<"Assigning students: "<<s1<<endl;
  t1->addToMyFavorites(s1);
  t1->addToMyFavorites(s2);
  t1->addToMyFavorites(s3);
  t1->addToMyFavorites(s4);
  t1->addToMyFavorites(s5);
  t1->addToMyFavorites(s6);
  t1->addToMyFavorites(s7);
  t1->addToMyFavorites(s8);
  t1->addToMyFavorites(s9);
  t1->addToMyFavorites(s10);
  t1->addToMyFavorites(s11);
  
  //Test getTeacher()  for Course
  string x = c1->getTeacher()->getName();
  if (x !="")
    cout <<"Test getTeacher "<<c1->getName()<<" Teacher's name "<<x<<"\n";
  
  //Print the output of the teacher
  printTeacher(t1);
  
  return 0;
}
