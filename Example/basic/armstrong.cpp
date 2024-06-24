/*
 * Armstrong Number
 * 	Any number that satisfies the following format –
 * 	abcd… = an + bn + cn + dn + …
 * 	Where n is the order(length/digits in number)
 * 	That is for any number num if the sum of individual digits is raised to the power of order if the result is equal to the number itself then it is an Armstrong number.
 * */

#include <bits/stdc++.h>
using namespace std;

int digitlength(int number)
{
    int temp = number;
    int count = 0;
    while(temp > 0)
    {
        count++;
        temp /= 10;
    }
    return count;
}

bool isArmstrong(int num, int len)
{
    int temp = num;
    int sum = 0, rem = 0;
    while(temp > 0)
    {
        rem = temp % 10;
        sum = sum + pow(rem, len);
        temp /= 10;
    }
    return sum == num;
}

int main()
{
    int number, len;
    cout << "Enter the number: " << endl;
    cin >> number;

    len = digitlength(number);

    cout << "The number of digits in the given number: " << len << endl;

    if(isArmstrong(number, len))
    {
        cout << "The given number " << number << " is an Armstrong Number." << endl;
    }
    else
    {
        cout << "The given number " << number << " is not an Armstrong Number." << endl;
    }

    return 0;
}

