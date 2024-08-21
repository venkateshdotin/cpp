/*  HCF ( Highest Common Factor ) of two numbers is the largest positive integer that can divide both the numbers.
 *
 * */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number1, number2;
    cout << "Enter the Two Number to find the highest common factor :" << endl;
    cin >> number1 >> number2;
    int a = number1, b = number2;
    
    while(number1 != number2)
    {
        if(number1 > number2)
            number1 -= number2;
        else
            number2 -= number1;
    }
    
    cout << "The HCF of given two numbers "<< a << " " << b << " are " << number1 <<endl;
    
    return 0;    
}
