#include <iostream>
#include "dayofyear_to_date.h"
#include "days_in_month.h"

using namespace std;

void dayofyear_to_date(const int dayofyear, int month, int day)
{
  int cal = dayofyear;
  int monArray[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
  month=0;
  day=0;
  while (cal>monArray[month])
  {
        cal=cal-monArray[month];
        month++;
  }
  if (cal !=0)
   {
          month++;
          day=cal;
   }
   else
   {
       day = monArray[month];
   }
}
