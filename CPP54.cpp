#include <iostream>
using namespace std;

/*Program to print Perfect numbers from 1 to n.*/
int main()
{
  int num;
  cout<<"\nProgram to print Perfect numbers from 1 to n";
  cout << "\n \nEnter a number: ";
  cin >> num;
  cout<<"\n \nPerfect numbers from 1 to "<<num<<" are: ";
  int j=1;
  while(j<=num)
  {
  int i=1,sum=0;
  while(i<j)
  {
    if(j%i==0)
      sum=sum+i;
    i++;
  }
  if(sum==j)
         cout <<"\n"<< j  <<  " is a perfect number";
 j++;
 }
  return 0;
}
