/*
Q2. [50 points] – Class Design
(The Student Class) Design a class named Student that contains:

• An int data field named tired. This variable can have a value between 0 and 100.

• An int data field named hungry. This variable can have a value between 0 and 10.

• A Boolean data field named studied. This can be either true or false.

• The accessor functions for all data fields.

• Mutator functions for all data fields which ensure correct values. If incorrect ranges are entered a warning message is presented and the data field should be set to 0 or false.

*/
#include <iostream>
using namespace std;

class Student
{
private:
int tired;
int hungry;
bool studied;

public:
//Accessors and mutators for tired
int get_tired(void);
void set_tired(int t);

//Accessors and mutators for hungry
int get_hungry(void);
void set_hungry(int h);

//Accessors and mutators for studied
int get_studied(void);
void set_studied(int s);

//Function Prototypes
Student(int hungry, int tired, bool studied);
Student();
bool willPassTheTest();
bool willGetAnAOnTheTest();
bool willMissTheTest();

};
