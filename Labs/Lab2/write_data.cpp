#include<iostream>
#include<fstream>
#include"statistics.h"

using namespace std;

void write_data(const char *filename, unsigned int N, unsigned int M)
{
int rndmnum;

ofstream output;
output.open(filename);

//Generate a random set of numbers in the text file
//while (N>0)
for (int i=0; i < N; i++)
{
rndmnum=(rand() % (M+1))
output << rndmnum << endl;
}
output.close();

}
