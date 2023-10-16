#include <iostream>
using namespace std;

int main()
{
	//------------------------------------------------------------ Объявление и инициализация ------------------------------------------------------------

	const int ROW = 3;
	const int COL = 5;

	//int testArray[ROW][COL];	// Массив ничем не заполниться
	//int testArray[ROW][COL]{};	// Массив заполнится нулями
	//int testArray[ROW][COL]{ {1, 2, 3, 4, 5}, {7, 7, 7, 7, 7}, {0, 9, 8, 7, 6} };	// Ручное заполнение массива

	// Заполнение массива случайными числами
	int testArray[ROW][COL];
	srand(time(NULL));
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			testArray[i][j] = rand() % 10;
		}
	}
	//------------------------------------------------------------ Перебор массива ------------------------------------------------------------

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << testArray[i][j] << "\t";
		}
		cout << endl;
	}

	return 0;
}