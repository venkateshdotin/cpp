/*
 *  An Automorphic number is a special number, whose’s square ends with the same digits as the number itself
 * 
 * */


#include <bits/stdc++.h>

using namespace std;

bool isAutomorphic(int num)
{
    int square = num * num;
    
    while(num != 0 )
    {
        if(num % 10 != square % 10)
	{
	    return 0;
	}
	num /= 10;
	square /= 10;
    }
    return 1;
    
}


int main()
{
    int number, sq;
    cout << "Enter the Number to check Automorphic number or Not" <<endl;
    cin >> number;
    
    sq = number * number;

    if(isAutomorphic(number))
    {
        cout <<"The Given is Automorphic number " << number << " and the sqare number " << sq << endl;
    }
    else
    {
        cout <<"The Given is not a Automorphic number " << number << " and the sqare number " << sq << endl;
    }
    return 0;
}
