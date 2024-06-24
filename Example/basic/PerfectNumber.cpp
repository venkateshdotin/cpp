/* Perfect Number 
 *
 *   A perfect number is a number in which the sum of the proper positive divisors of the number is equal to the number itself.
 *   
 *   For Example: 28
 *   Divisors : 1 + 2 + 4 + 7 + 14 = 28
 *
 * */


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number, sum = 0;
    cout << "Enter the number to check if it is a Perfect Number: " << endl;
    cin >> number;

    for (int i = 1; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }

    if (sum == number)
    {
        cout << "The given number " << number << " is a Perfect Number." << endl;
    }
    else
    {
        cout << "The given number " << number << " is not a Perfect Number." << endl;
    }

    return 0;
}



