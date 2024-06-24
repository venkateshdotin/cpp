#include <iostream>
using namespace std;

int main() {
	int num, rem;
	cout << "Enter the Decimal number: ";
	cin >> num;
	cout << "The Binary number is: ";
	
	//Handle the number is 0
	if(num == 0)
	{
		cout << "0 " <<endl;
		return 0;
	}

	int arr[32]; // Array to store binary number, assuming 32 bit number
	int i= 0;

	//covert decimal to binary
	while(num > 0)
	{
		rem = num % 2;
		arr[i++] = rem;
		num /= 2;
	}

	//Printing the binary number in reverse order
	for(int j = i - 1; j >= 0; j--)
	{
		cout << arr[j];
	}
	cout <<endl;

	
	return 0;
}

