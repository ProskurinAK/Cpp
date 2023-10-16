#include <iostream>
using namespace std;

int main()
{
	//------------------------------------------------------------ Объявление и инициализация ------------------------------------------------------------

	int const SIZE = 10;

	//int testArray[SIZE];	// Массив ничем не заполниться
	//int testArray[SIZE]{};	// Массив заполнится нулями
	//int testArray[SIZE]{ 1, 3, 5, 7, 9, 0, 2, 4, 6, 8}; // Ручное заполнение массива
	//int testArray[]{ 1, 3, 5, 9 };	// Ручное заполнение массива без указания его размера
	
	// Заполнение массива случайными числами (не меняющимися от времени)
	/*int testArray[SIZE];
	for (int i = 0; i < size(testArray); i++)
	{
		testArray[i] = rand() % 10;
	}*/

	// Заполнение массива случайными числами
	int testArray[SIZE];
	srand(time(NULL));
	for (int i = 0; i < size(testArray); i++)
	{
		testArray[i] = rand() % 10;
	}

	//------------------------------------------------------------ Длина ------------------------------------------------------------
	
	// cout << sizeof(testArray) / sizeof(testArray[0]) << endl; // Способ 1

	// cout << std::size(testArray) << endl; // Способ 2

	//------------------------------------------------------------ Константный массив ------------------------------------------------------------

	// Если необходимо, чтобы нельзя было изменять значения элементов массива, то такой массив можно определить как константный с помощью ключевого слова const

	//const int testArray[]{ 1, 3, 5, 7 };
	//testArray[1] = 15; // Ошибка

	//------------------------------------------------------------ Перебор массива ------------------------------------------------------------

	// Перебор в цикле for
	/*for (int i = 0; i < size(testArray); i++)
	{
		cout << testArray[i] << endl;
	}*/

	// Перебор в стиле foreach
	for (int n : testArray)
	{
		cout << n << endl;
	}

	return 0;
}