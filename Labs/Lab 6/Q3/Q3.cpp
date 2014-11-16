#include <iostream>
using namespace std;

	//FIXME 1
	//Where should the following line go to make it global? Move if need be.
	/*You should move the function so that it is outside so that the scope of the function is more global*/	
	 
double globalArray[] = {1.0, 4.0, 3.0, 7.9};


/*
	Function prototype for "reverse" function.
	The function will return a pointer to an array with  
	values reversed as compared to the array passed to the function.
	i.e. [2.0, 7.7, 10.11] -> [10.11, 7.7, 2.0]
*/



double *reverse(const double *const originalArray, int size);




/*
This function should take the "inputArray" and merge it with 
the "globalArray" and return a pointer to the newly merged array. 
"globalArray" should be put at the end.

i.e. globalArray = [3.0, 8.9]
inputArray = [5.5, 8.0]

returnArray = [5.5, 8.0, 3.0, 8.9]
*/
double* merge(double * const inputArray, const int inputSize)
{
	int size = sizeof(globalArray)/sizeof(double) + inputSize;	
	
	static double *returnArray = new double [size];
    //FIXME 7; declare array; HINT remember dangers of local return values
	
	for(int i=0; i<size; i++)
	{
		if(i<inputSize)
			*(returnArray+i) = *(inputArray+i);
            //FIXME 8; use a form of inputArray here
		else
			*(returnArray+i) = globalArray[i-inputSize];
	}

	return returnArray;
}

/*
Fill the array with 10.0 plus the current i value
i.e i=2 -> index 2 of the array should have a value of 12.0
*/
void fill (double * const p, const int i)
{
		//FIXME 6
		//Fix the left hand side; you ONLY need to have this one line; DO NOT add more lines
		//Hint: dereference the pointer plus i
		 *(p+i)=i+10.0;
}


//FIXME 9
//Put function to reverse an array here
double *reverse(const double *const originalArray, int size)
{
  static double rv[] = {0};
  for (int i=0; i<size; i++)
   rv[size-i-1] = originalArray[i];
  return (rv);    
       
}



//*************************************************************

/*
This program should do the following:
1. Fill an array ("arrayToFill") with values based on a "fillSelection" array which denotes when to put either default or calculated values
2. Merge the newly filled array with a global array (globalArray) and return a pointer to the merged array ("mergedArray")
3. Return a pointer to an array ("reversedArray") which is the "reverse" of the "mergedArray"

*/

int main()
{
	

	
	//Array used to hold values use to determine whether fillArray function should be called
	const bool fillSelection[] = {true, false, true, true, false, true};
	
	const int size = sizeof(fillSelection)/sizeof(bool);
	
	//FIXME 2
	//Fix the right hand side with a DYNAMIC MEMORY ALLOCATION statement
	//Array which should be filled with "size" number of values
	double * const arrayToFill = new double [size];
	
	//FIXME 3
	//Fix the for loop ???
	//Loop to fill arrayToFill
	for(int i=0; i<size; i++)
	{
		//FIXME 4
		//Fix the left hand side ?? based on the value in fillSelection
		if (fillSelection[i] == true)
			fill(arrayToFill, i); //FIXME 5; pass arrayToFill correctly
		else
			arrayToFill[i] = 23.0; //23 is the default value
			
	}
		
	//Merge array to fill with global variable globalArray
	double * const mergedArray = merge(arrayToFill, size);
	
	
	//Code to check the contents of merged Array
	int sizeFinal = sizeof(globalArray)/sizeof(double) + size; 
	cout << "Merged Array" << endl;
	for(int i=0; i<sizeFinal; i++)
		cout << mergedArray[i] << endl;
	
	double *reversedArray = reverse(mergedArray, sizeFinal);
	
	//Code to check the contents of the reversed Array
	cout << "Reversed Array" << endl;
	for(int i=0; i<sizeFinal; i++)
		cout << reversedArray[i] << endl;
	
		
	return 0;

}
