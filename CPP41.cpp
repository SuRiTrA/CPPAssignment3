#include <iostream>
using namespace std;

/*PROGRAM TO PRINT ALL THE ASCII CHARACTERS */
int main()
{
  int i;
  char ch=0;
  cout<<"\n \nPROGRAM TO PRINT ALL THE ASCII CHARACTERS";
  cout<<"\nThe ASCII characters are as follows: ";
  for(i=0;i<256;i++)
  {
   cout<<"\n"<<i<<"\t"<<ch;
   ch++;
  }
  return 0;
}
