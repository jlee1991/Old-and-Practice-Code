#include <iostream>
#include "tip.h"
#include "change.h"

using namespace std;

int main()
{

double input;
double total,payment;
double remaining;

total=100;
payment=90;
input=100;

remaining=bill(total,payment)-tip(input);

if (remaining<0)
cout<<"You have underpaid"<<endl;

else 
cout<<"You have "<<remaining<<endl;

}
