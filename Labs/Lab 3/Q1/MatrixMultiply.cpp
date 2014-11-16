#include <iostream>
#include "MatrixMultiply.h"
using namespace std;

void multiply(double matrix1[3][3], double matrix2[3][2], double result[3][2])
{
	
	//cout << "Got:" << matrix1[0][0] << endl;

	int row_sizeA=3;//Row size matrix 1
	int column_sizeA=3;//Column Size matrix 1
	int column_sizeB=2;//Row size matrix 2
	double sum;

	for(int i=0; i<row_sizeA; i++)
	{
		for(int j=0; j<column_sizeB; j++)
		{	
		sum=0;
			for(int k=0;k<column_sizeA;k++)
			{	
				sum=sum+matrix1[i][k]*matrix2[k][j];
			}
		result[i][j]=sum;
		}
	}


}
