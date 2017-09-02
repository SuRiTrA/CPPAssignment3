#include <iostream>
using namespace std;

/*Program to determine whether the number is positive, negative or zero*/

int main()
{
  float a=0;
  cout<<"Program to determine whether the number is positive, negative or zero";
  cout<<"\n \nEnter the number ";
  cin>>a;
  if(a>0)
    cout<<"\n \nThe number is positive";
  else if(a<0)
    cout<<"\n \nThe number is negative";
  else
    cout<<"The number is zero";
  return 0;
}
