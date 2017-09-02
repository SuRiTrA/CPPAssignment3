#include <iostream>
using namespace std;

/*Program to count total number of notes in given amount.*/

int main()
{
  int AMT=0;
  int M2000,M500,M200,M100,M50,M20,M10,M5,M2,M1;
  cout<<"Program to to count total number of notes in given amount.";
  cout<<"\n \nCONSIDERING THE AVAILABLE DENOMINATIONS ARE 1,2,5,10,20,50,100,200,500,2000";
  cout<<"\n \nEnter the amount";
  cin>>AMT;
  M2000=AMT/2000;
  AMT%=2000;
  M500=AMT/500;
  AMT%=500;
  M200=AMT/200;
  AMT%=200;
  M100=AMT/100;
  AMT%=100;
  M50=AMT/50;
  AMT%=50;
  M20=AMT/20;
  AMT%=20;
  M10=AMT/10;
  AMT%=10;
  M5=AMT/5;
  AMT%=5;
  M2=AMT/2;
  AMT%=2;
  M1=AMT/1;
  cout<<"\n \nThe denominations are: ";
  cout<<"\nRs 1 = "<<M1;
  cout<<"\nRs 2 = "<<M2;
  cout<<"\nRs 5 = "<<M5;
  cout<<"\nRs 10 = "<<M10;
  cout<<"\nRs 20 = "<<M20;
  cout<<"\nRs 50 = "<<M50;
  cout<<"\nRs 100 = "<<M100;
  cout<<"\nRs 200 = "<<M200;
  cout<<"\nRs 500 = "<<M500;
  cout<<"\nRs 2000 = "<<M2000;
  return 0;
}

  
  
