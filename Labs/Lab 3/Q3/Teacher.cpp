#include <iostream>
#include <string>
#include "Teacher.h"
#include "Student.h"
#include "Course.h"
using namespace std;

//Default Constructor
Teacher::Teacher(void)
{
  numStudents=0;
  name="default teacher";
}

//Constructor
Teacher::Teacher(string teacher_name)
{
  this->name=teacher_name;
}

//Destructor
Teacher::~Teacher(void)
{
  delete myFavorites;
  numStudents =0;
  myCourse->removeTeacher();
  myCourse = NULL;
  name = " ";
}

/////////////
//Functions//
/////////////

//Add a Favorite Student
void Teacher::addToMyFavorites(Student *fav)
{
  // Make sure that this student isn't already a favorite
  for(int i=0; i<MAX_FAVORITES;i++)
  {
    if ( myFavorites[i] == fav)
    {
       cout << "Error! Student already a favorite!" << endl;
       return;
    }
  }
  
  //Find an empty location and put student there
  for (int j=0; j <MAX_FAVORITES; j++)
  {
    if (myFavorites[j]==NULL)
    {
      myFavorites[j]=fav; 
      return;
    }
  }
  
  // Otherwise, there weren't any empty locations.
  cout << "Error! Teacher already has enough favorites!" << endl;

}

////////////
//Mutators//
////////////
void Teacher::setMyCourse(Course *c)
{
  if (myCourse!=NULL)
    cout<<"Warning: Teacher is already teaching a class"<<endl;
  else if (c->teacher!=NULL)
    cout<<"Warning: Two teachers cannnot teach the same course"<<endl;
  //Needs to be finished
  else if (myCourse==NULL)
  {
     myCourse=c;
     c->teacher = this;
   }
}

void Teacher::setName(string n)
{
  name=n;
}

/////////////
//Accessors//
/////////////

int Teacher::getNumStudents(void)
{
  return numStudents;
}

Course * Teacher::getMyCourse(void)
{
  return myCourse;
}

string Teacher::getName(void)
{
  return name;
}

void Teacher::printTeacher(void)//check for null students
{
  cout<<"Teacher "<<name<<"has: "<<endl;
  cout<<numStudents<<" students"<<endl;
  
  //Loop through and check if the course is NULL
  if(myCourse!=NULL)
  {
    cout<<"teaches a course named"<<myCourse->getName()<<endl;//Can I do this?
    cout<<"and has favorite students: "<<endl;
  
    for (int i=0; i<MAX_FAVORITES; i++)
    {
      //cout<<(*myFavorites[i]).name<<endl; //also could do getName() for this teacher, but no real need to...
      cout<<myFavorites[i]->getName<<endl;
    }
  }
}
