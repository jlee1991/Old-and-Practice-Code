#include <iostream>
#include "date_to_dayofyear.h"
#include "dayofyear_to_date.h"
#include "days_in_month.h"

using namespace std;

int main()
{

int month=5;
int day=2;
const int dayofyear = 238;
//Call function date_to_dayof year
int ans1=date_to_dayofyear(month,day);
cout<<"Date of year "<<ans1<<endl;

//Call function dayofyear_to_date
dayofyear_to_date(dayofyear,month,day);
cout<<"Month "<<month<<" day "<<day<<endl;
//Call function days_in_month
int ans3 = days_in_month(month);
cout<<"Days in Month "<<ans3<<endl;

}
