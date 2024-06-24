/* A Harshad number is a positive integer that is divisible by the sum of the digits of the integer. It is also called the Niven number.
 *	For Example : 153
 *	Sum of digits = 1 + 5 + 3 = 9
 *	153is divisible by 9 so 153 is a Harshad Number.
 *
 * */

#include <bits/stdc++.h>

using namespace std;

bool isHarshad(int num)
{
	int sum = 0;
	int temp = num;
	while(temp != 0)
	{
	    sum += temp % 10;
	    temp /= 10;
	}
	return num % sum == 0;
}


int main()
{
	int number;
	cout << "Enter the Number to check Harshad Number or Not" <<endl;
	cin >> number;

	if(isHarshad(number))
	{
	    cout << "The Given is a Harshad Number :" << number <<endl;
	}
	else
	{
	    cout << "The Given number is not a Harshad Number :" << number <<endl;
	}

	return 0;
}
