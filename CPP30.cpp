#include <iostream>
using namespace std;

/*Program to print multiplication table of any number*/
int main()
{
  int i=1,n=0;
  cout<<"Program to print multiplication table of any number";
  cout<<"\n \nEnter the number: ";
  cin>>n;
  cout<<"\n \nThe multiplication table goes like: ";
  for(;i<=10;i++)
  {
    cout<<"\n"<<n<<" * "<<i<<" = "<<(n*i);
  }
  return 0;
}
