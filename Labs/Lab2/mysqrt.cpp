#include <cmath>
#include <iostream>
#include "mysqrt.h"
//Define mysqrt function

float mysqrt (float num)
{
float nextGuess, lastGuess=10;
float temp;

nextGuess = (lastGuess + (num / lastGuess))/2.0;

//Carry out the mysqrt operation
while(fabs(nextGuess-lastGuess)>=0.0001)
{
lastGuess = nextGuess;
nextGuess = (lastGuess + (num / lastGuess))/2.0;;
}

return nextGuess;
}
