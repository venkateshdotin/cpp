/*
 * Armstrong Number in given range in c++
 *
 *      Any number that satisfies the following format –
 *      abcd… = an + bn + cn + dn + …
 *      Where n is the order(length/digits in number)
 *      That is for any number num if the sum of individual digits is raised to the power of order if the result is equal to the number itself then it is an Armstrong number.
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

void isArmstrong(int start, int end)
{
    cout << "The Armstrong numbers in the given range are: " << endl;
    for(int i = start; i <= end; i++)
    {
        int sum = 0, temp, digit, rem;
        temp = i;  // Use i instead of start to calculate Armstrong number
        digit = digitlength(i);  // Calculate number of digits of i

        while(temp > 0)
        {
            rem = temp % 10;
            sum = sum + pow(rem, digit);
            temp /= 10;
        }
        if(sum == i)
        {
            cout << sum << " ";
        }
    }
    cout << endl;
}

int main()
{
    int start, end;
    cout << "Enter the start and end range to check for Armstrong numbers: " << endl;
    cin >> start >> end;

    isArmstrong(start, end);

    return 0;
}

