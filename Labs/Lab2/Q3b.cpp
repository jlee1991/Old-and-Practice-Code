//Question 3b

/* 
b). (15 pts)
Write a recursive function to compute the following series:

m(n) = 1/3 + 2/5 + 3/7 + ... + n/(2n+1)

You should submit a single source fie Q3b.cpp containing both your recursive function and your main() function.
*/
#include <iostream>

//Define Function Prototype
float summer(int n);

//Main file
using namespace std;

int main()
{
	int n;
	double answer;

	cout<<"What value of n would you like to compute to?"<<endl;
	cin>>n;

	answer=summer(n);
	cout<<"Your answer is: "<<answer<<endl;
	
	system("PAUSE");
	return EXIT_SUCCESS;
}

float summer(int n)
{
	if (n==0)
		return 0;

    else
		return summer(n-1)+ n/(2.0*n+1.0);
}

/*
//Define Function
float summer(int n, double sum)
{
	
	sum += n/(2.0*n+1.0);

	if (n==0)
		return sum;

    	else
		return summer(n-1,sum);
}
*/
