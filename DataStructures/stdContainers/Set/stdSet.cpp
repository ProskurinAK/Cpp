#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main()
{
	srand(time(NULL));

	// объявление и инициализация
	set<int> testSet = { 9, 1, 4, 3, 5 , 3, 1, 7};

	// вывод множества
	/*for (int elem : testSet)
	{
		cout << elem << endl;
	}*/

	// размер множества
	//cout << testSet.size() << endl;

	// добавление элемента
	//testSet.insert(10);

	// удаление элемента
	//testSet.erase(4);

	// проверка наличия элемента
	//cout << testSet.count(0) << endl;	// функция вернёт 0
	//cout << testSet.count(3) << endl;	// функция вернёт 1

	// неупорядоченное множество
	/*unordered_set<int> testUnorderedSet = { 7, 1, 4, 7, 8, 2 };

	testUnorderedSet.insert(3);
	testUnorderedSet.insert(10);

	for (int elem : testUnorderedSet)
	{
		cout << elem << "\t";
	}*/

	// упорядоченное мульти множество
	/*multiset<int> testMultiset = { 7, 1, 4, 7, 8, 2 };

	testMultiset.insert(3);
	testMultiset.insert(10);

	for (int elem : testMultiset)
	{
		cout << elem << "\t";
	}*/

	// неупорядоченное мульти множество
	/*unordered_multiset<int> testUnorderedMultiset = { 7, 1, 4, 7, 8, 2 };

	testUnorderedMultiset.insert(3);
	testUnorderedMultiset.insert(10);

	for (int elem : testUnorderedMultiset)
	{
		cout << elem << "\t";
	}*/

	return 0;
}