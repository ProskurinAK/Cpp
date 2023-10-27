#include <iostream>
#include <list>
#include <stack>
using namespace std;

int main()
{
	srand(time(NULL));

	stack<int> testStack;

	// добавление элементов
	testStack.push(1);	// пуш работает медленнее емплейса
	testStack.emplace(3);
	testStack.emplace(5);
	testStack.emplace(7);
	
	// посмотреть последний добавленный элемент
	//cout << testStack.top() << endl;
	
	// удалить последний элемент
	/*testStack.pop();
	cout << testStack.top() << endl;*/

	// просмотр и удаление всех элементов стека в цикле
	/*while (!testStack.empty())
	{
		cout << testStack.top() << endl;
		testStack.pop();
	}*/

	// просмотр контейнера на основе которого реализован стек
	//cout << typeid(testStack._Get_container()).name() << endl;

	// объявление стека на основе другого контейнера(списка)
	/*stack<int, list<int>> tmpStack;
	cout << typeid(tmpStack._Get_container()).name();*/

	return 0;
}