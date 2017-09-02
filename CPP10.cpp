#include <iostream>
using namespace std;

/*Program to check whether a character is uppercase or lowercase alphabet. */

int main()
{
  char ch='0';
  cout<<"Program to check whether a character is uppercase or lowercase alphabet..";
  cout<<"\n \nEnter the character ";
  cin>>ch;
  if((ch>=65)&&(ch<=90))
    cout<<"\n \nThe character is an UPPERCASE alphabet";
  else if((ch>=97)&&(ch<=122))
    cout<<"\n \nThe character is a LOWERCASE alphabet";
  else
    cout<<"\n \nIT IS NOT AN ALPHABET ! ! ! !";
  return 0;
}
