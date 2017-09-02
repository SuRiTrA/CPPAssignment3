#include <iostream>
using namespace std;

/*Program to determine whether the number is even or odd.*/

int main()
{
  int a=0;
  cout<<"Program to determine whether the number is even or odd..";
  cout<<"\n \nEnter the number ";
  cin>>a;
  if((a%2==0))
    cout<<"\n \nThe number is even ";
  else
    cout<<"\n \nThe number is odd";
  return 0;
}
