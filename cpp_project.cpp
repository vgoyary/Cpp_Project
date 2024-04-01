// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


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