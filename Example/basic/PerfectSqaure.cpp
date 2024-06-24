/*
 * Perfect Square
 *
 * 	A perfect square is a number that can be expressed as the product of an integer by itself or as the second exponent of an integer. 
 *
 * 	For example, 25 is a perfect square because it is the product of integer 5 by itself, 5 × 5 = 25.
 * */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number, flag = 0;
    cout << "The Enter the number to check perfect " << endl;
    cin >>  number;
    
    for(int i = 1; i <= number; i++)
    {
        if(number == i*i)
	{
	    flag = 1;
	    break;
	}
    }
    if(flag)
    {
        cout << "The Given number "<< number << " is a perfect Number. " << endl;
    }
    else
    {
        cout << "The Given Number "<< number << " is not a perfect Number. " << endl;
    }

    return 0;

}
