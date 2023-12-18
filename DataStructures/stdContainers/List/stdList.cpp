#include <iostream>
#include <list>
using namespace std;

// Список отличается от вектора тем, что в списке быстрее работают функции добавления и удаления элементов, но медленнее происходит перемещение и доступ к конкретному элементу контейнера
// Так же в контейнере list нет перегруженного оператора [] и доступ к элементам осуществляется по итераторам

int main()
{
	srand(time(NULL));

	// Объявление и инициализация списка
	// 
	//list<int> testList;	// Объявление пустого списка
	//list<int> testList(5);	// Объявления списка из 5 элементов заполненых значением по умолчанию
	//list<int> testList(5, 2);	// Объявления списка из 5 элементов заполненых значением 2
	list<int> testList = { 3, 1, 7, 5, 7 };	// Объявление списка заполненного вручную

	// ------------------------------ добавление и удаление в начале и конце ------------------------------

	/*testList.push_back(22);
	testList.push_front(33);
	testList.pop_back();
	testList.pop_front();*/

	// ------------------------------ некоторые функции со списками ------------------------------
	
	// функция size() возвращает длинну списка
	//cout << testList.size() << endl;

	// функция resize() изменяет размер списка
	//testList.resize(3);
	//testList.resize(10);

	// функция assign() заменяет элементы списка (ведёт себя по разному в зависимости от переданных параметров)
	//testList.assign(3, 9);

	/*list<int> testList2{ 12, 8, 147, 32, 0 };
	testList.assign(testList2.begin(), testList2.end());*/

	// функция swap() заменяет элементы одного массива элементами другого
	/*list<int> testList2 = { 2, 2, 8 };
	testList.swap(testList2);*/

	// функция сортировки листа по возростанию
	//testList.sort();

	// функция unique() удаляет повторяющиеся элементы которые идут подряд и оставляет только один
	/*testList.push_back(9);
	testList.push_back(9);
	testList.push_back(9);
	testList.unique();*/

	// функция reverse() распологает элементы списка в обратном порядке
	//testList.reverse();
	
	// ------------------------------ вставка в список (insert) ------------------------------
	// функция insert() вставляет новый элемент на позицию на которую указывает переданный итератор

	/*auto iter = testList.begin();

	testList.insert(iter, 777);
	++iter;
	testList.insert(iter, 333);

	auto iter2 = testList.begin();
	advance(iter2, 4);
	testList.insert(iter2, 58);*/

	// ------------------------------ удаление из списка (erase) ------------------------------
	// функция erase() удаляет элемент на позиции на которую указывает переданный итератор

	//auto iter = testList.begin();

	//testList.erase(iter);

	/*++iter;
	testList.erase(iter);*/

	/*advance(iter, 3);
	testList.erase(iter);*/

	// ------------------------------ удаление из списка (remove) ------------------------------
	// функция remove() удаляет все элементы с тем значением, которое мы передали в функцию, если таких элементов нет, то ничего не произойдёт

	//testList.remove(7);
	
	//testList.remove(10);


	// Вывод информации о списке

	for (auto iter = testList.begin(); iter != testList.end(); iter++)
	{
		cout << *iter << "\t";
	}
	cout << endl;

	/*for (int elem : testList)
	{
		cout << elem << "\t";
	}
	cout << endl;*/

	return 0;
}