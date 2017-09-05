#include <iostream>
using namespace std;

/*Program to check whether a number is Perfect number or not.*/
int main()
{
  int num;
  cout<<"\nProgram to check whether a number is Perfect number or not.";
  cout << "\n \nEnter a number: ";
  cin >> num;
  int i=1,sum=0;
  while(i<num)
  {
    if(num%i==0)
      sum=sum+i;
    i++;
  }
  if(sum==num)
         cout << num  <<  " is a perfect number";
  else
         cout << num << " is not a perfect number";
  return 0;
}
