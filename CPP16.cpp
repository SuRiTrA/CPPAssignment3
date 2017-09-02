#include <iostream>
using namespace std;

/*Program to check whether the triangle is equilateral, isosceles or scalene triangle.*/

int main()
{
  float s1,s2,s3;
  cout<<"Program to check whether the triangle is equilateral, isosceles or scalene triangle.";
  cout<<"\n \nEnter the three angles of the triangle: ";
  cin>>s1>>s2>>s3;
  if(((s1+s2)>s3)&&((s2+s3)>s1)&&((s3+s1)>s2))
  { 
    if(s1==s2 && s2==s3)
     cout<<"\n \nTHE TRIANGLE IS AN EQUILATERAL TRIANGLE";
    else if(s1==s2 || s1==s3 || s2==s3)
     cout<<"\n \nTHE TRIANGLE IS AN ISOSCELES TRIANGLE";
    else
     cout<<"\n \nTHE TRIANGLE IS A SCALENE TRIANGLE";
  }
  else
  {
    cout<<"\n \nTHE SUM OF ANY TWO SIDES OF A TRIANGLE IS GREATER THAN THE THIRD SIDE";
    cout<<"\nHence, this cannot be a triangle";
  }
  return 0;
}
