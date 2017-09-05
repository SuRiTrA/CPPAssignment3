#include <iostream>
using namespace std;

/*Program to find HCF of two numbers.*/
int main()
{
  long int num1, num2, lim, HCF=1;
  cout<<"\nProgram to find HCF of two numbers.";
  cout<<"\n \nENTER THE NUMBERS: ";
  cin>>num1>>num2;
  if(num1>num2)
  lim=num2;
  else if(num2>num1)
  lim=num1;
  else
  lim=num1;
  for(int i=1;i<=lim;i++)
  {
   if(num1%i==0 && num2%i==0)
   {
     HCF=i;
   }
  }
  cout<<"\n \nThe HCF of "<<num1<<" and "<<num2<<" is: "<<HCF;
  return 0;
}
