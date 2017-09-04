#include <iostream>
using namespace std;

/*Program to input electricity unit charges and calculate total electricity bill.*/

int main()
{
  float unit, total;
  cout<<"Program to input electricity unit charges and calculate total electricity bill";
  cout<<"\n \nEnter the ELECTRICITY UNIT consumed: ";
  cin>>unit;
  if(unit<=50)
  {
    total=unit*0.5;
    cout<<"\n \nThe total Electricity charges incurred is: "<<total;
  }
  else if(unit>50 && unit<=100)
  {
    total=50*0.5+(unit-50)*0.75;
    cout<<"\n \nThe total Electricity charges incurred is: "<<total;
  }
  else if(unit>100 && unit<=200)
  {
    total=50*0.5+100*0.75+(unit-150)*1.2;
    cout<<"\n \nThe total Electricity charges incurred is: "<<total;
  }
  else
  {
    total=50*0.5+100*0.75+100*1.2+(unit-250)*1.5;
    cout<<"\n \nThe total Electricity charges incurred is: "<<total;
  }
  total=total+total*0.2; //Surcharge
  cout<<"\nIncluding the Surcharge the total amounts to: "<<total;
  return 0;
}
