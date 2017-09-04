#include <iostream>
#include <cmath>
using namespace std;

/*Program to calculate product of digits of any number*/
int main()
{
  int num=0;
  int dig=0,PROD=1;
  cout<<"PROGRAM TO FIND THE PRODUCT OF DIGITS OF ANY NUMBER";
  cout<<"\n \nEnter the number(INTEGER): ";
  cin>>num;
  int num1=abs(num);
  while(num1>0)
  { 
    PROD*=num1%10;
    num1=num1/10;
    dig++;
  }
  cout<<"\n \nProduct of digits of the number is: "<<PROD; 
  return 0;
}
