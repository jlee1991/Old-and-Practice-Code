#include <iostream>
#include "date_to_dayofyear.h"
#include "days_in_month.h"

using namespace std;

int date_to_dayofyear(int month, int day)
{
  int calDay = 0;
  int monArray[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
  for (int i=0; i<month;i++)
  	 calDay=calDay+monArray[i];
  calDay=calDay+day;
  return (calDay);
}
