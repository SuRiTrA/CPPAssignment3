#include <iostream>
using namespace std;

/*Program to check whether a number is Prime number or not.*/
int main()
{
  int num=0,count=0;
  cout<<"\nProgram to check whether a number is Prime number or not.";
  cout<<"\nENTER THE NUMBER: ";
  cin>>num;
  for(int i=2;i<num;i++)
  {
   if(num%i==0)
   count++;
  }
  if(count==0)
    cout<<"\n \nThis is a prime number.";
  else
    cout<<"\n \nThis is not a prime number. ";
  return 0;
}
