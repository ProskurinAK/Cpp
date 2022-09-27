#include <iostream>
#include <ctime>
using namespace std;

void ShowMenu(int* SortArray, int size);

void RandomArrayFilling(int* SortArray, int size);
void RandomUniqueArrayFilling(int* SortArray, int size);
void ManualArrayFilling(int* SortArray, int size);

void BubbleSort(int* SortArray, int size);
void InsertionSort(int* SortArray, int size);
void SelectionSort(int* SortArray, int size);

void QuickSort(int* SortArray, int FirstPointer, int LastPointer);
void QuickSortForUnique(int* SortArray, int FirstPointer, int LastPointer);

void MergeSort(int* SortArray, int FirstPointer, int LastPointer);

void ShowArray(int* SortArray, int size);
void ShowArrayWithBorders(int* SortArray, int LeftBorder, int RightBorder);

int main()
{
	srand(time(NULL));

	int size = 10;
	int* SortArray = new int[size];

	ShowMenu(SortArray, size);

	delete[] SortArray;

	return 0;
}

void ShowMenu(int* SortArray, int size)
{
	int NumbOfFilling = 0;
	int NumbOfSorting = 0;

	cout << "\t\tARRAY SORTING PROGRAM" << endl;
	cout << "\t    Choose an array filling method" << endl;
	cout << "1 - Random filling" << endl;
	cout << "2 - Random filling with unique values" << endl;
	cout << "3 - Manual filling" << endl;
	cout << "Enter number of filling - ";
	cin >> NumbOfFilling;

	switch (NumbOfFilling)
	{
	case 1:
		RandomArrayFilling(SortArray, size);
		ShowArray(SortArray, size);
		break;
	case 2:
		RandomUniqueArrayFilling(SortArray, size);
		ShowArray(SortArray, size);
		break;
	case 3:
		ManualArrayFilling(SortArray, size);
		ShowArray(SortArray, size);
		break;
	default:
		cout << "No such option!" << endl;
		exit(0);
	}

	cout << endl;
	cout << "\t    Choose an array sorting method" << endl;
	cout << "1 - Bubble sort" << endl;
	cout << "2 - Insertion sort" << endl;
	cout << "3 - Selection sort" << endl;
	cout << "4 - Quick sort" << endl;
	cout << "5 - Merge sort" << endl;
	cout << "Enter number of sorting - ";
	cin >> NumbOfSorting;

	switch (NumbOfSorting)
	{
	case 1:
		BubbleSort(SortArray, size);
		break;
	case 2:
		InsertionSort(SortArray, size);
		break;
	case 3:
		SelectionSort(SortArray, size);
		break;
	case 4:
		QuickSort(SortArray, 0, size - 1);
		ShowArray(SortArray, size);
		break;
	case 5:
		MergeSort(SortArray, 0, size - 1);
		ShowArray(SortArray, size);
		break;
	default:
		cout << "No such option!" << endl;
		exit(0);
	}
}

void RandomArrayFilling(int* SortArray, int size)
{
	for (int i = 0; i < size; i++)
	{
		SortArray[i] = rand() % 10;
	}
}

void RandomUniqueArrayFilling(int* SortArray, int size)
{
	for (int i = 0; i < size; )
	{
		bool AlreadyThere = false;
		int NewValue = rand() % 10;

		for (int j = 0; j < i; j++)
		{
			if (NewValue == SortArray[j])
			{
				AlreadyThere = true;
				break;
			}
		}

		if (!AlreadyThere)
		{
			SortArray[i] = NewValue;
			i++;
		}
	}
}

void ManualArrayFilling(int* SortArray, int size)
{
	int NewValue;

	for (int i = 0; i < size; i++)
	{
		cout << "Enter new value - ";
		cin >> NewValue;

		SortArray[i] = NewValue;
	}
}

// Сортировка пузырьком
void BubbleSort(int* SortArray, int size)
{
	int ValueToChange = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - (i + 1); j++)
		{
			if (SortArray[j] > SortArray[j + 1])
			{
				ValueToChange = SortArray[j];
				SortArray[j] = SortArray[j + 1];
				SortArray[j + 1] = ValueToChange;
			}
		}
		
		ShowArray(SortArray, size);

		// Проверка на то отсортирован ли массив, если да, прекращает выполнение сортировки
		// -----------------------------------------------------------
		bool ArraySorted = true;
		for (int j = 0; j < size - 1; j++)
		{
			if (SortArray[j] > SortArray[j + 1])
			{
				ArraySorted = false;
				break;
			}
		}

		if (ArraySorted == true)
		{
			break;
		}
		// -----------------------------------------------------------
	}
}

// Сортировка вставками
void InsertionSort(int* SortArray, int size)
{
	for (int i = 1; i < size; i++)
	{
		int ValueToChange = SortArray[i];

		for (int j = i - 1; j >= 0; j--)
		{
			if (ValueToChange < SortArray[j])
			{
				SortArray[j + 1] = SortArray[j];
				SortArray[j] = ValueToChange;
			}
		}

		ShowArray(SortArray, size);
	}
}

// Сортировка выбором
void SelectionSort(int* SortArray, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int IndexOfMinValue = i;

		for (int j = i + 1; j < size; j++)
		{
			if (SortArray[j] < SortArray[IndexOfMinValue])
			{
				IndexOfMinValue = j;
			}
		}

		int TmpValue;
		if (IndexOfMinValue != i)
		{
			TmpValue = SortArray[i];
			SortArray[i] = SortArray[IndexOfMinValue];
			SortArray[IndexOfMinValue] = TmpValue;
		}

		ShowArray(SortArray, size);
	}

	// альтернативная реализация алгоритма
	// ---------------------------------------------------------
	/*for (int i = 0; i < size - 1; i++)
	{
		int MinValue = SortArray[i];
		int IndexOfMinValue;
		bool ChangeValue = false;

		for (int j = i + 1; j < size; j++)
		{
			if (SortArray[j] < MinValue)
			{
				ChangeValue = true;
				MinValue = SortArray[j];
				IndexOfMinValue = j;
			}
		}

		int TmpValue;
		if (ChangeValue == true)
		{
			TmpValue = SortArray[i];
			SortArray[i] = MinValue;
			SortArray[IndexOfMinValue] = TmpValue;
		}

		ShowArray(SortArray, size);
	}*/
	// ---------------------------------------------------------
}

// Быстрая сортировка для целочисленных массивов с любыми элементами
//SortArray - динамический массив
//FirstPointer - Указатель на первый элемент массива
//LastPointer - Указатель на последний элемент массива
void QuickSort(int* SortArray, int FirstPointer, int LastPointer)
{
	if (FirstPointer < LastPointer)	// Условие сортировки массива, если true, то в массиве больше одного элемента
	{
		int LeftBorder = FirstPointer;	// Левая граница переданного массива
		int RightBorder = LastPointer;	// Правая граница переданного массива

		int SupportElementIndex = (FirstPointer + LastPointer) / 2;	// Нахождение индекса опорного элемента

		//cout << "Index of support element = " << SupportElementIndex << endl;

		int ValueToSwap;	// Переменная для перестановки двух элементов
		for (int i = 0; ; i++)
		{
			if (SortArray[FirstPointer] >= SortArray[SupportElementIndex] && SortArray[LastPointer] < SortArray[SupportElementIndex] ||
				SortArray[FirstPointer] >= SortArray[SupportElementIndex] && LastPointer == SupportElementIndex)	// Условие перестановки двух элементов
			{
				ValueToSwap = SortArray[FirstPointer];
				SortArray[FirstPointer] = SortArray[LastPointer];
				SortArray[LastPointer] = ValueToSwap;

				// Услия отслеживания опорного элемента, в случае когда он меняется местами с другим элементом
				if (FirstPointer == SupportElementIndex)
				{
					SupportElementIndex = LastPointer;
				}
				else if (LastPointer == SupportElementIndex)
				{
					SupportElementIndex = FirstPointer;
				}

				//ShowArrayWithBorders(SortArray, LeftBorder, RightBorder);	// Итерационный вывод сортируемого массива
			}
			else
			{
				if (SortArray[FirstPointer] < SortArray[SupportElementIndex])	// Условие сдвига левого указателя
				{
					FirstPointer++;
				}
				if (SortArray[LastPointer] >= SortArray[SupportElementIndex] && LastPointer != SupportElementIndex)	// Условие сдвига правого указателя
				{
					LastPointer--;
				}
				if (FirstPointer == LastPointer || FirstPointer > LastPointer)	// Условие конца сортировки
				{
					break;
				}
			}
		}

		ShowArrayWithBorders(SortArray, LeftBorder, RightBorder);	// Вывод отсортированного массива после каждой итерации
		cout << "----------------------------------------------------------------------------------------------" << endl;

		// Рекурсивный вызов функций сортировки для левых и правых частей, до тех пор пока FirstPointer < LastPointer
		QuickSort(SortArray, LeftBorder, SupportElementIndex - 1);
		QuickSort(SortArray, SupportElementIndex + 1, RightBorder);
	}
}

// Быстрая сортировка только для массивов с уникальными(НЕ ПОВТОРЯЮЩИМИСЯ) элементами
void QuickSortForUnique(int* SortArray, int FirstPointer, int LastPointer)
{
	if (FirstPointer < LastPointer)
	{
		int LeftBorder = FirstPointer;
		int RightBorder = LastPointer;

		int SupportElementIndex = (FirstPointer + LastPointer) / 2;

		//cout << "Index of support element = " << SupportElementIndex << endl;

		int ValueToSwap;
		for (int i = 0; ; i++)
		{
			if (SortArray[FirstPointer] >= SortArray[SupportElementIndex] && SortArray[LastPointer] <= SortArray[SupportElementIndex])
			{
				ValueToSwap = SortArray[FirstPointer];
				SortArray[FirstPointer] = SortArray[LastPointer];
				SortArray[LastPointer] = ValueToSwap;

				if (FirstPointer == SupportElementIndex)
				{
					SupportElementIndex = LastPointer;
				}
				else if (LastPointer == SupportElementIndex)
				{
					SupportElementIndex = FirstPointer;
				}

				//ShowArrayWithBorders(SortArray, LeftBorder, RightBorder);
			}
			else
			{
				if (SortArray[FirstPointer] < SortArray[SupportElementIndex])
				{
					FirstPointer++;
				}
				if (SortArray[LastPointer] > SortArray[SupportElementIndex])
				{
					LastPointer--;
				}
				if (FirstPointer == LastPointer)
				{
					break;
				}
			}
		}

		ShowArrayWithBorders(SortArray, LeftBorder, RightBorder);
		cout << "----------------------------------------------------------------------------------------------" << endl;

		QuickSortForUnique(SortArray, LeftBorder, SupportElementIndex - 1);
		QuickSortForUnique(SortArray, SupportElementIndex + 1, RightBorder);

		// Реализация рекурсии где перед вызовом функции проверяется условие размера подмассива
		// -----------------------------------------------------------------------------------------
		/*int LSize = SupportElementIndex - LeftBorder;
		int RSize = RightBorder - SupportElementIndex;

		if (LSize > 1)
		{
			QuickSortForUnique(SortArray, LeftBorder, SupportElementIndex - 1);
		}
		if (RSize > 1)
		{
			QuickSortForUnique(SortArray, SupportElementIndex + 1, RightBorder);
		}*/
	}
}

// Сортировка слиянием
void MergeSort(int* SortArray, int LeftBorder, int RightBorder)
{
	if (LeftBorder < RightBorder)
	{
		int SeparatingElement = (LeftBorder + RightBorder) / 2;	// Условие сортировки массива, если true, то в массиве больше одного элемента

		// Рекурсивный вызов функции для левой и правой части до тех пор пока размер массива не равен 1
		MergeSort(SortArray, LeftBorder, SeparatingElement);
		MergeSort(SortArray, SeparatingElement + 1, RightBorder);

		int* TmpArray = new int[(RightBorder - LeftBorder) + 1];	// Отсортированный массив на каждой итерации рекурсии

		int LeftPointer = LeftBorder;	// Указатель для прохода по левому подмассиву
		int RightPointer = SeparatingElement + 1;	// Указатель для прохода по правому подмассиву

		// Сортировка и запись во временный массив
		for (int i = 0; i < (RightBorder - LeftBorder) + 1; i++)
		{
			if (LeftPointer <= SeparatingElement && RightPointer <= RightBorder)
			{
				if (SortArray[LeftPointer] < SortArray[RightPointer])
				{
					TmpArray[i] = SortArray[LeftPointer];
					LeftPointer++;
				}
				else if (SortArray[LeftPointer] > SortArray[RightPointer])
				{
					TmpArray[i] = SortArray[RightPointer];
					RightPointer++;
				}
				else if (SortArray[LeftPointer] == SortArray[RightPointer])
				{
					TmpArray[i] = SortArray[LeftPointer];
					LeftPointer++;
				}
			}
			else if (LeftPointer > SeparatingElement)
			{
				TmpArray[i] = SortArray[RightPointer];
				RightPointer++;
			}
			else if (RightPointer > RightBorder)
			{
				TmpArray[i] = SortArray[LeftPointer];
				LeftPointer++;
			}
		}

		// Перезапись основного массива
		for (int i = LeftBorder; i < RightBorder + 1; i++)
		{
			SortArray[i] = TmpArray[i - LeftBorder];
		}

		// Вывод отсортированного массива на каждой итерации рекурсии
		cout << "TmpArray =\t";
		for (int i = 0; i < (RightBorder - LeftBorder) + 1; i++)
		{
			cout << TmpArray[i] << "\t";
		}
		cout << endl;

		delete[] TmpArray;	// Освобождение памяти после каждой итерации рекурсии
	}
}

void ShowArray(int* SortArray, int size)
{
	cout << endl;
	cout << "Array - " << "\t";

	for (int i = 0; i < size; i++)
	{
		cout << SortArray[i] << "\t";
	}
	cout << endl;
}

void ShowArrayWithBorders(int* SortArray, int LeftBorder, int RightBorder)
{
	cout << "Array - " << "\t";
	for (int i = LeftBorder; i < RightBorder + 1; i++)
	{
		cout << SortArray[i] << "\t";
	}
	cout << endl;
}