//Question 4: Letter Conversion
#include <iostream>
using namespace std;

int main()
{	
	//Define variables
	unsigned char character,newcharacter;
	int checkcharacter;
	int offset;

	cout<<"Enter character: "<<endl;
	cin>>character;
	cout<<"Offset (enter 0 to convert case): "<<endl;
	cin>>offset;

	while(offset<0)
	{
	cout<<"The offset is not valid"<<endl<<endl;
	cout<<"Offset (enter 0 to convert case): "<<endl;
	cin>>offset;
	}

	//Straightforward case
	checkcharacter = character+offset;
	newcharacter = checkcharacter;

	//Change case when offset is 0 Uppercase to Lowercase
	if(offset==0 && (newcharacter>=65 && newcharacter<=90))
	{
		newcharacter=newcharacter+32;
	}

	//Change case when offset is 0 Lowercase to Uppercase
	else if(offset==0 && (newcharacter>=97 && newcharacter<=122))
	{
		newcharacter=newcharacter-32;
	}

	//Error check - char code is greater then 255
	else if(checkcharacter>255)
	{
		cout<<"ERROR: Outside the range of the ASCII table"<<endl;
		return 0;
	}

	cout<<"New character: "<<newcharacter<<endl;

	return 0;
}
