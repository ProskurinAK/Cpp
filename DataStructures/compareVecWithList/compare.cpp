#include <iostream>
#include <vector>
#include <list>
using namespace std;

// программа для сравнения времени удаления из середины в векторе и листе

// По результатам экспериментов можно сделать вывод, что если замерять время исключительно операции удаления, то она в разы быстрее при удалении из списка, НО если замерять время
// выполнения программы в целом, то она выполняется в десятки раз медленнее и на создание списка уходит в разы больше памяти, чем на динамический массив.

int main()
{
	srand(time(NULL));

	// --------------------------------------------------- vector ---------------------------------------------------

	//unsigned int start = clock();

	vector<int> testVector(10000000);

	cout << "vector size - " << testVector.size() << endl;

	auto iter = testVector.begin();
	advance(iter, 5000000);

	unsigned int start = clock();

	testVector.erase(iter);

	unsigned int finish = clock();

	cout << "vector size - " << testVector.size() << endl;

	//unsigned int finish = clock();
	cout << "result - " << finish - start << endl;

	// --------------------------------------------------- list ---------------------------------------------------

	//unsigned int start = clock();

	//list<int> testList(10000000);

	//cout << "list size - " << testList.size() << endl;

	//auto iter = testList.begin();
	//advance(iter, 5000000);

	//unsigned int start = clock();

	//testList.erase(iter);

	//unsigned int finish = clock();

	//cout << "list size - " << testList.size() << endl;

	////unsigned int finish = clock();
	//cout << "result - " << finish - start << endl;

	return 0;
}