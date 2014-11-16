#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using std::string;

class Student
{
public:
  Student(void) { name = "default student"; }
  Student(string n) { name = n; }
  ~Student(void) { }

  string getName(void) { return name; }
  void setName(string n) { name = n; }

private:
  string name;
}; // class Student

#endif // STUDENT_H
