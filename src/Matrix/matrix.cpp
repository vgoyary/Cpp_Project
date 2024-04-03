#include <iostream>
#include "matrix.h"
using namespace std;


void addition(int addmat[][10], int matrix1[][10], int matrix2[][10], int row1, int column1, int row2, int column2)
{
	int i, j, k;

	// Initializing elements of matrix addmat to 0.
	for (i = 0; i < row1; ++i)
	{
		for (j = 0; j < column2; ++j)
		{
			addmat[i][j] = 0;
		}
	}

	// Adding matrix firstMatrix and secondMatrix and storing in array addmat.
	for (i = 0; i < row1; ++i)
	{
		for (j = 0; j < column2; ++j)
		{
			for (k = 0; k < column1; ++k)
			{
				addmat[i][j] += matrix1[i][k] + matrix2[k][j];
			}
		}
	}
}


void subtraction(int submat[][10], int matrix1[][10], int matrix2[][10], int row1, int column1, int row2, int column2)
{
	int i, j, k;

	// Initializing elements of matrix submat to 0.
	for (i = 0; i < row1; ++i)
	{
		for (j = 0; j < column2; ++j)
		{
			submat[i][j] = 0;
		}
	}

	// substracting matrix Matrix1 and Matrix2 and storing in array submat.
	for (i = 0; i < row1; ++i)
	{
		for (j = 0; j < column2; ++j)
		{
			for (k = 0; k < column1; ++k)
			{
				submat[i][j] += matrix1[i][k] - matrix2[k][j];
			}
		}
	}
}


void multiplication(int matrix1[][10], int matrix2[][10], int mulmat[][10], int row1, int column1, int row2, int column2)
{
	int i, j, k;

	// Initializing elements of matrix mult to 0.
	for (i = 0; i < row1; ++i)
	{
		for (j = 0; j < column2; ++j)
		{
			mulmat[i][j] = 0;
		}
	}

	// Multiplying matrix firstMatrix and secondMatrix and storing in array mult.
	for (i = 0; i < row1; ++i)
	{
		for (j = 0; j < column2; ++j)
		{
			for (k = 0; k < column1; ++k)
			{
				mulmat[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}
}

void display(int mulmat[][10], int addmat[][10], int submat[][10], int row1, int column2)
{
	int i, j;
	cout << "Multiplied Matrix:" << endl;
	for (i = 0; i < row1; ++i)
	{
		for (j = 0; j < column2; ++j)
		{
			cout << mulmat[i][j] << " ";
			if (j == column2 - 1)
				cout << endl << endl;
		}
	}
}