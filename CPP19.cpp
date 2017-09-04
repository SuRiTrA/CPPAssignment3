#include <iostream>
using namespace std;

/*Program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer and Calculate percentage and grade*/

int main()
{
  float p=0,c=0,m=0,b=0,cp=0;
  float per=0;
  char gr='a';
  cout<<"Program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer and Calculate percentage and grade";
  cout<<"\n \nEnter the marks in Physics(out of 100): ";
  cin>>p;
  cout<<"\n \nEnter the marks in Chemistry(out of 100): ";
  cin>>c;
  cout<<"\n \nEnter the marks in Mathematics(out of 100): ";
  cin>>m;
  cout<<"\n \nEnter the marks in Biology(out of 100): ";
  cin>>b;
  cout<<"\n \nEnter the marks in Computer(out of 100): ";
  cin>>cp;
  per=(p+c+m+b+cp)/5;
  if(per>=90)
  {
    gr='A';
    cout<<"\n \nYou have scored "<<per<<" and "<<gr<<"GRADE";
  }
  else if(per>=80 && per<90)
  {
    gr='B';
    cout<<"\n \nYou have scored "<<per<<"% and "<<gr<<" GRADE";
  }
  else if(per>=70 && per<80)
  {
    gr='C';
    cout<<"\n \nYou have scored "<<per<<"% and "<<gr<<" GRADE";
  }
  else if(per>=60 && per<70)
  {
    gr='D';
    cout<<"\n \nYou have scored "<<per<<"% and "<<gr<<" GRADE";
  }
  else if(per>=40 && per<60)
  {
    gr='E';
    cout<<"\n \nYou have scored "<<per<<"% and "<<gr<<" GRADE";
  }
  else
  {
    gr='F';
    cout<<"\n \nYou have scored "<<per<<"% and "<<gr<<" GRADE";
  }
  return 0;
}
