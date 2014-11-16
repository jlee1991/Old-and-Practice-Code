#include<iostream>
/*

The change function should return the amount of change that the restaurant owes the customer. If this amount is negative, it means that the customer has underpaid. You are not given any code for the change function.

*/

double bill(double total, double payment)
{

double extra;

extra=total-payment;

if (extra>=0)
	return extra;

else 
 	return 0;

}
