#include <iostream>
using namespace std;

/*Program to input basic salary of an employee and calculate its Gross salary*/

int main()
{
  float bas=0,gross=0,hra=0,da=0;
  cout<<"Program to input basic salary of an employee and calculate its Gross salary";
  cout<<"\n \nEnter the marks in Physics(out of 100): ";
  cin>>bas;
  if(bas<=10000)
  {
   hra=0.2;
   da=0.8;
   gross=bas+hra*bas+da*bas;
   cout<<"\n \nYour HRA is "<<hra*100<<"%, DA is "<<da*100<<"% and GROSS SALARY is: "<<gross;
  }
  else if(bas<=20000 && bas>10000)
  {
   hra=0.25;
   da=0.9;
   gross=bas+hra*bas+da*bas;
   cout<<"\n \nYour HRA is "<<hra*100<<"%, DA is "<<da*100<<"% and GROSS SALARY is: "<<gross;
  }
  else
  {
   hra=0.3;
   da=0.95;
   gross=bas+hra*bas+da*bas;
   cout<<"\n \nYour HRA is "<<hra*100<<"%, DA is "<<da*100<<"% and GROSS SALARY is: "<<gross;
  }
  return 0;
}
