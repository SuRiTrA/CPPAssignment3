#include <iostream>
using namespace std;

/*Program to print sum of all numbers from 1 to n*/
int main()
{
  int i=1,sum=0,n=0;
  cout<<"Program to print sum of all numbers from 1 to n";
  cout<<"\n \nEnter the limiting number: ";
  cin>>n;
  while(i<=n)
  {
    sum+=i;
    i++;
  }
  cout<<"\n \nThe sum of all numbers from 1 to 100 are: "<<sum;
  return 0;
}
