#include <iostream>
#include "MatrixMultiply.h"
using namespace std;

int main()
{
	//Initialize the arrays: Form follows [Row][Column]
	double matrix1[3][3] = {0};
	double matrix2[3][2] = {0};
	double result[3][2] = {0};

	//Inputs for first matrix (Will be a 3x3 Matrix)
	cout<<"Input First Row of the 3x3 Matrix"<<endl;
	cin>>matrix1[0][0];
	cin>>matrix1[0][1];
	cin>>matrix1[0][2];
	cout<<"Input Second Row of the 3x3 Matrix"<<endl;
	cin>>matrix1[1][0];
	cin>>matrix1[1][1];
	cin>>matrix1[1][2];
	cout<<"Input Third Row of the 3x3 Matrix"<<endl;
	cin>>matrix1[2][0];
	cin>>matrix1[2][1];
	cin>>matrix1[2][2];

	//Inputs for second matrix (Will be a 3x2 Matrix)
	cout<<"Input First Row of the 3x2 Matrix"<<endl;
	cin>>matrix2[0][0];
	cin>>matrix2[0][1];
	cout<<"Input Second Row of the 3x2 Matrix"<<endl;
	cin>>matrix2[1][0];
	cin>>matrix2[1][1];
	cout<<"Input Third Row of the 3x2 Matrix"<<endl;
	cin>>matrix2[2][0];
	cin>>matrix2[2][1];

	multiply(matrix1, matrix2, result);
	
	cout<<"Your answer is: "<<endl;
	for (int i=0; i < 3; i++)
	{
		for (int j=0; j < 2; j++)
			cout << result[i][j] << " ";
		cout << endl;
	}

}
