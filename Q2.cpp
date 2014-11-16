// Question 2: Converting Units
#include <iostream>
using namespace std;

main()
{
	//Define variable for type of conversion
	int converttype;
	double ptl, ptc,ctp,ctl,ltp,ltc;
	
	//Define variables for Liters, Cups, Pints
	int pints, cups, liters;

	//Select conversion type
	cout<<"Pints to Liters (enter 0)"<<endl<<
	"Pints to Cups (enter 1)"<<endl<<
	"Cups to Pints (enter 2)"<<endl<<
	"Cups to Liters (enter 3)"<<endl<<
	"Liters to Pints (enter 4)"<<endl<<
	"Liters to Cups (enter 5)"<<endl;
	cin>>converttype;

	//If the convertype is not the correct one
	while (converttype<0||converttype>5)
	{
	cout<<"Conversion type is invalid, please enter a new conversion type"<<endl<<endl;
	cout<<"Pints to Liters (enter 0)"<<endl<<
	"Pints to Cups (enter 1)"<<endl<<
	"Cups to Pints (enter 2)"<<endl<<
	"Cups to Liters (enter 3)"<<endl<<
	"Liters to Pints (enter 4)"<<endl<<
	"Liters to Cups (enter 5)"<<endl;
	cin>>converttype;

	}

	//Pints to Liters
	if (converttype==0) 
	{
		cout<<"Enter the amount in Pints"<<endl;
		cin>>pints;
		ptl=pints*0.473176473;
		cout<<pints<<" Pints is "<<ptl<<" Liters"<<endl;
	}

	//Pints to Cups
	else if (converttype==1)
	{
		cout<<"Enter the amount in Pints"<<endl;
		cin>>pints;
		ptc=2*pints;
		cout<<pints<<" Pints is "<<ptc<<" Cups"<<endl;
	}

	//Cups to Pints
	else if (converttype==2)
	{
		cout<<"Enter the amount in Cups"<<endl;
		cin>>cups;
		ctp=0.5*cups;
		cout<<cups<<" Cups is "<<ctp<<" Pints"<<endl;
	}

	//Cups to Liters
	else if (converttype==3)
	{
		cout<<"Enter the amount in Cups"<<endl;
		cin>>cups;
		ctl=0.236588236*cups;
		cout<<cups<<" Cups is "<<ctl<<" Liters"<<endl;
	}

	//Liters to Pints
	else if (converttype==4)
	{
		cout<<"Enter the amount in Liters"<<endl;
		cin>>liters;
		ltp=2.11337642*liters;
		cout<<liters<<" Liters is "<<ltp<<" Pints"<<endl;
	}

	//Liters to Cups
	else if (converttype==5)
	{
		cout<<"Enter the amount in Liters"<<endl;
		cin>>liters;
		ltc=4.22675284*liters;
		cout<<liters<<" Liters is "<<ltc<<" Cups"<<endl;
	}

	return 0;
}
