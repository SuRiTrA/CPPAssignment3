#include <iostream>
using namespace std;

/*PROGRAM TO FIND ONE'S COMPLEMENT OF A BINARY NUMBER*/

int main()
{
        int len,i;
        char bin[17],ones[17];
        cout<<"PROGRAM TO FIND ONE'S COMPLEMENT OF A BINARY NUMBER";
        cout<<"\n \n \nENTER BINARY NUMBER (maximum 16 bits): ";
        cin>>bin;
        for(len=0;bin[len]!='\0';len++);
        for(i=0;i<len;i++)
        {
                if(bin[i]=='0')
                    ones[i]='1';
                else
                    ones[i]='0';
                
        }
 
        cout<<"\nONE'S COMPLEMENT: "<<ones; 
        return 0;
}
