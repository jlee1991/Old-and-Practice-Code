#ifndef PASSENGEREXCEPTION_H#define PASSENGEREXCEPTION_H#include<iostream>#include<stdexcept>using namespace std;class PassengerException: public logic_error{  public:    PassengerException(int request, int capacity): logic_error("Invalid")    {
      cout << "The requested int for passenger manipulation " << request << " is outside the capacity " << capacity << endl;    }};#endif
