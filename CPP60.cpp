
#include <iostream>
#include <cmath>
using namespace std;
 
/*PROGRAM TO CONVERT BINARY TO OCTaL*/
int main()
{
    long bin, dec = 0, rem, num, base = 1;
    cout<<"PROGRAM TO CONVERT BINARY TO OCTaL NUMBER SYSTEM";
    cout << "\n \nEnter the binary number(1s and 0s) : ";
    cin >> num;
    bin = num;
    while (num > 0)
    {
        rem = num % 10;
        dec = dec + rem * base;
        base = base * 2;
        num = num / 10;
    }
    int oct = 0;
    int i = 1;

    while (dec!=0)
    {
        rem= dec%8;
        dec /= 8;
        oct += rem*i;
        i *= 10;
    }
    cout<<"\n \nThe equivalent octal number of "<<bin<<" is "<<oct;
    return 0;
}
