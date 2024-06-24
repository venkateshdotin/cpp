/* Prime Factor of the Given number 
 *  
 *  What are Prime Factors?
 *  
 *  Prime factors are factors of a number that are, themselves, prime numbers. There are many methods to find the prime factors of a number, but one of the most 
 *  common is to use a prime factor tree.
 *
 * */

#include <bits/stdc++.h>

using namespace std;


void isprimeFactor(int num)
{
    int n = num;
    cout << "The Prime factors of the given number is :" << endl;
    while( n % 2 == 0)
    {
        cout << 2 << " ";
	n /= 2;
    }
    for(int i = 3; i <= sqrt(n); i = i + 2)
    {
        while(n % i == 0)
	{
	    cout << i << " ";
	    n /= i;
	}
    }
    if(n > 2)
    {
        cout << n << " ";
    } 
   
    cout << endl;
}

int main()
{
    int number;
    cout << "Enter the Number to find prime Factor :" << endl;
    cin >> number;
    
    isprimeFactor(number);

    return 0;
}
