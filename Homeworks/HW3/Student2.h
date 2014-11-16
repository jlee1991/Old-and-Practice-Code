#include <iostream>
using namespace std;

class Student
{
private:
int tired;
int hungry;
bool studied;
static int totalStudents;
Student * bestFriend; //(Student *) is the pointer data type

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

//Accessors for totalStudents
int get_totalStudents(void);

//Accessor and mutator for pointer bestFriend
Student * get_bestFriend(void);
void set_bestFriend(Student * other);

//Function Prototypes
Student(int hungry, int tired, bool studied);
Student();
~Student();
bool willPassTheTest();
bool willGetAnAOnTheTest();
bool willMissTheTest();
bool isMyFriendTired();

};
