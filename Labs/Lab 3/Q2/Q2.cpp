#include<iostream>
#include<cstring>
using namespace std;

//Define Function Prototype
char * largestCommonSubstr(const char s1[], const char s2[]);

int main()
{
//Define variables
char s1[10000];
char s2[10000];

//Prompt user for inputs
cout<<"Input first string"<<endl;
cin>>s1;

cout<<"Input second string"<<endl;
cin>>s2;

cout<<"The longest common substring is: "<<largestCommonSubstr(s1,s2)<<endl;
}

//Function
char * largestCommonSubstr(const char s1[], const char s2[])
{

///////////////////////////
//METHODOLOGY OF FUNCTION//
///////////////////////////

/*
"STEP 1"
- Check if NULL set in either Input 1 or Input 2

- Compare elements of Input 1 and Input 2

- Run through first array of Input 1 and compare to the first term of Input 2
*/

/*
"STEP 2"
- If none of the terms match, compare the array of Input 1 to the second term of Input 2

- When/If terms match expand to compare the array of Input 1 and the next term of Input 2

- Record the position where the terms match

- Begin a counter for the amount of terms that are matching

- If the streak ends and there are still elements of the array left that haven't been checked, store the current counter and reset the current counter

- Repeat process until the end of the array of Input 2 is met
*/

/*
"STEP 3"
- Compare to find longest streak of terms 

- Output result
*/

int length_s1;
int length_s2;
int start;
int count;
int compare;



count=0;
compare=0;
start=0;

/*Check if NULL*/
if(s1==NULL||s2==NULL)
{
	char *result = new char;
	*result = '\0';
	return result;
}

length_s1=strlen(s1);
length_s2=strlen(s2);

/*Check through both inputs*/
for(int j=0; j<length_s2; j++)
{
  for(int i=0; i<length_s1; i++)
  {
     // Check only if they are the same
     if (s1[i] == s2[j])
     {
       count = 0;
       for(int k=0; k+i<length_s1 && k+j <length_s2; k++)
       {
	  if (s1[i+k]==s2[j+k])
		count++;
	  else
	  	break;
	} // for k
	if (count>compare)
	{
		compare = count;
		start = i; //Record the position where the terms match
	}
    } // if
  } // for i
} // for j

//OUTPUT THE SUB-STRING
//char * no_common = new char[length_s1+1];
//no_common[0] = '\0';

cout << "COUNT, COMPARE, START " << count << " " << compare << " " << start << endl;


/*No Common Sub-string*/

if (count==0)
{
	char *result = new char[1];
	result[0] = '\0';
	return result;
}

/*Greatest Common Sub-string*/
else
{
	char * common = new char[compare+1];
	for(int l=0;l<compare;l++)
	{
		common[l] = s1[start+l];
	}
	common[compare] = '\0';
	
	return common;
}

}
