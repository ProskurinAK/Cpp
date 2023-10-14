#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 5;
	int testArray[SIZE] = { 3, 4, 5, 6, 7 };

	// Имя массива является указателем на его первый элемент
	/*cout << testArray << endl;
	cout << *testArray << endl;*/

	// Прибавляя к адресу первого элемента некоторое число, мы можем получить определенный элемент массива
	/*cout << *(testArray + 1) << endl;
	cout << *(testArray + 2) << endl;*/

	// Пробежимся по всем элементам в цикле
	/*for (int i = 0; i < SIZE; i++)
	{
		cout << *(testArray + i) << endl;
	}*/

	// Но при этом имя массива это не стандартный указатель, и мы не можем изменить его адрес
	//testArray++;	// Ошибка
	//int tmp = 7;
	//testArray = &tmp;	// Ошибка

	// Указатель на массив char

	/*char symbols[] = {"GoGoGo"};
	char* symbolsPtr = symbols;

	cout << symbols << endl;
	cout << *symbols << endl;
	cout << &symbols << endl;
	cout << "-------------" << endl;
	cout << symbolsPtr << endl;
	cout << *symbolsPtr << endl;
	cout << (void*)symbolsPtr << endl;
	cout << &symbolsPtr << endl;*/

	// Массив указателей

	int a = 22;
	int b = 33;
	int c = 44;
	const int* ptrArray[] = { &a, &b, &c };

	cout << ptrArray << endl;
	cout << *ptrArray << endl;
	cout << **ptrArray << endl;

	cout << **(ptrArray + 1) << endl;

	return 0;
}