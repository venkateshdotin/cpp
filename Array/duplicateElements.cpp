/* This method should work for sorted Array only */

#include <iostream>
#include <algorithm>
using namespace std;

int removeduplicate(int arr[], int size)
{
	if(size == 0 || size ==1)
		return size;

	// Sort the array
	sort(arr, arr + size);
	int j = 0;
	for(int i = 0; i < size -1; i++)
	{
		if(arr[i] != arr[i+1])
		{
			arr[j++] = arr[i];
		}
	}
	arr[j++] = arr[size -1];

	return j;
}

int main()
{
	int arr[] = {1, 7, 3, 4, 5, 9, 4, 5, 1};
	int size = sizeof(arr) / sizeof(arr[0]);

	cout << "Array Elements before removing duplicate:" <<endl;
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;

	int n = removeduplicate(arr, size);

	cout << "Array Elements After removing duplicate:" <<endl;
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
	
	return 0;

}
