#include <iostream>
#include <deque>
using namespace std;

int main()
{
	srand(time(NULL));

	// объявление и инициализация
	deque<int> testDeque = { 1, 3, 5, 7 };

	// получение элементов
	/*cout << testDeque.front() << endl;
	cout << testDeque[1] << endl;
	cout << testDeque.at(2) << endl;
	cout << testDeque.back() << endl;*/

	// добавление элементов
	/*testDeque.emplace_back(2);
	testDeque.emplace_front(4);
	auto iter = testDeque.begin() + 2;
	testDeque.emplace(iter, 8);*/

	// удаление элементов
	/*testDeque.pop_back();
	testDeque.pop_front();
	auto iter = testDeque.begin();
	testDeque.erase(iter);*/

	// перебор дека
	for (int elem : testDeque)
	{
		cout << elem << "\t";
	}
	cout << endl;

	/*for (int i = 0; i < testDeque.size(); i++)
	{
		cout << testDeque[i] << endl;
	}*/

	return 0;
}