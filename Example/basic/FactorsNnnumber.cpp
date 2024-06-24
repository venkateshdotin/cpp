/* Factors of a Number
 *
 * In which we start dividing the number with 1 up to the number itself and the numbers which perfectly divides the number are the factors.
 *
 * */

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int number;
	cout <<"Enter the number to Find the Factors of a Number: " <<endl;
	cin >> number;

	cout << "The Factors of a Number are followed:" << endl;

	for(int i = 1; i <= number; i++)
	{
		if(number % i == 0)
		{
			cout << i << " ";
		}
	}
	cout << endl;

	return 0;
}
