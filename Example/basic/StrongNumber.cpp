/*  Strong Number in C++
 *  
 *  Strong Numbers is a number in which the sum of the factorial of individual digits of the numbers is equal to the number itself.
 *  For Example: 145 
 *   145 = 1! x 4! x 5! =  145
 * 
 **/

#include <bits/stdc++.h>

using namespace std;

int factorial(int num)
{
    int fact = 1;
    for(int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

bool isStrong(int number)
{
    int digit, temp, sum = 0;
    temp =  number;
    while (temp != 0)
    {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    return sum == number;
}


int main()
{
    int number;
    cout << "Enter the Number to check Strong Number or Not." << endl;
    cin >> number;

    if(isStrong(number))
    {
        cout <<"The Given number is Strong Number " << number << endl;
    }
    else
    {
	cout << "The Given number is not a Strong Number " << number <<endl;
    }

    return 0;
}
