#include<iostream>
using namespace std;
 
/*PROGRAM TO CONVERT OCTAL TO DECIMAL NUMBER SYSTEM*/
int main()
{
    long int oct, dec = 0, rem, num, base = 1;
    cout<<"PROGRAM TO CONVERT OCTAL TO DECIMAL NUMBER SYSTEM";
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
    cout << "\n \nThe decimal equivalent of " << oct << " : " << dec << endl;
    return 0;
}
