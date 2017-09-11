program to convert Octal to Binary number system.

#include<iostream>
using namespace std;
 
/*Program to convert Octal to Binary number system.*/
int main()
{
    long int oct, dec = 0, rem, num, base = 1,n;
    cout<<"Program to convert Octal to Binary number system.";
    cout << "\n \nEnter the octal number(combination of digits 0 to 7) : ";
    cin >> num;
    oct = num;
    while (num > 0)
    {
        rem = num % 10;
        dec = dec + rem * base;
        base = base * 8;
        num = num / 10;
    }
    
   //Converting decimal to binary now
    int binary = 0;
    rem=0;
    int i = 1,n=dec;
    while (n!=0)
    {
        rem= n%2;
        n /= 2;
        binary += rem*i;
        i *= 10;
    }
    cout<<"\n \nThe equivalent binary number of "<<oct<<" is "<<binary;
    return 0;
}
    
    
    
