#include <iostream>
using namespace std;

/*Program to find LCM of two numbers.*/
int main()
{
  long int num1, num2, lim, lcm=1;
  cout<<"\nProgram to find LCM of two numbers.";
  cout<<"\n \nENTER THE NUMBERS: ";
  cin>>num1>>num2;
  if(num1>num2)
  lim=num1;
  else if(num2>num1)
  lim=num2;
  else
  lim=num1;
  while(lim)
  {
   if(lim%num1==0 && lim%num2==0)
   {
     lcm=lim;
     cout<<"\n \nThe LCM of "<<num1<<" and "<<num2<<" is: "<<lcm;
     break;
   }
   lim++;
  }
  return 0;
}
