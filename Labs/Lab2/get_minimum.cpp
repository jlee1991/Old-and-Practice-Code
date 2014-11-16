#include<iostream>
#include<fstream>
#include "statistics.h"
using namespace std;

int min(const char *filename)
{
	ifstream input;
	input.open(filename);
	
	//Set a buffer for 10,000 allotted memory cells 
	int buffer[10000];

	//Check the amount of data in the unknown data set
	int count=0;
	int w;
	while(true)//!input.eof())
	{
		input>>w;
		if (input.eof())
			break;
		buffer[count]=w;
		count++;
	}
	
	//Check through the data set
	int tmp=buffer[0];
	for(int k=0; k<count; k++)
	{
		if(buffer[k]<tmp)
		tmp=buffer[k];
	}
input.close();
return tmp;
}
