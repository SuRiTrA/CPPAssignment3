#include <iostream>
#include<string.h>
using namespace std;

/*PROGRAM TO SWAP FIRST AND LAST DIGITS OF A NUMBER*/


int main() 
{
    char s[10];
    int m;
    cout<<"PROGRAM TO SWAP FIRST AND LAST DIGITS OF A NUMBER";
    cout<<"\n \nEnter the number - ";
    cin>>s;
    m=strlen(s);
    char z;
    z=s[0];    
    s[0]=s[m-1];
    s[m-1]=z;
    cout<<"\nThe new number with swapped digits is - ";
    for(int i=0;s[i]!=s[m];i++)
    cout<<s[i]-48;
    return 0;
}
