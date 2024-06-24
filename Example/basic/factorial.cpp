/* 
 * Factorial of a Number in C++.
 * 	Factorial of any number is the product of it and all the positive numbers below it for example factorial of 5 is 120.
 * 	Factorial of n (n!) = 1 * 2 * 3 * 4....n
 *
 * */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number, fact = 1;
    cout << "Enter the number to find the factorial: " << endl;
    cin >> number;

    if (number < 0)
    {
        cout << "Factorial of a negative number is not possible." << endl;
        return -1;
    }

    for (int i = 1; i <= number; i++)
    {
        fact *= i;
    }

    cout << "The factorial of the given number is " << fact << endl;
    return 0;
}

