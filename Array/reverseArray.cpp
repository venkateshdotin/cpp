#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
	int rev[size];
	for(int i = 0; i < size; i++)
	{
		rev[i] = arr[size - i -1];
	}

	cout << "The Elements in the Array After Reversed:" <<endl;
        for(int i = 0; i < size; i++)
        {
                cout << rev[i] <<" " ;
        }
	cout << endl;

}

int main()
{
	int n;
	int arr[100];
	cout << "Enter the size of the Array :";
	cin >> n;
	cout << "Enter the Elements in the Array:" <<endl;
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	cout << "The Elements in the Array:" <<endl;
        for(int i = 0; i < n; i++)
        {
		cout << arr[i] << " ";
        }
	cout << endl;

	reverseArray(arr, n);

	return 0;
}
