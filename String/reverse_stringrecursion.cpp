#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char *str, int start, int end)
{
	if(start >= end)
		return;
	char temp =  str[start];
	str[start] = str[end];
	str[end] = temp;

	reverseString(str, start + 1, end - 1);
}

int main()
{
        char test[] = {"Hello this is cpp Programmming ::!"};
	int length =  strlen(test);
        cout << "The printing the Given String::" << endl << test <<endl;
        reverseString(test, 0 , length-1);

        cout << "The printing the Reverse String ::" << endl << test <<endl;

        return 0;
}

