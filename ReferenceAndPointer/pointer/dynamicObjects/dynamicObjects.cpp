#include <iostream>
using namespace std;

int main()
{
	// Динамические объекты

	// Создание и инициализация нового динамического объекта
	//int* pValue = new int;
	//int* pValue = new int();
	int* pValue = new int(7);

	/*cout << pValue << endl;
	cout << *pValue << endl;*/

	// Освобождение памяти

	delete pValue;
	pValue = nullptr;

	/*cout << pValue << endl;
	cout << *pValue << endl;*/

	// Ситуация когда два указателя указывают на один и тот же объект

	int* ptr1 = new int(7);
	int* ptr2 = ptr1;

	cout << ptr1 << endl;
	cout << &ptr1 << endl;
	cout << ptr2 << endl;
	cout << *ptr2 << endl;
	cout << "----------" << endl;

	delete ptr1;
	ptr1 = nullptr;

	cout << ptr1 << endl;
	cout << &ptr1 << endl;
	cout << ptr2 << endl;
	cout << *ptr2 << endl;

	return 0;
}