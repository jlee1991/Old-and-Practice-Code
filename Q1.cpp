//Question 1: Computing the Area of Triangles
#include <iostream>
using namespace std;

int main()
{
  //Variables for components
  int base1,base2,height1,height2;

  //Variables for calculations
  double triangle1, triangle2, difference1, difference2;

  //Write information about the first triangle
  cout<<"Enter the information for the first triangle:"<<endl<<"Base: "<<endl;
  cin>>base1;
  cout<<"Height: "<<endl;
  cin>>height1;

   //Write information about the second triangle
  cout<<"Second Triangle: "<<endl<<"Base: "<<endl;
  cin>>base2;
  cout<<"Height: "<<endl;
  cin>>height2;
  
  while(base1<0||base2<0||height1<0||height2<0)
  {

  cout<<"Please enter positive numbers"<<endl;

  //Write information about the first triangle
  cout<<"Enter the information for the first triangle:"<<endl<<"Base: "<<endl;
  cin>>base1;
  cout<<"Height: "<<endl;
  cin>>height1;

   //Write information about the second triangle
  cout<<"Second Triangle: "<<endl<<"Base: "<<endl;
  cin>>base2;
  cout<<"Height: "<<endl;
  cin>>height2;
  }
   //Calculate using your given values
  triangle1=(0.5*base1*height1);
  triangle2=(0.5*base2*height2);
  difference1=triangle1-triangle2;
  difference2=triangle2-triangle1;

  //Display values
  if (triangle1>triangle2)
    cout<<"Triangle 1 is bigger by "<<difference1<<endl;
  else if (triangle1<triangle2)
    cout<<"Triangle 2 is bigger by "<<difference2<<endl;
  else if (triangle1==triangle2)
    cout<<"Triangle 1 is equal to Triangle 2 "<<endl;

  return 0;
}
