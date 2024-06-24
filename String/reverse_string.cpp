#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char *str)
{
	int length =  strlen(str);
	int mid = length / 2;
	for(int i = 0; i < mid; i++)
	{
		char temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
	}

}

int main()
{
	char test[] = {"Hello this is cpp Programmming ::!"};

	cout << "The printing the Given String::" << endl << test <<endl;
	reverseString(test);

	cout << "The printing the Reverse String ::" << endl << test <<endl;

	return 0;
}
