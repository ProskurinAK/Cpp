#include <iostream>
#include <vector>
using namespace std;

// Вектор хранит элементы в памяти в виде непрерывной последовательности, друг за другом. При этом в конце последовательности резервируется дополнительное место для быстрого добавления
// новых элементов (capacity). Когда этот резерв заканчивается, при вставке очередного элемента происходит реаллокация: элементы вектора копируются в новый, более просторный блок памяти.
// Реаллокация — довольно дорогая процедура, но если она происходит достаточно редко, то её влияние незначительно.

// Векторы являются неэффективными для вставки элементов в любые места, кроме конца О(1). Такие операции имеют О(n) сложность по сравнению с O(1) для связанных списков.
// Удаление элемента из произвольного места также имеет сложность O(n) (необходимо сдвинуть к началу все элементы, располагающиеся после удаляемого, что в худшем случае даст n-1 перемещений).
// Это компенсируется скоростью доступа. Доступ к произвольному элементу вектора имеет сложность O(1) по сравнению с О(n) для связанного списка и O(log n) для сбалансированного двоичного дерева поиска.

int main()
{
	srand(time(NULL));


	// Объявление вектора
	//vector<int> testVector;	// Объявление пустого вектора
	//vector<int> testVector(7);	// Объявления вектора из 7 элементов заполненых значением по умолчанию
	//vector<int> testVector(7, 3);	// Объявления вектора из 7 элементов заполненых значением 3
	vector<int> testVector{1, 2, 3, 4};

	// ------------------------------ добавление в конец, удаление из конца, чистка и получение элемента по индексу ------------------------------
	
	// Метод push_back() добавляет новый элемент в конец вектора
	/*testVector.push_back(7);
	testVector.push_back(22);
	testVector.push_back(11);*/

	// Метод resize() изменяет длинну вектора и в случае если длинна увеличивается заполняет новые элементы дефолтными значениями для этого типа
	//testVector.resize(10);

	// метод at() аналогичен оператору [], но не позволяет выйти за границы массива генерируя исключение, но он медленнее чем []
	// cout << testVector.at(10) << endl;

	// метод clear() удаляет все элементы из вектора
	// testVector.clear();

	// метод pop_back() удаляет последний элемент вектора
	// testVector.pop_back();

	// ------------------------------ работа с резервирование памяти (capacity) ------------------------------

	// метод reserve() выделяет место под n элементов в запас (capacity увеличивается на n)
	// testVector.reserve(100);

	// метод shrink_to_fit() освобождает всё лишнее capacity
	// testVector.shrink_to_fit();

	// ------------------------------ вставка в вектор (insert) ------------------------------

	vector<int>::iterator iter = testVector.begin();	// для вставки числа в вектор необходимо объявить итератор

	//testVector.insert(iter, 777);	// вставка элемента на первую позицую в вектор

	advance(iter, 2);	// функция смещения итератора на конкретный индекс
	testVector.insert(iter, 888);

	// ------------------------------ удаление из вектора (erase) ------------------------------

	vector<int>::iterator iterErase = testVector.begin();
	//testVector.erase(iterErase);	// удаление первого элемента вектора
	//testVector.erase(iterErase += 2);	// удаление элемента по индексу
	testVector.erase(iterErase, iterErase + 3);	// удаление элементов в заданном диапазоне 

	// Вывод информации о векторе

	cout << "capacity = " << testVector.capacity() << endl;
	cout << "vector size = " << testVector.size() << endl << endl;

	for (int i = 0; i < testVector.size(); i++)
	{
		cout << testVector[i] << "\t";
	}
	cout << endl;

	/*for (int i : testVector)
	{
		cout << i << "\t";
	}
	cout << endl;*/

	return 0;
}