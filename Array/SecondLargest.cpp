#include <iostream>
using namespace std;

void arraysorting(int arr[], int size)
{
        int temp = 0, i = 0, j = 0;
        for(i = 0; i < size; i++)
        {
                for(j = i+1; j < size; j++)
                {
                        if(arr[i] > arr[j])
                        {
                                temp = arr[i];
                                arr[i] = arr[j];
                                arr[j] = temp;
                        }
                }
        }
        cout << "The elements in the array After sorting: ";
        for (i = 0; i < size; i++) {
                cout << arr[i] << " ";
        }
        cout << endl;

}

int main() {
        int n;
        cout << "Enter the size of the array: ";
        cin >> n;

        int arr[100];
        cout << "Enter the elements of the array: ";
        for (int i = 0; i < n; i++) {
                cin >> arr[i];
        }
        cout << endl;
        cout << "The elements in the array before sorting: ";
        for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
        }
        cout << endl;

        arraysorting(arr, n);

	cout << "Second Largest Elements in the Array is " << arr[n-2] <<endl;

        return 0;
}

