/*
 * Fibonacci Series in C++
 *
 * F(n) = F(n-1) + F(n-2)
 * Always, F(0) = 0, F(1) = 1
 * */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0, b = 1, c, num;
    cout << "Enter the number of terms for the Fibonacci series: " << endl;
    cin >> num;
    cout << "The Fibonacci series is as follows:" << endl;

    if (num >= 1) cout << a << " ";
    if (num >= 2) cout << b << " ";

    for (int i = 3; i <= num; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
    }
    cout << endl;

    return 0;
}

