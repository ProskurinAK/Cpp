#include <iostream>
#include <vector>
using namespace std;

int main()
{
	srand(time(NULL));
	
	// Объявление и инициализация вектора

	//vector<int> testVector;	// Объявление пустого вектора
	//vector<int> testVector(7);	// Объявления вектора из 7 элементов заполненых значением по умолчанию
	//vector<int> testVector(7, 3);	// Объявления вектора из 7 элементов заполненых значением 3
	vector<int> testVector = { 1, 3, 5, 7, 9 };	// Объявление вектора заполненного вручную

	// Перебор вектора

	/*for (int i = 0; i < testVector.size(); i++)
	{
		cout << testVector[i] << endl;
	}*/

	for (int i : testVector)
	{
		cout << i << endl;
	}
	cout << "------------" << endl;

	// Изменение длинны вектора
	/*testVector.resize(10);
	for (int i : testVector)
	{
		cout << i << endl;
	}*/

	// Вставка числа по индексу
	/*auto iter = testVector.begin();
	testVector.insert(iter += 2, 13);

	for (int i : testVector)
	{
		cout << i << endl;
	}*/

	return 0;
}