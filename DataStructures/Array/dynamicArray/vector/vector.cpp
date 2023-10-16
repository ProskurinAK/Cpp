#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));
	// Одномерный динамический массив

	int size = 7;
	int* testArray = new int[size]();

	for (int i = 0; i < size; i++)
	{
		testArray[i] = rand() % 10;
	}

	for (int i = 0; i < size; i++)
	{
		cout << testArray[i] << endl;
	}

	cout << "----------" << endl;
	cout << testArray << endl;
	cout << *testArray << endl;
	cout << &testArray << endl;

	// Освобождение памяти
	delete[] testArray;
	testArray = nullptr;

	cout << "----------" << endl;
	cout << testArray << endl;
	cout << *testArray << endl;
	cout << &testArray << endl;

	return 0;
}