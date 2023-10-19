#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
	srand(time(NULL));
	
	// Объявление и инициализация контейнеров
	vector<int> testVector = { 1, 3, 5, 7, 9 };
	list<int> testList = { 2, 4, 6, 8, 0 };

	// Объявление и инициализация итераторов
	//vector<int>::iterator iter = testVector.begin();	// Длинная запись
	auto vecIter = testVector.begin();
	auto listIter = testList.begin();

	// Вывод типа итераторов
	/*cout << typeid(vecIter).name() << endl;
	cout << typeid(listIter).name() << endl;*/

	// Некоторые операции с итераторами
	//cout << *vecIter << endl;
	//cout << *listIter << endl;
	//cout << "---------" << endl;
	//cout << *++vecIter << endl;
	//cout << *listIter++ << endl;	// При постфиксном инкременте будет возвращено значение до операции инкремента
	//cout << "---------" << endl;
	//cout << *(vecIter + 2) << endl;

	// Получение и изменение элемента контейнера
	/*cout << testVector[0] << endl;
	*vecIter = 22;
	cout << testVector[0] << endl;*/

	// Перебор контейнера
	/*for (auto iter = testVector.begin(); iter < testVector.end(); iter++)
	{
		cout << *iter << endl;
	}*/

	/*auto iter = testList.begin();
	while (iter != testList.end())
	{
		cout << *iter << endl;
		iter++;
	}*/

	// Константные итераторы
	// Такой итератор позволяет считывать элементы, но не изменять их
	/*const vector<int> constVec = { 1, 2, 3, 4, 5 };
	auto tmpIter = constVec.begin();	// если указывает на константный контейнер

	cout << typeid(tmpIter).name() << endl;*/

	//auto tmpIter2 = testVector.cbegin();	// если инициализируется у не константного контейнера, специальным методом (cbegin, cend)
	//cout << typeid(tmpIter2).name() << endl;
	////*tmpIter2 = 45;	// Ошибка

	// Реверсивные итераторы
	/*for (auto iter = testVector.rbegin(); iter < testVector.rend(); iter++)
	{
		cout << *iter << endl;
	}*/

	// Константный реверсивный итератор
	//for (auto iter = testVector.crbegin(); iter < testVector.crend(); iter++)
	//{
	//	cout << *iter << endl;
	//	//*iter = 123;	// Ошибка
	//}

	return 0;
}