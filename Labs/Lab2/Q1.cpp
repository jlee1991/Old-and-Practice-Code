//Question 1 main file
#include <iostream>
#include <cmath>
#include "mysqrt.h"
using namespace std;

int main()
{
//Input Variables
float num;

//Calculated Variables
float estSqrt, realSqrt, diffSqrt;

cout<<"Enter number"<<endl;
cin>>num;

//Check if the number is negative
if (num<0)
{
	cout<<num<<endl;
	return 0;
}

estSqrt = mysqrt(num);

//Check the accuracy of the square root statement
realSqrt=sqrt(num);
diffSqrt=realSqrt-estSqrt;

if(fabs(diffSqrt)>0)
	cout<<"The difference between the values is"<<diffSqrt<<endl;

else
	cout<<"The value "<<estSqrt<<" obtained from the estimated square root function is precise"<<endl;

}
