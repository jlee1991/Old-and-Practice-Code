#ifndef COURSE_H //If COURSE_H is NOT defined - proceed with the program
#define COURSE_H //If COURSE_H is defined - skip the rest of the program

#include <string>
using std::string;

#include "Student.h"
#include "Teacher.h"

class Teacher;  // "Forward declaration" required for compilation.

/**
 * Course class.
 */
class Course
{
  //Allow Teacher to Access Course private variables
  friend class Teacher;

public:
  /**
   * Default constructor (aka no-argument constructor).
   */
  Course(void);

  /**
   * This version of the constructor takes the course name and capacity.
   */
  Course(string n, int c);

  /**
   * Destructor.
   */
  ~Course(void);

  void addTeacher(Teacher *t);
  void removeTeacher(void);
  void addStudent(Student *s);
  void removeStudent(Student *s);
  void setName(string n);
  
  Teacher *getTeacher(void);
  int getCapacity(void);
  int getEnrollmentNumber(void);
  string getName(void);

  void printCourse(void);

private:
  Teacher *teacher;
  static const int DEFAULT_CAPACITY = 100;
  int capacity;
  int enrollmentNumber;
  Student **students;
  string name;

}; // class Course;

#endif // COURSE_H

