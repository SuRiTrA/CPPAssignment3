#include <iostream>
#include <cmath>
using namespace std;

/*PROGRAM TO CHECK ARMSTRONG NUMBER*/

int main()
{
  int num, num1, rem, sum = 0,dig;
  cout<<"PROGRAM TO CHECK ARMSTRONG NUMBER";
  cout << "\n \nEnter a number: ";
  cin >> num;
  num1 = num;
  while(num1 != 0)
  {
      dig = num1 % 10;
      sum += pow(dig,3);
      num1 /= 10;
  }

  if(sum == num)
    cout <<num<< " is an Armstrong number.";
  else
    cout <<num<< " is not an Armstrong number.";

  return 0;
}
