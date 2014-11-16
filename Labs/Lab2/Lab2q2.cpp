#include <cstdlib>
#include <iostream>
#include <fstream>


using namespace std;

void write_data(const char *filename, unsigned int N, unsigned int M);
float get_mean(const char *filename);

int main(int argc, char *argv[])
{
    char *testfile = "test.txt"; // output file to the same folder the program is located
    unsigned int Numb = 20;  // total random number that will be generated
    unsigned int Maxnumb = 40; // Celling of the number range
    write_data(testfile, Numb, Maxnumb);
    cout <<"The mean is " <<get_mean (testfile)<<"\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}

void write_data(const char *filename, unsigned int N, unsigned int M)
{
  int outNumb =0;
  ofstream myfile;  // ofstream is for output file  
  myfile.open (filename);
  if (myfile.is_open()) 
  { /* ok, proceed with output */ 
  while ( N > 0)   // loop N times to write N random number to the output file
  {
     outNumb  = rand() % (M + 1); // random number generator
      myfile << outNumb <<"\n";
    N--;
  }
  myfile.close();
 }
 else 
   cout <<"Can't open file " <<filename;
}

float get_mean(const char *filename)
{
  ifstream myfile;  // ifstream is for input file
  int count =0;
  float mean =0.0;
  float total=0.0;   // convert to float when add float with int 
  int inNumb;
  myfile.open(filename);
  if (myfile.is_open())
  {
       while (!myfile.eof())  // keep on reading until it reach to end of file
       {
          myfile >>inNumb;
          total= total + inNumb; // accumulate input number
          count++;                       // count how many number
       } 
    count--; 
   // cout <<"Number read \n" << count <<"\n";
    mean = total/count;            
  }       
   else 
  cout <<"Can't open file "<<filename; // return zero mean
  
 return mean;  
}
