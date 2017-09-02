#include <iostream>
using namespace std;

/*Program to input any alphabet and check whether it is vowel or consonant.*/

int main()
{
  char ch='0';
  cout<<"Program to input any alphabet and check whether it is vowel or consonant.";
  cout<<"\n \nEnter an alphabet";
  cin>>ch;
  if(((ch>=65)&&(ch<=90))||((ch>=97)&&(ch<=122)))
  {
  if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    cout<<"\n \nThe alphabet is a vowel";
  else 
    cout<<"\n \nThe alphabet is a consonant";
  }
  else
  {
  cout<<"\n \nTHIS IS NOT AN ALPHABET ! ! ! ! !";
  }
  return 0;
}
