/* 
 * GCD (Greatest Common Divisor) of two numbers is the largest number that divides both numbers.
 * Example : The GCD of 45 and 30 will be :
 *   Factors of 45 are 3 X 3 X 5
 *   Factors of 30 are 2 X 3 X 5
 *  Common factors of 45 and 30 are : 3 X 5 , So the required GCD will be 15
 * 
 * */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number1, number2;
    cout << "Enter the Two Number to find the Greatest common factor :" << endl;
    cin >> number1 >> number2;
    int a = number1, b = number2;
    int gcd;

    for(int i = 1; i <= a || i <= b; i++)
    {
        if(a % i == 0 && b % i ==0)
        {
            gcd = i;
        }
    }
    cout << "The GCD of given two numbers "<< number1 << " " << number2 << " are " << gcd <<endl;

    return 0;
}

