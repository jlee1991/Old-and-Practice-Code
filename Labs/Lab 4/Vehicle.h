#ifndef VEHICLE_H
#define VEHICLE_H

#include "PassengerException.h"

#include <string>
#include <iostream>
using namespace std;

template<typename T>

//Vehicle Object
class Vehicle
{  public:
    Vehicle(); //default constructor
    Vehicle(int, int, string, int); // set the x, y, name, and capacity
    virtual ~Vehicle(); //destructor; should this be virtual or not???
    //ANSWER: In pg. 505 (at the bottom) the destructor should be declared virtual
	
	
    //Inheritance - question #1; create these functions here and in Bicycle class
    string get_name(); // get the name of the vehicle
    void set_name(string); //set the name of the vehicle
    void print(); // std print funtion (GIVEN TO YOU)
	
    //Polymorphism - question #2
    virtual void move(int, int); // move to the requested x, y location
    virtual void set_capacity(int); // set the capacity value
		
    //Operator overloading - question #3
    Vehicle<T> operator+(Vehicle<T> &secondVehicle) const;
		
    //Exceptions - question #4
    T get_passenger(int) throw(PassengerException); // get the passenger at the specified index
    void add_passenger(T) throw(PassengerException); // add passenger and the current passenger index
    void remove_passenger() throw(PassengerException); // remove a passenger using current passenger index
		
  protected:
    int x_pos;
    int y_pos;
    string name;
    int capacity;
    T *passengers;
    int current_passenger;
};

////////////////
//Constructors//
////////////////

/*Default Constructor*/
template<typename T>
Vehicle::Vehicle(void)
{
  x_pos=0;
  y_pos=0;
  name = "Default";
  capacity=2;
  current_passenger=-1; 
  passengers = new T [capacity];
}

/*Constructor*/
template<typename T>
Vehicle::Vehicle(int x, int y, string name, int capacity)
{
  this->x_pos=x;
  this->y_pos=y;
  this->name=name;
  this->capacity=capacity;
  this->current_passenger=-1
  passengers = new T [capacity];
}

//////////////
//Destructor//
//////////////

template<typename T>
virtual Vehicle::~Vehicle(void)
{
  delete passengers;
  cout << "Destroyed a vehicle named: " << this->name << endl;
}
/////////////
//FUNCTIONS//
/////////////

//Move function
template<typename T>
Vehicle::move(int x, int y)
{
 this->x_pos=x;
 this->y_pos=y;
 cout << "Moving Vehicle to x: " << this->x_pos << " y: " << this->y_pos << endl; 
}

////////////
//Mutators//
////////////
	
//Set name function
template<typename T>
Vehicle::set_name(string name)
{
  if (passengers==NULL)
    this->name=name;
}

//Set capacity function
template<typename T>
Vehicle::set_capacity(int capacity)
{
  T* old=passengers;
  this->capacity=capacity;
  passengers = new T[capacity];
  
  for(int i=0;i<capacity;i++)
    passengers[i]=old[i];
  
  delete [] old; 
}

/////////////
//Accessors//
/////////////

//Get name function
template<typename T>
Vehicle::get_name(void)
{
  return name;
}

//Here is the provided print funtion
//DO NOT MODIFY
template<typename T>
void Vehicle<T>::print()
{  cout << "Object " << name << "\n at x: " << x_pos << "\n and y: " << y_pos << "\n with capacity: " << capacity << endl;
  return;
}

//////////////////////////////////
//Operator Overloading Functions//
//////////////////////////////////

template<typename T>
Vehicle<T> Vehicle::operator+(Vehicle<T> &secondVehicle) const
{
 int over_x = this->x_pos+secondVehicle->x_pos;
 int over_y = this->y_pos+secondVehicle->y_pos;
 int over_capacity=this->capacity+secondVehicle->capacity;
 string over_name=this->name+secondVehicle->name;
 return Vehicle(over_x, over_y, over_capacity, over_name)
}

///////////////////
//Exception Cases//
///////////////////

template<typename T>
Vehicle::get_passenger(int p) throw(PassengerException)
{

  

}

template<typename T>
Vehicle::add_passenger(T p) throw(PassengerException)
{

  

}

template<typename T>Vehicle::
Vehicle::remove_passenger() throw(PassengerException)
{
  
}

#endif

