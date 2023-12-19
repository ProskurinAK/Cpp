#include <iostream>
#include <array>
using namespace std;

// контейнер array представляет из себя реализацию статического массива с некоторыми дополнениями, такими как:
// возможность узнавать размер массива, переприсваивать один массив другому, сравнивать друг с другом и некоторые другие функции

int main()
{
	srand(time(NULL));

	//array<int, 5> testArray;	// массив заполнен неопределёнными значениями
	//array<int, 5> testArray = {};	// заполнение массива значениями по умолчанию (для int 0)
	array<int, 5> testArray = { 1, 3, 5, 7, 9 };

	// ------------------------------ некоторые функции с array ------------------------------

	// получение длины массива
	//cout << testArray.size() << endl;

	// получение первого элемента массива
	//cout << testArray.front() << endl;

	// получение последнего элемента массива
	//cout << testArray.back() << endl;

	// заполнение или перезаполнение массива одни значением, переданным в функцию
	//testArray.fill(7);

	// ------------------------------ сравнение контейнеров в stl ------------------------------
	// данный функционал работает со всему контейнерами stl в том случае если у элементов которыми они заполнены реализованы соответствующие перегрузки операторов

	array<int, 5> testArray2 = {2, 4, 6, 8, 10};

	/*cout << (testArray == testArray2) << endl;
	cout << (testArray != testArray2) << endl;
	cout << (testArray > testArray2) << endl;
	cout << (testArray < testArray2) << endl;*/

	// ------------------------------ присвоение данных одного контейнера другому ------------------------------

	//testArray = testArray2;	// так можно сделать

	/*int testArray3[] = { 1, 2, 3, 4, 5 };
	int testArray4[] = { 6, 7, 8, 9, 10};*/
	//testArray3 = testArray4;	// так нельзя следать

	// Вывод информации о array

	for (int i = 0; i < testArray.size(); i++)
	{
		cout << testArray[i] << "\t";
	}
	cout << endl;

	return 0;
}