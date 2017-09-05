#include<iostream>
using namespace std;

/*PROGRAM TO CHECK WHETHER A NUMBER IS STRONG NUMBER*/
int main()
{
  int num,i,f,r,sum=0,temp;
  cout<<"PROGRAM TO CHECK WHETHER A NUMBER IS STRONG NUMBER";
  cout << "\n \nEnter a number: ";
  cin >> num;
  temp=num;
  while(num>0)
  {
      i=1,f=1;
      r=num%10;
      while(i<=r)
      {
        f=f*i;
        i++;
      }
      sum=sum+f;
      num=num/10;
  }
  if(sum==temp)
     cout << temp << " is a strong number";
  else
     cout << temp << " is not a strong number";
  return 0;
}
