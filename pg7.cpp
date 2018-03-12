#include<iostream>
using namespace std;
int main()
{	
	int a,rev=0,num;       
	cout<<"enter no be reversed:";
	cin>>num;
	while(num !=0)
	{
		a=num%10;
		rev=rev*10+a;
		num=num/10;
	}
		cout<<"Reverse ="<<rev;
}
 	
