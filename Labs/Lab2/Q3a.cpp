//Question 3a
/*

a). (15 pts)
Write a function gcd(m,n) that recursively computes the greatest common divisor of 
two positive integers m and n and returns the result as an integer. If either (or both) of the 
inputs is less than or equal to 0, the function should return zero to indicate invalid input.
The greatest common divisor of m and n can be defined as follows:

-If m%n is 0, gcd(m,n) is n
-Otherwise, gcd(m,n) is gcd(n, m%n)

Write a test program that computes gcd(24,16) and gcd(255,25).
You should submit a single source file Q3a.cpp containing both the gcd() function and your main() function.

*/
#include <iostream>

//Define Function Prototype
int gcd(int m, int n);

//Main file
using namespace std;

int main()
{
	int display;
	
	//Display Greatest Common Denominator of 24 and 16
	display=gcd(24,16);
	cout<<display<<endl;
	
	//Display Greatest Common Denominator of 255 and 25
	display=gcd(255,25);
	cout<<display<<endl;
}

//Define Function
int gcd(int m, int n)
{
	int result;
	result=m%n;
	
	if (result<0)
		return 0;
	else if (result==0)
		return n;
	else 
		return gcd(n, result);
}
