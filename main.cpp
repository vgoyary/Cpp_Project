// Matrix_p.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
#include "matrix.h"
using namespace std;


int matrix1[10][10], matrix2[10][10], row1, column1, row2, column2, i, j, k;
char operation;
int choice = -1;

int main()
{
	cout << "Enter the number of rows and column for matrix 1:";
	cin >> row1 >> column1;

	cout << "Enter the number of rows and column for matrix 2:";
	cin >> row2 >> column2;

	while (matrix1 != matrix2)
	{
		cout << "matrix size not equal, re enter";
		cout << "Enter the number of rows and column for matrix 1:";
		cin >> row1 >> column1;

		cout << "Enter the number of rows and column for matrix 2:";
		cin >> row2 >> column2;
	}

	cout << "enter the elements for first matrix:" << endl;
	for (i = 0;i < row1;++i) {
		for (j = 0;j < column1;++j) {
			cout << "enter element " << i + 1 << j + 1 << ":";
			cin >> matrix1[i][j];
		}
	}
	cout << "enter the elements for second matrix:" << endl;
	for (i = 0;i < row2;++i) {
		for (j = 0;j < column2;++j) {
			cout << "enter element " << i + 1 << j + 1 << ":";
			cin >> matrix2[i][j];
		}
	}

	cout << "Enter operation for the matrix:\n 1.Multiplication \n 2.Addition \n 3.Substraction";
	cin >> choice;

	multiplication(mulmat[][10], matrix1[][10], matrix2[][10], row1, column1, row2, column2);
	addition(addmat[][10], matrix1[][10], matrix2[][10], row1, column1, row2, column2);
	subtraction(submat[][10], matrix1[][10], matrix2[][10], row1, column1, row2, column2);
	display(mulmat[][10], addmat[][10], submat[][10], row1, column2);


	return 0;
}

