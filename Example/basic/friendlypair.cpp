/* Friendly Pair or not
 * Two numbers num1 & num2 are friendly pairs if the following holds true -
 * (Sum of divisors of num1)/num1= (Sum of divisors of num2)/num2 
 * 
 * */

#include <bits/stdc++.h>

usinag namespace std;

int getDivisorsSum(int num)
{
    int sum = 0;
    for(int i = 1; i < num; i++)
    {
        sum += i;
    }
    return sum;
}


int main()
{
    int number1, number2, sum1, sum2;
    cout << "Enter the two number to check friendly pair" << endl;
    cin >> number1 >>number2;
    sum1 = getDivisorsSum(number1);
    sum2 = getDivisorsSum(number2);

    if(sum1 / number1 == sum2 / number2)
    {
        cout << number1 << " & " << number2 << " are friendly pairs";
    }
    else
    {
        cout << number1 << " & " << number2 << " are not afriendly pairs";
    }

    return 0;    
}
