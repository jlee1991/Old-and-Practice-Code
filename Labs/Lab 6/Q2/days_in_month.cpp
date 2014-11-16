#include <cstdlib>
#include <iostream>
using namespace std;

#include "days_in_month.h"

int days_in_month(int month)
{
  switch(month)
  {
    case 1:  return 31;  // Jan
    case 2:  return 28;  // Feb
    case 3:  return 31;  // Mar
    case 4:  return 30;  // Apr
    case 5:  return 31;  // May
    case 6:  return 30;  // Jun
    case 7:  return 31;  // Jul
    case 8:  return 31;  // Aug
    case 9:  return 30;  // Sep
    case 10: return 31;  // Oct
    case 11: return 30;  // Nov
    case 12: return 31;  // Dec
    default:
      cout << "Error in days_in_month()! Month must be from 1 to 12. Exiting." << endl;
      exit(-1);
  }
  return 0; // (Should never get this far)
}
