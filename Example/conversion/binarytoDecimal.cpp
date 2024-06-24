#include <iostream>
using namespace std;

int main()
{
	int num, rem, temp, dec = 0, b = 1;
	cout << "The Enter the binary number :" ;
	cin >> num;
	temp = num;
	while(num > 0)
	{
		rem = num % 10;
		dec = dec + rem * b;
		b = b * 2;
		num = num / 10;
	}

	cout << "The Decimal equivalent of " << temp << " is " << dec <<endl;
	return 0;
}

/*
 #include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string binary;
    cout << "Enter the binary number: ";
    cin >> binary;

    int decimal = 0;
    int power = binary.length() - 1; // Power of 2 corresponding to the leftmost bit

    for (char bit : binary) {
        if (bit == '1') {
            decimal += pow(2, power);
        }
        power--;
    }

    cout << "The decimal equivalent of " << binary << " is " << decimal << endl;
    return 0;
}

*  */
