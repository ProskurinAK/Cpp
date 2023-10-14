#include <iostream>
using namespace std;

int main()
{
	// Инкремент и декремент указателя на int
	//int value = 10;
	//int* pValue = &value;

	//cout << "Address = " << pValue << "\tValue = " <<  *pValue << endl;
	//pValue++;	// Увеличение адреса на размер типа указателя(int - 4 байта)
	//cout << "Address = " << pValue << "\tValue = " << *pValue << endl;
	//pValue--;	// Уменьшение адреса на размер типа указателя(int - 4 байта)
	//cout << "Address = " << pValue << "\tValue = " << *pValue << endl;

	// Увеличение и уменьшение указателя
	//double value = 10;
	//double* pValue = &value;

	//short value2 = 7;
	//short* pValue2 = &value2;

	//cout << "Address = " << pValue << "\tValue = " << *pValue << endl;
	//pValue += 2;	// double - 8 байт (8 * 2 = 16)
	//cout << "Address = " << pValue << "\tValue = " << *pValue << endl;

	//cout << "Address = " << pValue2 << "\tValue = " << *pValue2 << endl;
	//pValue2 -= 3;	// short - 2 байта (2 * 3 = 6)
	//cout << "Address = " << pValue2 << "\tValue = " << *pValue2 << endl;

	// Некоторые особенности операций с указателями
	int value = 7;
	int* pValue = &value;

	cout << "address - " << pValue << "\tvalue - " << *pValue << endl;

	// В зависимости от того префиксный или постфиксный инкремент а также где стоит операция разыменования получается разный результат
	//int tmp = *pValue++;
	//int tmp = (*pValue)++;
	//int tmp = ++*pValue;
	int tmp = *++pValue;

	cout << "tmp value - " << tmp << endl;
	cout << "address - " << pValue << "\tvalue - " << *pValue << endl;

	return 0;
}