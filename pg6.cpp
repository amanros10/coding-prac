#include<iostream>
using namespace std;
int main()
{       
	int num1,num2,num3;
	cout<<"enter 2 nos:\n";
	cin >> num1 >> num2;
	cout<<"no before swap:\n";
	cout<< num1 << num2;
	
	num3 = num1;
	num1 = num2;
	num2 = num3;
	
	cout<<"\nafter swap nos are:\n";
	cout << num1 << num2;
	return 0;
}
