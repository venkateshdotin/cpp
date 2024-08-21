/* 
 * 
 * 
 * 
 * 
 * */

#include <bits/stdc++.h>

using namespace std;


int main()
{
    int number1, number2, lcm;
    cout << "Enter the Two Number to Check LCM Number :" <<endl;
    cin >> number1 >> number2;
    
    int max = (number1 > number2) ? number1 : number2;
    
    for(int i = max; i <= number1 * number2; i++)
    {
        if(i % number1 == 0 && i % number2 == 0)
        {
            lcm = i;
            break;
        }
    }
    
    cout << "LCM of two Numbers " << number1 <<" " << number2 << " is :: " << lcm << endl;
    
    return 0; 
}
