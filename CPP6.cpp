#include <iostream>
using namespace std;

/*Program to determine whether a year is leap year or not.*/

int main()
{
  int year=0;
  cout<<"Program to determine whether a year is leap year or not.";
  cout<<"\n \nEnter the year ";
  cin>>year;
  if(((year%4==0) && (year%100!=0)) || (year%400==0))
    cout<<"\n \nThis is a leap year ";
  else
    cout<<"\n \nThis is not a leap year";
  return 0;
}
