#include <bits/stdc++.h>
using namespace std;

int octalToDecimal(int num)
{
    int rem, sum = 0, base = 1;

    while (num > 0)
    {
        rem = num % 10;
        sum += rem * base;
        base *= 8;
        num /= 10;
    }
    return sum;
}

int main()
{
    long long number;
    cout << "Enter the Octal Number to convert into Decimal Number" << endl;
    cin >> number;
    cout << "The Size of Number :" << sizeof(number) << endl;

    int result = octalToDecimal(number);
    cout << "The Octal to Decimal Number is :" << result << endl;

    return 0;
}

