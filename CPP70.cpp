#include <iostream>  
#include <string> 

/*Program to convert Hexadecimal to Octal number system.*/

using namespace std;
   
int main() 
{  
    int hexDigitToBinary[22] = {0, 1, 10, 11, 100, 101, 110, 111,
      1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111, 1010, 1011, 1100, 1101, 1110, 1111};     
    char hexDigits[22] = {'0', '1', '2', '3', '4', '5', '6', '7',
      '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'a', 'b', 'c', 'd', 'e', 'f'};
    char hexadecimal[30];
    cout<<"Program to convert Hexadecimal to Octal number system.";
    long long binary =0, octal;   
    int i = 0, j, index=0, multiple = 1, threeDig;  
   
    cout<<"\n \nEnter a hexadecimal number: ";
    cin>>hexadecimal;
     
    //converting hexadecimal to binary
    
    for(i=0; hexadecimal[i] != '\0'; i++)  
    {  
          for(j = 0; j < 22; j++)
          {
            if(hexDigits[j] == hexadecimal[i])
            {
            binary = binary*10000 + hexDigitToBinary[j];
            }
        }
    }  
   //Now Converting Binary Number to Octal Number   
     
    int num, dec=0,base=1,rem;
    num=binary;
    while (num > 0)
    {
        rem = num % 10;
        dec = dec + rem * base;
        base = base * 2;
        num = num / 10;
    }
    int oct = 0;
    i=1;
    while (dec!=0)
    {
        rem= dec%8;
        dec /= 8;
        oct += rem*i;
        i *= 10;
    }
    cout<<"\n \nThe required Octal digit is: "<<oct;
    return 0;  
    
}

       
