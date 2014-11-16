#include<iostream>
#include<fstream>
#include "statistics.h"
using namespace std;

float mean(const char *filename)
{
	float result;

	ifstream input;
	input.open(filename);
	
	//Set a buffer for 10,000 allotted memory cells 
	int buffer[10000];

	//Check the amount of data in the unknown data set
	int count=0;
	int w;
	int temp;
	float sum=0.0;
	while(true)
	{
		input>>w;
		if (input.eof())
			break;
		buffer[count]=w;
		//sum=temp+w
		//w=temp
		sum += w;
		count++;
	}

	/*
	for(i=0; i < count; i++)
	{
		sum += buffer[i];
	}
	*/
	
	input.close();
	result=sum/count;
	return result;
}
