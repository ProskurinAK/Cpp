#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

// контейнер map реализует собой бинарное дерево, а это значит, что этот контейнер упорядочен и его элементы не повторяются, но в отличие от множества(set) он хранит пары ключ - значение(pair)
// если мы хотим в качестве ключа использовать наш(пользовательский) класс, то нам необходимо в нём перегрузить оператор сравнения, чтобы map мог корректно построить дерево
// контейнер multimap так же упорядочен, но в отличие от map ключи в нём могут повторяться
// контейнеры unordered_map и unordered_multimap реализуют собой хэш-таблицу, а это значит что ключи в них неупорядочены(элементы записываются в соответствии с их порядком добавления в коде)

int main()
{
	srand(time(NULL));

	// ---------------------------------------- pair ----------------------------------------

	//pair<int, string> p(1, "phone");
	//cout << p.first << endl;	// вывод ключа
	//cout << p.second << endl;	// вывод значения

	// ---------------------------------------- map ----------------------------------------

	// создание словаря
	map<int, string> testMap = {make_pair(1, "notebook"), make_pair(2, "PC")};

	// добавление элементов
	// поскольку map это упорядоченный контейнер без повторяющихся элементов, то все элементы будут отсортированы по ключу и если ключ будет повторяться, то в словарь запишется элемент
	// с первым упоминанием этого ключа

	testMap.insert(pair<int, string>(4, "phone"));
	testMap.insert(make_pair(3, "ipad"));
	testMap.emplace(5, "watch");
	//testMap.emplace(3, "gps");	// этот элемент в словарь не попадёт, т.к. ключ повторяется

	// поиск элемента
	
	// функция ищет заданный элемент и возврощает 0 или 1 в зависимости от результата поиска
	//cout << testMap.count(5) << endl;

	// функция ищет заданный элемент и возврощает итератор на него
	//auto iter = testMap.find(3);

	// проверка на найденный элемент, если функция не находит элемента, то при попытке обращения к нему была бы ошибка
	/*if (iter != testMap.end())
	{
		cout << iter->first << endl;
		cout << iter->second << endl;
	}*/

	// получение значения через оператор []
	// для контейннера map реализована перегрузка оператора [], в случае если мы передаём в оператор ключ который существует, то мы получим значение по этому ключу
	// а в случае если такого ключа не существует, то будет добавлен новый элемент с данным ключём
	// 
	//cout << testMap[3] << endl;

	// удаление элемента
	//testMap.erase(3);

	// Вывод информации
	for (pair elem : testMap)
	{
		cout << elem.first << "\t" << elem.second << endl;
	}

	// ---------------------------------------- multimap ----------------------------------------

	/*multimap<int, string> testMultimap = { make_pair(1, "notebook"), make_pair(2, "PC") };

	testMultimap.insert(pair<int, string>(4, "phone"));
	testMultimap.insert(make_pair(3, "ipad"));
	testMultimap.emplace(5, "watch");
	testMultimap.emplace(3, "gps");

	// Вывод информации
	for (pair elem : testMultimap)
	{
		cout << elem.first << "\t" << elem.second << endl;
	}*/

	// так как контейнер multimap может хранить несколько одинаковых ключей, то для него нет перегруженного оператора[]
	//testMultimap[3];

	// ---------------------------------------- unordered_map ----------------------------------------

	/*unordered_map<int, string> testUnorderedMap = { make_pair(1, "notebook"), make_pair(2, "PC") };

	testUnorderedMap[7] = "ssd";
	testUnorderedMap.insert(pair<int, string>(4, "phone"));
	testUnorderedMap.insert(make_pair(3, "ipad"));
	testUnorderedMap.emplace(5, "watch");

	for (pair elem : testUnorderedMap)
	{
		cout << elem.first << "\t" << elem.second << endl;
	}*/

	// ---------------------------------------- unordered_multimap ----------------------------------------

	/*unordered_multimap<int, string> testUnorderedMultimap = { make_pair(1, "notebook"), make_pair(2, "PC") };

	testUnorderedMultimap.insert(pair<int, string>(4, "phone"));
	testUnorderedMultimap.insert(make_pair(3, "ipad"));
	testUnorderedMultimap.emplace(5, "watch");

	for (pair elem : testUnorderedMultimap)
	{
		cout << elem.first << "\t" << elem.second << endl;
	}*/

	// так как контейнер unordered_multimap может хранить несколько одинаковых ключей, то для него нет перегруженного оператора[]
	//testUnorderedMultimap[3];

	return 0;
}