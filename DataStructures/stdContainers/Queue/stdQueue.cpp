#include <iostream>
#include <queue>
using namespace std;

int main()
{
	srand(time(NULL));

	// объявление и инициализация очереди
	queue<int> testQueue;
	testQueue.emplace(1);
	testQueue.emplace(3);
	testQueue.emplace(5);
	
	// получение первого и последнего элемента в очереди
	/*cout << testQueue.front() << endl;
	cout << testQueue.back() << endl;*/

	// извлечение первого элемента в цикле
	/*while (!testQueue.empty())
	{
		cout << "SIZE - " << testQueue.size() << endl;
		cout << testQueue.front() << endl;
		testQueue.pop();
	}*/

	// объявление и инициализация очереди с приоритетом
	priority_queue<string> testPriorQ;
	
	/*testPriorQ.emplace(2);
	testPriorQ.emplace(4);
	testPriorQ.emplace(6);*/

	testPriorQ.emplace("Andrew");
	testPriorQ.emplace("Natasha");
	testPriorQ.emplace("Dima");

	// извлечение первого элемента в цикле
	/*while (!testPriorQ.empty())
	{
		cout << testPriorQ.top() << endl;
		testPriorQ.pop();
	}*/

	return 0;
}