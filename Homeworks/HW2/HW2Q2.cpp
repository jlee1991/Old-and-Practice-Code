#include <iostream>
using namespace std;

//Declare function prototype
void foo(double aa);
int foo(int aa, int bb, int cc);
void foo(char aa);
void foo(int aa);

int main()
{
int cc;

foo(15);	//prints the number 10
foo('I');	//prints the number 9
foo('H');    // prints the number 8
foo('G');	//prints the number 7
foo('F');	//prints the number 6
foo('E');	//prints the number 5
foo(2,6,cc);	//prints the number 4
foo(8);      // prints the number 3
foo(2.0);    // prints the number 2
foo(1.0);	// prints the number 1
foo(0.0);	// prints the number 0

}


//Function 1
//Only recieves inputs for less then 2 and spits out the same number
void foo(double aa=0) {
if (aa<=2)
cout << (int) aa << endl;
}



//Function 2
//Loops until the value of aa is equal to bb. Output is the number of loops
int foo(int aa, int bb, int cc=0) {
while (aa<bb) {
aa++;
cc++;
}
if (cc<5)
{ cout << cc << endl; return 0; }
else
{return cc;}
}



//Function 3
void foo(char aa) {
if (aa<='I')
{ cout << foo('A',aa,1) << endl; }
}



//Function 4
//If aa is divisible by 3, output 1 (number divided by 3). If not, print out the modulus of 5
void foo(int aa) {
if (aa%3==0)
{ cout << "1"; foo(aa/3); }
else
{ cout << aa%5 << endl; }
}

