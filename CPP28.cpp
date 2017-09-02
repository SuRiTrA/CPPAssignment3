#include <iostream>
using namespace std;

/*Program to print sum of all even numbers from 1 to n*/
int main()
{
  int i=1,sum=0,n=0;
  cout<<"Program to print sum of all even numbers from 1 to n";
  cout<<"\n \nEnter the limiting value of n: ";
  cin>>n;
  while(i<=n)
  {
    if(i%2==0)
    sum+=i;
    i++;
  }
  cout<<"\n \nThe sum of all even numbers from 1 to "<<n<<" is: "<<sum;
  return 0;
}
