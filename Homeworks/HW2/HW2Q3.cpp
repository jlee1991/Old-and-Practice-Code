//Question 3

#include <iostream>
using namespace std;

//Define function prototypes
bool SevenEleven(int integer1,int integer2);
bool SevenEleven(char input1,char input2);
bool SevenEleven(int integer1,char input2);
bool SevenEleven(char input1, int integer2);

int main()
{

	//Define input variables
	char input1;
	char input2;
	int integer1;
	int integer2;

    	cout<<"Enter an input (1-6) or (B,D,G,K)"<<endl;
	cin>>input1;

	//Convert char input1 to integer
	if(input1=='1'||input1=='2'||input1=='3'||input1=='4'||input1=='5'||input1=='6') {
		input1=input1-'0';
		integer1=input1;
	}

	cout<<"Enter another input (1-6) or (B,D,G,K)"<<endl;
	cin>>input2;

	//Convert char input2 to integer
	if(input2=='1'||input2=='2'||input2=='3'||input2=='4'||input2=='5'||input2=='6')
        {
		input2=input2-'0';
		integer2=input2;
        }

	
	//Execute the function
	/*
	cout<<input1<<endl;
	cout<<input2<<endl;
	cout<<integer1<<endl;
	cout<<integer2<<endl;
	*/

	//Output SevenEleven
	if((input1!=1&&input1!=2&&input1!=3&&input1!=4&&input1!=5&&input1!=6)&&
	(input2!=1&&input2!=2&&input2!=3&&input2!=4&&input2!=5&&input2!=6))
	cout<<(SevenEleven(input1,input2)?"true":"false")<<endl;


	else if((input1==1||input1==2||input1==3||input1==4||input1==5||input1==6)&&
	(input2==1||input2==2||input2==3||input2==4||input2==5||input2==6))
	cout<<(SevenEleven(integer1,integer2)?"true":"false")<<endl;

	else if((input1==1||input1==2||input1==3||input1==4||input1==5||input1==6))
	cout<<(SevenEleven(integer1,input2)?"true":"false")<<endl;

	else if((input2==1||input2==2||input2==3||input2==4||input2==5||input2==6))
	cout<<(SevenEleven(input1,integer2)?"true":"false")<<endl;


}

//Overload functions

//Input is two integers
bool SevenEleven(int integer1,int integer2)
{
	//Store the values as temporary variables
	int a=integer1;
	int b=integer2;

	//if (a+b == 11 || a+b == 7)
	//return true;
	//else
	//return false;

	return ((a+b == 11) || (a+b == 7));
}

//Input is two characters
bool SevenEleven(char input1,char input2)
{

	//Convert input1 to corresponding integer
	if(input1=='B')
		input1=2;

	else if(input1=='D')
		input1=4;

	else if(input1=='G')
		input1=7;

	else if(input1=='K')
		input1=11;


	//Convert input2 to corresponding integer
	if(input2=='B')
		input2=2;

	else if(input2=='D')
		input2=4;

	else if(input2=='G')
		input2=7;

	else if(input2=='K')
		input2=11;

	//Store the values as temporary variables
	int a=input1;
	int b=input2;

	//Find out the values of the code
	//return (a+b == 11 || a+b == 7);
	return SevenEleven(a,b);
}

//Input is an integer, then a character
bool SevenEleven(int integer1,char input2)
{
	
	//Convert input2 to corresponding integer
	if(input2=='B')
		input2=2;

	else if(input2=='D')
		input2=4;

	else if(input2=='G')
		input2=7;

	else if(input2=='K')
		input2=11;

	//Store the values as temporary variables
	int a=integer1;
	int b=input2;

	//Find out the values of the code
	return (a+b == 11 || a+b == 7);
	return SevenEleven(a,b);

}

//Input is a character, then an integer
bool SevenEleven(char input1, int integer2)
{
	
	//Convert input1 to corresponding integer
	if(input1=='B')
		input1=2;

	else if(input1=='D')
		input1=4;

	else if(input1=='G')
		input1=7;

	else if(input1=='K')
		input1=11;

	//Store the values as temporary variables
	int a=input1;
	int b=integer2;

	//Find out the values of the code
	return (a+b == 11 || a+b == 7);
	return SevenEleven(a,b);
}
