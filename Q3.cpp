//Question 3: Hamming Distance
#include <iostream>
using namespace std;

main()
{	
	//Define variables
	int integer1, integer2;
	int newint1, newint2;
	int cmpint1, cmpint2;
	int hamming;
	int i;

	cout<<"Enter two integers between 0 and 999,999"<<endl;
	cin>>integer1;
	cin>>integer2;

	while((integer1<=0 || integer1>=999999)||(integer2<=0 || integer2>=999999))
	{
	cout<<"The number is not valid"<<endl;
	cout<<"Enter two integers between 0 and 999,999"<<endl;
	cin>>integer1;
	cin>>integer2;
	}

	//Use modulus and divided by 10
	hamming = 0;
	newint1=integer1;
	newint2=integer2;
	for (i=1; i<=6; i++)
	{
	cmpint1=integer1%10;
	cmpint2=integer2%10;
	
	integer1=integer1/10;
	integer2=integer2/10;

	if (cmpint1!=cmpint2)
		{
			hamming++;

		}
	}
	
	cout<<"Hamming distance between "<<newint1<<" and "<<newint2<<" is "<<hamming<<endl;
	return 0;
}
