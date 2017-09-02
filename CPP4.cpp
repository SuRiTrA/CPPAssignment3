#include <iostream>
using namespace std;

/*Program to determine whether the number is divisible by 5 and 11 or not.*/

int main()
{
  int a=0;
  cout<<"Program to determine whether the number is divisible by 5 and 11 or not.";
  cout<<"\n \nEnter the number ";
  cin>>a;
  if((a%5==0)&&(a%11==0))
    cout<<"\n \nThe number is divisible by 5 and 11";
  else
    cout<<"\n \nThe number is not divisible by 5 and 11";
  return 0;
}
