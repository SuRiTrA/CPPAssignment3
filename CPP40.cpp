#include <iostream>
using namespace std;

/*PROGRAM TO ACCEPT A NUMBER AND CONVERT IT IN WORDS*/

int main()
{
  cout<<"PROGRAM TO ACCEPT A NUMBER AND CONVERT IT IN WORDS \n \n";
  char a[10][10]={"ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
  char b[10][10]={"ELEVEN","TWELVE","THIRTEEN","FOURTEEN","FIFTEEN","SIXTEEN","SEVENTEEN","EIGHTEEN","NINTEEN"};
  char c[10][10]={"TEN","TWENTY","THIRTY","FOURTY","FIFTY","SIXTY","SEVENTY","EIGHTY","NINTY"};
  int no,t,num;
  cout<<"\n \nPROGRAM CAN PRINT NUMBERS FROM 1 TO 99999 \n \n";
  cout<<"Enter any positive number(max 5 digits).\n";
  cin>>no;
  if(no<99999 && no>0)
  {  
     if(no>=10000 && no<100000)
     {
       
       num=no/1000;
       if(num>=10 && num<20)
       {
         t=num%10;
         cout<<" "<<b[t-1];
       }
       if(num>19 && num<100)
       {
         t=num/10;
         num=num%10;
         cout<<" "<<c[t-1];
       }
       if(num<10)
       {
         cout<<" "<<a[num-1];
       }
       no=no%10000;
      if(no>=20000 && no<10000)
       if(no>1000 && no<=9999)
       {
         t=no/1000;
         no=no%1000;
         cout<< a[t-1];
       }
     }
     no=no%1000;
     cout<<" THOUSAND";
     if(no>100)
     {
       t=no/100;
       no=no%100;
       cout<<" "<<a[t-1]<<" HUNDRED AND";
     } 
     if(no>=10 && no<20)
     {
       t=no/10;
       cout<<" "<<b[t-1];
     }
     if(no>19 && no<=100)
     {
       t=no/10;
       no=no%10;
       cout<<" "<<c[t-1];
     }
     if(no<10)
     {
       cout<<" "<<a[no-1];
     }
  }
  return 0;
}
