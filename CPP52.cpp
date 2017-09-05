#include <iostream>
#include <cmath>
using namespace std;

/*PROGRAM TO PRINT ALL ARMSTRONG NUMBERS FROM 1 TO n*/

int main()
{
  int num, num1, rem, sum = 0,dig,tnum;
  cout<<"PROGRAM TO PRINT ALL ARMSTRONG NUMBERS FROM 1 TO n";
  cout << "\n \nEnter a number: "<<endl;
  cin >> num;
  int i=1;
  while(i<=num)
  {
  tnum=i;
  sum=0;
     while(tnum != 0)
     {
        dig = tnum % 10;
        sum += pow(dig,3);
        tnum /= 10;
     }
    if(sum == i)
    cout<<"\n"<<i<< " is an Armstrong number.";
    
    i++;
   }
  return 0;
}

