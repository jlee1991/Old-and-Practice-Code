#ifndef TEACHER_H
#define TEACHER_H

#include <string>
using std::string;

#include "Course.h"
#include "Student.h"

class Course;  // "Forward declaration" required for compilation.

/**
 * Teacher class.
 */
class Teacher
{
  //Allow Course to access friend's private variables
  friend class Course;

public:

  /**
   * Default constructor (aka no-argument constructor).
   */
  Teacher(void);

  /**
   * This constructor takes the teacher's name as an argument.
   */
  Teacher(string teacher_name);

  /**
   * Destructor.
   */
  ~Teacher(void);

  void addToMyFavorites(Student *fav);
  void setMyCourse(Course *c);
  void setName(string n);

  int getNumStudents(void);
  Course *getMyCourse(void);
  string getName(void);
  
  void printTeacher(void);

private:
  int numStudents;
  string name;
  Course *myCourse;
  static const int MAX_FAVORITES = 10;
  Student ** myFavorites;
}; // class Teacher

#endif // TEACHER_H
