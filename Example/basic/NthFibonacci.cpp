/* Finding the Nth Term of the Fibonacci Series in C++
 *
 * 
 * */

#include <bits/stdc++.h>
using namespace std;

int fibonacciRecursion(int num)
{
    if(num <= 1)
    {
        return num;
    }
    return fibonacciRecursion(num - 1) + fibonacciRecursion(num - 2);
}

int fibonacciIterative(int num)
{
    int a = 0, b = 1, c;
    if(num == 0)
        return a;
    for(int i = 2; i <= num; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    int number, result;
    cout << "Enter the number to find the Nth Fibonacci number: " << endl;
    cin >> number;

    result = fibonacciRecursion(number);
    cout << "The Nth Fibonacci number using recursion: " << result << endl;

    result = fibonacciIterative(number);
    cout << "The Nth Fibonacci number using iteration: " << result << endl;

    return 0;
}

