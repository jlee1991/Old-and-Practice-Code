#include<iostream>
#include<fstream>
#include "statistics.h"
using namespace std;

int mode(const char *filename)
{
	ifstream input;
	input.open(filename);
	
	//Set a buffer for 10,000 allotted memory cells 
	int buffer[10000];

	/*Assign Repeated Values to another set of Memory Cells*/
	//Check the amount of data in the unknown data set
	int count=0;
	int w;
	int mode_fr=0;
	int result=0;
	int frequency[1000];

	while(true)
	{
		input>>w;
		if (input.eof())
			break;
		buffer[count]=w;
		count++;
	}
	
	//Check through the data set and allocate the values to their corresponding pointer values
	int tmp=buffer[0];
	for(int k=0; k<count; k++)
	{
		//Find the repeating values for the values of the k iterations
		for(int j=k+1; j<count; j++)
		{
			if (buffer[k]==buffer[j])
			frequency[k]++; 
		}
	}
	
	/*Run through the frequency array to allocate the most frequent array value*/
	//Run the loop
	for(int k=0; k<count; k++)
	{
		if(frequency[k]>mode_fr)
		{
			mode_fr=frequency[k];
			result=buffer[k];
		}
	}
input.close();
return result;
}
