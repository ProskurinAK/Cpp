#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));
	// Двухмерный динамический массив

	int rowSize = 3;
	int colSize = 5;

	int** testArray = new int* [rowSize];
	for (int i = 0; i < rowSize; i++)
	{
		testArray[i] = new int[colSize]();
	}

	for (int i = 0; i < rowSize; i++)
	{
		for (int j = 0; j < colSize; j++)
		{
			cout << testArray[i][j] << "\t";
		}
		cout << endl;
	}

	// Освобождение памяти
	for (int i = 0; i < rowSize; i++)
	{
		delete[] testArray[i];
	}
	delete[] testArray;

	return 0;
}