/* Palindrome Program in C++
 *
 * 	A number is a Palindrome number if the reverse of the number and the numbers itself are equal i.e. if the number and its reverse are the same 
 * 	then a number is a palindrome number.
 * 
 * */

#include <iostream>
using namespace std;

int main()
{
	int number, rem, temp, rev = 0; 
	cout << "Enter the Number to check if it is a Palindrome: " << endl;
	cin >> number;
	
	temp = number;
	while(temp > 0)
    	{
		rem = temp % 10;
		rev = rev * 10 + rem;
		temp /= 10;
	}
	if(number == rev)
	{
		cout << "The given number " << number << " is a Palindrome number." << endl; 
	}
	else
	{
		cout << "The given number " << number << " is not a Palindrome number." << endl;
	}

	
	return 0; 
}


