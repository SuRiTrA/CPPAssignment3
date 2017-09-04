#include <iostream>
using namespace std;

/*Program to calculate profit or loss*/

int main()
{
  float CP=0, SP=0, pro=0, loss=0;
  cout<<"PROGRAM TO CALCULATE PROFIT OR LOSS";
  cout<<"\n \nEnter the Cost price: Rs.";
  cin>>CP;
  cout<<"\n Enter the Selling price: Rs.";
  cin>>SP;
  if(CP>SP)
  {
    loss=CP-SP;
    cout<<"\n \nThere has been a loss of: Rs."<<loss;
  }
  else if(CP<SP)
  {
    pro=SP-CP;
    cout<<"\n \nThere has been a profit of: Rs."<<pro;
  }
  else
  {
    cout<<"\n \nNO PROFIT OR LOSS INCURRED";
  }
  return 0;
}
  
