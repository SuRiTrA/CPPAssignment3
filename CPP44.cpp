#include <iostream>
using namespace std;

/*Program to enter any number print its factorial.*/
int main()
{
  long int num=0;
  long int fact=1;
  cout<<"\nProgram to enter any number and print its factorial.";
  cout<<"\n \nENTER THE NUMBER: ";
  cin>>num;
  for(int i=1;i<=num;i++)
  {
     fact=fact*i;
  }
  cout<<"\n \nThe factorial of "<<num<<"! is: "<<fact;
  return 0;
}
