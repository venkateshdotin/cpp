#include <iostream>
using namespace std;

void reverseString(char* str) {
	// Find the length of the string
	int length = 0;
	while (str[length] != '\0') 
	{
		length++;
	}

    // Initialize indices for swapping
	int start = 0;
	int end = length - 1;

    // Swap characters until start index is less than end index
	while (start < end) 
	{
        // Swap characters at start and end indices
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;

        // Move indices towards the center
	start++;
	end--;
	}
}

int main() {
	char str[] = "Hello, World!";
	cout << "Original string: " << str << std::endl;

    // Reverse the string
	reverseString(str);
	cout << "Reversed string: " << str << std::endl;
	
	return 0;
}

