#include<iostream>
using namespace std;
int main()
{
   	int num;
   	 bool count = true;
   	cout<<"Enter any number: ";
   	cin>>num;

   for(int i = 2; i <= num / 2; i++) 
	{
    		  if(num % i == 0) 
		{
       		  count= false;
        	  break;
      		}
   	}
   		if (count==true)
     			 cout<<num<<" is a prime number";
  			 else
   			 cout<<num<<" is not a prime number";
   		return 0;
}

