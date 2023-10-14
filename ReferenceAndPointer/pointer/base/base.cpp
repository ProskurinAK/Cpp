#include <iostream>
using namespace std;

int main()
{
	// Отличие ссылки от указателя
	/*int value = 7;

	int& refValue = value;

	cout << value << endl;
	cout << &value << endl;
	cout << refValue << endl;
	cout << &refValue << endl;

	int number = 228;

	int* pNumber = &number;

	cout << number << endl;
	cout << &number << endl;
	cout << pNumber << endl;
	cout << *pNumber << endl;
	cout << &pNumber << endl;*/

	// Присвоение указателю другого указателя
	/*int a = 10;
	int b = 7;

	int* pa = &a;
	int* pb = &b;

	cout << *pa << endl;
	pa = pb;
	cout << *pa << endl;
	*pa = 15;
	cout << b << endl;*/

	//Ссылка на указатели

	/*int value1 = 3;
	int value2 = 7;

	int* ptr = &value1;
	int*& refPtr = ptr;

	cout << ptr << endl;
	cout << &ptr << endl;
	cout << *ptr << endl;

	refPtr = &value2;

	cout << ptr << endl;
	cout << &ptr << endl;
	cout << *ptr << endl;*/

	return 0;
}