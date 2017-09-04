#include <iostream>
#include <cmath>
using namespace std;

/*Program to find frequency of each digit in a given integer*/
int main()
{
  int num=0;
  int a[10],dig=0;
  for(int j=0;j<10;j++)
    a[j]=0;
  cout<<"PROGRAM TO FIND THE FREQUENCY OF EACH DIGIT OF ANY NUMBER";
  cout<<"\n \nEnter the number(INTEGER): ";
  cin>>num;
  int num1=abs(num);
  while(num1>0)
  { 
   dig=num1%10;
   switch(dig)
   {
     case 0:a[0]++;
            break;
     case 1:a[1]++;
            break;
     case 2:a[2]++;
            break;
     case 3:a[3]++;
            break;
     case 4:a[4]++;
            break;
     case 5:a[5]++;
            break;
     case 6:a[6]++;
            break;
     case 7:a[7]++;
            break;
     case 8:a[8]++;
            break;
     case 9:a[9]++;
            break;
    }
    num1=num1/10;
  }
  cout<<"\n \nThe frequency of the digits are as follows: "<<endl;
  for(int i=0;i<10;i++)
  {
   if(a[i]!=0)
   {
     cout<<i<<" has a frequency = "<<a[i]<<"\n";
   }
  }
 return 0;
}
