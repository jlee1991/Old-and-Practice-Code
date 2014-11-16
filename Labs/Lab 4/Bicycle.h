#ifndef BICYCLE_H
#define BICYCLE_H

#include "Vehicle.h"

#include <string>
#include <iostream>
using namespace std;

class Bicycle : public Vehicle
{public:
  Bicycle();
  Bicycle(int, int, string, int); //set x, y, name and capacity (remember that capacity can be at most 2)
  ~Bicycle();
	
  //Redefined functions inherited from Vehicle
  void move(int, int); // move to the requested x, y location divided by 2
  void set_capacity(int); // set the capacity value; can't be larger than 2
		
};

////////////////
//Constructors//
////////////////

//Default Constructor
template<typename T>
Bicycle::Bicycle()
{
  x_pos=0;
  y_pos=0;
  name = "Default";
  capacity=2;
  current_passenger=-1;
  passengers = new T[capacity];
  
  cout << "Creating new bicyle " << this->name << endl;}

//Constructor
template<typename T>
Bicycle::Bicycle(int x, int y, string name, int capacity){
  this->x_pos=x;
  this->y_pos=y;
  this->name=name;
  this->capacity=capacity;
  this->current_passenger=-1;
  passengers = new T[capacity];;

  cout << "Creating new bicyle " << this->name << endl;
}

//////////////
//Destructor//
//////////////

//Destructor
template<typename T>
Bicycle::~Bicycle()
{
  delete passengers;
  capacity=0;
  cout << "Destroyed a bicycle named: " << this->name << endl;
}

/////////////
//Functions//
/////////////

//Move function
template<typename T>
Bicycle::move(int x, int y)
{
  this->x_pos=x;
  this->y_pos=y;
  cout << "Moving to bicycle " << this->name << " to x: " << this->x_pos << " y: " << this->y_pos << endl;
}

//Capacity function
template<typename T>
Bicycle::set_capacity(int capacity)
{
  /*Check that capacity is at most 2*/
  if(capacity>2)
  {
    capacity=2;
    T* old=passengers;
    this->capacity=capacity;
    passengers = new T[capacity];
  
    for(int i=0;i<capacity;i++)
      passengers[i]=old[i];
  
    delete [] old;
  }
  
  else
  {
    T* old=passengers;
    this->capacity=capacity;
    passengers = new T[capacity];
  
    for(int i=0;i<capacity;i++)
      passengers[i]=old[i];
  
    delete [] old;
  }
  
  cout << "Setting bicycle " << this->name << " to " << this->capacity << endl;
}

#endif
