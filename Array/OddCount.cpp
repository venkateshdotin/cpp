#include <iostream>

int findOddOccurrence(int arr[], int size) {
	int result = 0;
	for (int i = 0; i < size; i++) {
        // XOR all elements in the array
		result ^= arr[i];
	}
	return result;
}

int main() {
	int arr[] = {1,1,1,1,1,1,1,1};// {2,2,2,2,2,7,9,9};
	int size = sizeof(arr) / sizeof(arr[0]);
	int oddOccurrence = findOddOccurrence(arr, size);
	std::cout << "Number occurring odd number of times: " << oddOccurrence << std::endl;

	return 0;
}

