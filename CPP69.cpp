
#include<iostream>
using namespace std;

/* C++ Program - Hexadecimal to Binary Conversion */

int main()
{
	long int i=0;
	char binnum[100], hexdec[100];
  cout<<"C++ Program - Hexadecimal to Binary Conversion";
	cout<<"\n \nEnter any hexadecimal number : ";
	cin>>hexdec;
	cout<<"\n \nThe Equivalent Binary value is : ";
	while(hexdec[i])
	{
		switch(hexdec[i])
		{
			case '0' : cout<<"0000";
				break;
			case '1' : cout<<"0001";
				break;
			case '2' : cout<<"0010";
				break;
			case '3' : cout<<"0011";
				break;
			case '4' : cout<<"0100";
				break;
			case '5' : cout<<"0101";
				break;
			case '6' : cout<<"0110";
				break;
			case '7' : cout<<"0111";
				break;
			case '8' : cout<<"1000";
				break;
			case '9' : cout<<"1001";
				break;
			case 'A' : cout<<"1010";
				break;
			case 'B' : cout<<"1011";
				break;
			case 'C' : cout<<"1100";
				break;
			case 'D' : cout<<"1101";
				break;
			case 'E' : cout<<"1110";
				break;
			case 'F' : cout<<"1111";
				break;
			case 'a' : cout<<"1010";
				break;
			case 'b' : cout<<"1011";
				break;
			case 'c' : cout<<"1100";
				break;
			case 'd' : cout<<"1101";
				break;
			case 'e' : cout<<"1110";
				break;
			case 'f' : cout<<"1111";
				break;
			default : cout<<"\nInvalid hexadecimal digit "<<hexdec[i];
		}
		i++;
	}
	return 0;
}
