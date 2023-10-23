#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
	srand(time(NULL));

	// объявление и инициализация словаря
	//map<string, int> testMap;
	map<string, int> testMap = { {"ZZZ", 99}, {"VVV", 88}};
	testMap["BBB"] = 22;
	testMap["AAA"] = 11;
	testMap["CCC"] = 33;

	// перебор элементов
	/*for (auto elem : testMap)
	{
		cout << elem.first << "\t" << elem.second << endl;
	}*/

	/*for (auto [first, second] : testMap)
	{
		cout << first << "\t" << second << endl;
	}*/

	// удаление элемента
	//testMap.erase("CCC");

	// размер и проверка на пустоту
	/*cout << "size - " << testMap.size() << endl;
	cout << "empty? - " << testMap.empty() << endl;*/

	// проверка на присутствие элемента
	/*cout << testMap.count("BBB") << endl;
	cout << testMap.contains("XXX") << endl;*/

	// неупорядоченные словари

	/*unordered_map<string, int> testUnorderedMap = { {"ZZZ", 99}, {"VVV", 88} };
	testUnorderedMap["BBB"] = 22;
	testUnorderedMap["AAA"] = 11;
	testUnorderedMap["CCC"] = 33;

	for (auto [first, second] : testUnorderedMap)
	{
		cout << first << "\t" << second << endl;
	}*/

	return 0;
}