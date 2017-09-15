#include<iostream>
    #include<string.h>
    #include<cmath>
    using namespace std;
     
    int hex_to_dec(char hex[])
    {
    	int i,len, dec=0;
    	for(len=0; hex[len]!='\0'; len++);
    	for(i=0; hex[i]!='\0'; i++,len--)
    	{
    		if(hex[i]>='0' && hex[i]<='9')
    		{
    			dec= dec + (hex[i]-'0')*pow(16,len-1);
    		}
    		if(hex[i]>='A' && hex[i]<='F')
    		{
    			dec = dec + (hex[i]-55)*pow(16,len-1);
    		}
    		if(hex[i]>='a' && hex[i]<='f')
    		{
    			dec = dec + (hex[i]-87)*pow(16,len-1);
    		}
    	} 
    
    	return dec;
    }
    main()
    {
     
    	char hex[20],c;
    	int n;
    	cout<<"\nEnter Hexadecimal Number : ";
    	cin>>hex;
    	cout<<"\nEquivalent decimal Value = "<<hex_to_dec(hex);
    	return 0;
    }
