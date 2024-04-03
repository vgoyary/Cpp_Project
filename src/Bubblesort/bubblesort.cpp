
#include <iostream>
#include "bubblesort.h"
using namespace std;


int main()
{
	int size;
	cout << "Enter size of the array: ";
	cin >> size;

	int* arr = new int[size];

	cout << "Enter the elements:" << endl;
	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}

	sort(arr, size);

	cout << "Sorted Array:";
	for (int i = 0;i < size; ++i)
	{
		cout << arr[i] << " ";
	}

	delete[] arr;

	return 0;
}