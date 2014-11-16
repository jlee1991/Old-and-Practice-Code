#include<iostream>
#include<fstream>
#include "statistics.h"

using namespace std;

int main()
{

char *filename = "numbers.txt";
float result;
int maximum,minimum,findmode;
write_data(filename, 10, 5);

//Apply Functions

//Mean
result = mean(filename);
cout <<"Mean is "<<result<<endl;

//Minimum
minimum = min(filename);
cout <<"Minimum is "<<minimum<<endl;

//Maximum
maximum = max(filename);
cout <<"Maximum is "<<maximum<<endl;

//Mode
findmode= mode(filename);
cout<<"Mode is "<<findmode<<endl;

}
