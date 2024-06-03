#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the size of the array: ";
	cin >> n;
	
	int arr[100];
	cout << "Enter the elements of the array: ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "The elements in the array: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	
	int largest = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > largest) {
			largest = arr[i];
		}
	}
	cout << "The largest element in the array is: " << largest << endl;
	
	return 0;
}

