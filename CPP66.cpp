#include <iostream>
#include <cmath>
using namespace std;

/*PROGRAM TO CONVERT DECIMAL TO BINARY*/

int main()
{
    int n;
    cout<<"PROGRAM TO CONVERT DECIMAL TO BINARY";
    cout << "\n \nEnter a decimal number: ";
    cin >> n;
    int binary = 0;
    int rem, i = 1;

    while (n!=0)
    {
        rem= n%2;
        n /= 2;
        binary += rem*i;
        i *= 10;
    }
    cout<<"\n \nThe equivalent binary number of "<<dec<<" is "<<binary;
    return 0;
}
