#include <iostream>
#include <cmath>
using namespace std;

/*Program to count number of digits in any number.*/
int main()
{
  int num=0;
  int dig=0;
  cout<<"PROGRAM TO CALCULATE NUMBER OF DIGITS IN THE GIVEN NUMBER";
  cout<<"\n \nEnter the number(INTEGER): ";
  cin>>num;
  int num1=abs(num);
  while(num1>0)
  {
    num1=num1/10;
    dig++;
  }
  if(num!=0)
  {
    cout<<"\n \nThe number of digits in "<<num<<" is "<<dig;
  }
  else
  {
    cout<<"\n \nThe number of digits in "<<num<<" is 1";
  }
  return 0;
 }
 
