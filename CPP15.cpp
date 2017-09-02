#include <iostream>
using namespace std;

/*Program to input sides of a triangle and check whether triangle is valid or not.*/

int main()
{
  float s1,s2,s3;
  cout<<"Program to input sides of a triangle and check whether triangle is valid or not.";
  cout<<"\n \nEnter the three angles of the triangle: ";
  cin>>s1>>s2>>s3;
  if(((s1+s2)>s3)&&((s2+s3)>s1)&&((s3+s1)>s2))
  {
    cout<<"\n \nWe can form a triangle with the specified sides";
  }
  else
  {
    cout<<"\n \nTHE SUM OF ANY TWO SIDES OF A TRIANGLE IS GREATER THAN THE THIRD SIDE";
    cout<<"\nHence, this cannot be a triangle";
  }
  return 0;
}
