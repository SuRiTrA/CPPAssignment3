#include <iostream>
using namespace std;

/*PROGRAM TO PRINT FIBONACCII SERIES UPTO N TERMS*/
int main()
{
    int n, A = 0, B = 1, C = 0;
    cout<<"PROGRAM TO PRINT FIBONACCII SERIES UPTO N TERMS";
    cout << "\n \nEnter the number of terms: ";
    cin >> n;
    cout << "\n \nFibonacci Series: "<<endl<<endl;
    for (int i = 1; i <= n; ++i)
    {
        // Prints the first two terms.
        if(i == 1)
        {
            cout << " " << A;
            continue;
        }
        if(i == 2)
        {
            cout << B << " ";
            continue;
        }
        C = A + B;
        A = B;
        B = C;
        cout << B << " ";
    }
    return 0;
}
