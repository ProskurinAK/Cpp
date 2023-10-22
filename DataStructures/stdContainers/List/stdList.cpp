#include <iostream>
#include <list>
using namespace std;

int main()
{
	srand(time(NULL));

	// Объявление и инициализация списка
	// 
	//list<int> testList;	// Объявление пустого списка
	//list<int> testList(5);	// Объявления списка из 5 элементов заполненых значением по умолчанию
	//list<int> testList(5, 2);	// Объявления списка из 5 элементов заполненых значением 2
	list<int> testList = { 1, 3, 5, 7, 9 };	// Объявление списка заполненного вручную

	// Вывод списка

	/*for (int i : testList)
	{
		cout << i << endl;
	}*/

	/*for (auto i = testList.begin(); i != testList.end(); i++)
	{
		cout << *i << endl;
	}*/

	// Размер списка

	//cout << testList.size() << endl;

	// Изменить размер списка

	//testList.resize(3);
	//testList.resize(10, 7);

	// Изменение элементов списка

	//testList.assign(4, 9);

	/*list<int> testList2 = { 2, 2, 8 };
	testList.swap(testList2);*/

	// Добавление элементов

	// Добавление в конец и начало
	/*testList.push_back(10);
	testList.push_front(11);
	testList.emplace_back(22);
	testList.emplace_front(33);*/

	// Добавление элемента по второму индексу
	/*auto iter = testList.begin();
	testList.insert(++iter, 66);*/

	// Удаление элементов

	// Удаление первого и последнего элемента
	/*testList.pop_front();
	testList.pop_back();*/

	// удаление второго элемента
	/*auto iter = testList.begin();
	testList.erase(++iter);*/


	for (int i : testList)
	{
		cout << i << endl;
	}

	return 0;
}