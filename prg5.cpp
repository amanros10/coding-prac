#include<iostream>
using namespace std;
int main()
{       
	int num,n,r=0,digit;
	cout << "Enter a positive number: ";
        cin >> num;

     	n = num;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

     cout << " The reverse of the number is: " << rev << endl;

     if (n == rev)
         cout << " The no is a palindrome";
     else
         cout << " The no is not palindrome";

    return 0;
}
