#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

// контейнер set реализует собой бинарное дерево. Бинарное дерево это упорядоченная структура данных с неповторяющимися элементами
// контейнер multiset тоже реализует собой бинарное дерево, но в отличие от set элементы у него могут повторяться
// контейнеры unordered_set и unordered_multiset являются неупорядоченными так как реализуют не бинарное дерево, а хэш-таблицу

int main()
{
	srand(time(NULL));

	// ---------------------------------------- set ----------------------------------------

	//set<int> testSet = { 9, 1, 4, 3, 5, 3, 1, 7 };

	// размер сета
	//cout << testSet.size() << endl;

	// функция ищет заданный элемент и возврощает итератор на него
	//cout << *testSet.find(7) << endl;

	// функция ищет заданный элемент и возврощает 0 или 1 в зависимости от результата поиска
	//cout << testSet.count(7) << endl;

	// добавление элемента в set
	//testSet.insert(11);

	// удаление элемента из множества
	//testSet.erase(5);

	// Вывод информации

	/*for (int elem : testSet)
	{
		cout << elem << endl;
	}*/

	// ---------------------------------------- multiset ----------------------------------------

	//multiset<int> testMultiset = { 9, 1, 4, 3, 5, 3, 1, 7 };

	// функция возврощает итератор на первый элемент(если таких несколько) найденный в контейнере
	//cout << *testMultiset.lower_bound(3) << endl;

	// функция возврощает итератор на следующий элемент после последнего(если таких несколько) того что мы передали в функцию
	//cout << *testMultiset.upper_bound(3) << endl;

	/*for (int elem : testMultiset)
	{
		cout << elem << endl;
	}*/

	// ---------------------------------------- unordered_set ----------------------------------------

	/*unordered_set<int> testUnorderedSet = { 9, 1, 4, 3, 5, 3, 1, 7 };
	
	testUnorderedSet.insert(2);
	testUnorderedSet.insert(10);
	testUnorderedSet.insert(8);
	testUnorderedSet.insert(6);

	for (int elem : testUnorderedSet)
	{
		cout << elem << endl;
	}*/

	// ---------------------------------------- unordered_multiset ----------------------------------------

	/*unordered_multiset<int> testUnorderedMultiset = { 9, 1, 4, 3, 5, 3, 1, 7 };

	testUnorderedMultiset.insert(2);
	testUnorderedMultiset.insert(10);

	for (int elem : testUnorderedMultiset)
	{
		cout << elem << endl;
	}*/

	return 0;
}