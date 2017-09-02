#include <iostream>
using namespace std;

/*Program to print numbers from 1 to n*/
int main()
{
  int n=0;
  int i=1;
  cout<<"Program to print numbers from 1 to n";
  cout<<"\n \nEnter the limit of the loop: ";
  cin>>n; 
  cout<<"\nThe numbers from 1 to "<<n<<" are: ";
  while(i<=n)
  {
    cout<<"\n"<<i;
    ++i;
  }
  return 0;
}
