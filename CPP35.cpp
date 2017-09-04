#include <iostream>
#include <cmath>
using namespace std;

/*Program to calculate sum of digits of any number*/
int main()
{
  int num=0;
  int dig=0,sum=0;
  cout<<"PROGRAM TO FIND THE SUM OF DIGITS OF ANY NUMBER";
  cout<<"\n \nEnter the number(INTEGER): ";
  cin>>num;
  int num1=abs(num);
  while(num1>0)
  { 
    sum+=num1%10;
    num1=num1/10;
    dig++;
  }
  cout<<"\n \nSum of digits of the number is: "<<sum; 
  return 0;
}
