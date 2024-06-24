#include <iostream>
using namespace std;

int main() {
        int num;
        cout << "Enter the Decimal number: ";
        cin >> num;

        //Handle the number is 0
        if(num == 0)
        {
                cout << "0 " <<endl;
                return 0;
        }

        int arr[32]; // Array to store binary number
        int i= 0;
	int temp = num;

        //covert decimal to Octal
        while(num != 0)
        {
                arr[i++] = num % 8;
                num /= 8;
        }

	cout << "The Decimal to Octal Number Equivalent of " << temp << " is :";

	for(int j = i - 1; j >= 0; j--)
	{
		cout << arr[j];
	}
	cout << endl;
	return 0;
}

