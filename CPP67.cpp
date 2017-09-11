#include <iostream>
#include <cmath>
using namespace std;

/*PROGRAM TO CONVERT DECIMAL TO OCTAL*/

int main()
{
    int n;
    cout<<"PROGRAM TO CONVERT DECIMAL TO OCTAL";
    cout << "\n \nEnter a decimal number: ";
    cin >> n;
    int oct = 0;
    int rem, i = 1;

    while (n!=0)
    {
        rem= n%8;
        n /= 8;
        oct += rem*i;
        i *= 10;
    }
    cout<<"\n \nThe equivalent octal number of "<<dec<<" is "<<oct;
    return 0;
}
