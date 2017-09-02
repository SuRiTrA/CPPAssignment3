#include <iostream>
using namespace std;

/*Program to input week number and print week day.*/

int main()
{
  int n=0;
  cout<<"Program to input week number and print week day.";
  cout<<"\n \nEnter the day number in the week(1-7)";
  cin>>n;
  if(n==2)
    cout<<"\n \nThe day is MONDAY";
  else if(n==3)
    cout<<"\n \nThe day is TUESDAY";
  else if(n==4)
    cout<<"\n \nThe day is WEDNESDAY";
  else if(n==5)
    cout<<"\n \nThe day is THURSDAY";
  else if(n==6)
    cout<<"\n \nThe day is FRIDAY";
  else if(n==7)
    cout<<"\n \nThe day is SATURDAY";
  else if(n==1)
    cout<<"\n \nThe day is SUNDAY";
  else
    cout<<"\n \nTHIS IS NOT A VALID DAY NUMBER ! ! ! !";
  return 0;
}
