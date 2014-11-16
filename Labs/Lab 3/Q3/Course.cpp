#include <iostream>
#include <string>
#include "Teacher.h"
#include "Student.h"
#include "Course.h"
using namespace std;

//Default Constructor

Course::Course(void)
{
  students=NULL;
  teacher=NULL;
  capacity=DEFAULT_CAPACITY;
  enrollmentNumber=0;
}

//Constructor
Course::Course(string n, int c)
{
  this->name=n;
  this->capacity=c;
}

//Destructor
Course::~Course(void)
{
  teacher.setCourse(NULL);

  //Run through myFavorites list and set everything to NULL
  for(int i=0;i<myFavorites;i++)
  {
    if(myFavorites[i]!=NULL)
    myFavorites[i]=NULL;
  }

  numStudents=0;
  delete [] students;
}


/////////////
//Functions//
/////////////

//Add a Teacher
void Course::addTeacher(Teacher *t)
{
  if(teacher!=NULL)
  {
    cout<<"Course already has a teacher"<<endl;
  }
  
  else
  {
    teacher = t;
    t->setMyCourse(this);
  }
}

//Remove a Teacher
void Course::removeTeacher(void)
{
  teacher=NULL;
}

//Add A Student
void Course::addStudent(Student *s)
{
  if(enrollmentNumber==capacity)
  {
    cout << "Error! Course is full!" << endl;
    return;
  }

  // Make sure that this student isn't already in the class.
  for(int i=0; i<capacity;i++)
  {
    if (students[i] == s)
    {
       cout << "Error! Student already in class!" << endl;
       return;
    }
  }
  
  //Find an empty location and put student there.
  for (int j=0; j < capacity; j++)
  {
    if (students[j]==NULL)
    {
      students[j]=s; 
      break;
    }
  }

  // Increment enrollment number.
  enrollmentNumber++;
}

//Remove a Student
void Course::removeStudent(Student *s)
{
  for (int k=0; k < capacity; k++)
  {
    if (students[k]==s)
    {
      enrollmentNumber--;
      students[k]=NULL; 
      return;
    }
  }
  
  cout << "Error! Student wasnt in class" <<endl;
}

////////////
//Mutators//
////////////

void Course::setName(string n)
{
  name=n;
}

/////////////  
//Accessors//
///////////// 

Teacher * Course::getTeacher(void)
{
  return teacher;
}

int Course::getCapacity(void)
{
  return capacity;
}

int Course::getEnrollmentNumber(void)
{
  return enrollmentNumber;
}

string Course::getName(void)
{
  return students;
}

void Course::printCourse(void)
{
  cout<<"Course "<<name<<" has: "<<endl;
  cout<<"A capacity of: "<<capacity<<endl;
  cout<<"an enrollment of: "<<enrollmentNumber<<endl;
  
  //Loop through and check if teacher is NULL
  if(teacher!=NULL)
  {
    cout<<"a teacher named: "<<teacher->getName()<<endl; //Can I use teacher->name?
    cout<<"and students named: "<<endl;
      
    for (int l=0; l<DEFAULT_CAPACITY; l++)
    {
      if(students[l]!=NULL)
      cout  << students[l]->getName()  <<endl;  // equivalently:  (*students[l]).getName()
    }
  }
}

