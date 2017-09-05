#include <iostream>
using namespace std;

/*Program to enter any number and print its prime factors..*/
int main()
{
  int num=0,count=0;
  cout<<"\nProgram to enter any number and print its prime factors.";
  cout<<"\nENTER THE NUMBER: ";
  cin>>num;
  cout<<"\n \nThe prime factors are: ";
  for(int j=2;j<=num;j++)
  {
   if(num%j==0)
   { count=0;  
     for(int i=2;i<j;i++)
     {
       if(j%i==0)
       count++;
     }
     if(count==0)  
     cout<<"\n"<<j;
    }
  }
  return 0;
}
