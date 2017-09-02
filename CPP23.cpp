#include <iostream>
using namespace std;

/*Program to print all natural numbers in reverse (from n to 1)-using while loop*/
int main()
{
  int n=0;
  cout<<"Program to print all natural numbers in reverse (from n to 1): ";
  cout<<"\n \nEnter the limit of the loop: ";
  cin>>n; 
  int i=n;
  cout<<"\nThe numbers from "<<n<<" to 1 are: ";
  while(i>=1)
  {
    cout<<"\n"<<i;
    --i;
  }
  return 0;
}
