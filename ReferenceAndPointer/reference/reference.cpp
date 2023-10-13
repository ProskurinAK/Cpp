#include <iostream>
using namespace std;

int main()
{
	// Определение ссылки и изменение посредством неё значения на которое она указывает
	/*int value = 10;
	int& refValue = value;
	refValue = 123;
	cout << value << endl;*/

	// Константная ссылка
	/*const int value = 10;
	const int& refValue = value;	// константное значение можно записывать только в константную ссылку*/
	//refValue = 222;	// константную ссылку изменять нельзя

	// Пример использования ссылки в цикле при переборе массива
	int numbers[]{ 1, 3, 5, 7, 9 };

	// если убрать ссылку то элемент массива не изменится, т.к. он будет копироваться в переменную n
	for (int& n : numbers)
	{
		n = n * n;
	}

	for (int n : numbers)
	{
		cout << n << endl;
	}

	return 0;
}