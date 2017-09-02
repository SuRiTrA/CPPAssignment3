#include <iostream>
using namespace std;

/*Program to input angles of a triangle and check whether triangle is valid or not.*/

int main()
{
  float a1,a2,a3,sum;
  cout<<"Program to input angles of a triangle and check whether triangle is valid or not.";
  cout<<"\n \nEnter the three angles of the triangle: ";
  cin>>a1>>a2>>a3;
  sum=a1+a2+a3;
  if(sum==180)
  {
    cout<<"\n \nWe can form a triangle with the specified angles";
  }
  else
  {
    cout<<"\n \nSUM OF ANGLES OF TRIANGLE IS 180 \nBUT IN THIS CASE IT IS "<<sum;
    cout<<"\nThis cannot be a triangle";
  }
  return 0;
}
