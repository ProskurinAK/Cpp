#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

void ShowMenu(int* Array, int size);

void MakeOrderedArray(int* Array, int size);
void RandomArrayFilling(int* SortArray, int size);
void RandomUniqueArrayFilling(int* Array, int size);
void ManualArrayFilling(int* Array, int size);

void LinearSearch(int* Array, int size, int SearchElement);
void BinarySearch(int* Array, int FirstPointer, int LastPointer, int SearchElement);
void InterpolationSearch(int* Array, int FirstPointer, int LastPointer, int SearchElement);

void ShowArray(int* Array, int size);

int main()
{
	srand(time(NULL));

	int size = 10;
	int* Array = new int[size];

	ShowMenu(Array, size);

	return 0;
}

void ShowMenu(int* Array, int size)
{
	int NumbOfFilling = 0;
	int NumbOfSearching = 0;

	cout << "\t\tELEMENT SEARCH PROGRAM" << endl;
	cout << "\t    Choose an array filling method" << endl;
	cout << "1 - Filling in order" << endl;
	cout << "2 - Random filling" << endl;
	cout << "3 - Random filling with unique values" << endl;
	cout << "4 - Manual filling" << endl;
	cout << "Enter number of filling - ";
	cin >> NumbOfFilling;

	switch (NumbOfFilling)
	{
	case 1:
		MakeOrderedArray(Array, size);
		ShowArray(Array, size);
		break;
	case 2:
		RandomArrayFilling(Array, size);
		ShowArray(Array, size);
		break;
	case 3:
		RandomUniqueArrayFilling(Array, size);
		ShowArray(Array, size);
		break;
	case 4:
		ManualArrayFilling(Array, size);
		ShowArray(Array, size);
		break;
	default:
		cout << "No such option!" << endl;
		exit(0);
	}
	cout << endl;

	int SearchElement;	// Искомое значение (ключ)
	cout << "Select a search element - ";
	cin >> SearchElement;

	cout << endl;
	cout << "\t    Choose element search method" << endl;
	cout << "1 - Linear search" << endl;
	cout << "2 - Binary search" << endl;
	cout << "3 - Interpolation search" << endl;
	cout << "Enter number of searching - ";
	cin >> NumbOfSearching;

	switch (NumbOfSearching)
	{
	case 1:
		LinearSearch(Array, size, SearchElement);
		break;
	case 2:
		BinarySearch(Array, 0, size - 1, SearchElement);
		break;
	case 3:
		InterpolationSearch(Array, 0, size - 1, SearchElement);
		break;
	default:
		cout << "No such option!" << endl;
		exit(0);
	}
}

// Заполнение массива по возростанию
void MakeOrderedArray(int* Array, int size)
{
	for (int i = 0; i < size; i++)
	{
		Array[i] = i + 1;
	}
}

// Заполнение массива случайными значениями
void RandomArrayFilling(int* SortArray, int size)
{
	for (int i = 0; i < size; i++)
	{
		SortArray[i] = rand() % 10;
	}
}

// Заполнение массива уникальными случайными значениями
void RandomUniqueArrayFilling(int* Array, int size)
{
	for (int i = 0; i < size; )
	{
		bool AlreadyThere = false;
		int NewValue = rand() % 10;

		for (int j = 0; j < i; j++)
		{
			if (NewValue == Array[j])
			{
				AlreadyThere = true;
				break;
			}
		}

		if (!AlreadyThere)
		{
			Array[i] = NewValue;
			i++;
		}
	}
}

// Заполнение массива в ручную
void ManualArrayFilling(int* Array, int size)
{
	int NewValue;

	for (int i = 0; i < size; i++)
	{
		cout << "Enter new value - ";
		cin >> NewValue;

		Array[i] = NewValue;
	}
}

// Алгоритм линейного поиска
void LinearSearch(int* Array, int size, int SearchElement)
{
	vector<int> IndicesOfSearchedElement;	// Вектор в который будут записаны индексы найденных ключей

	// Линейный поиск
	for (int i = 0; i < size; i++)
	{
		if (Array[i] == SearchElement)
		{
			IndicesOfSearchedElement.push_back(i);
		}
	}

	// Вывод результата работы линейного поиска
	if (IndicesOfSearchedElement.size() == 0)
	{
		cout << endl;
		cout << "The desired element in the array was not found" << endl;
	}
	else
	{
		cout << endl;
		cout << "Indices of searched element = \t";
		for (int i = 0; i < IndicesOfSearchedElement.size(); i++)
		{
			cout << IndicesOfSearchedElement[i] << "\t";
		}
		cout << endl;
	}
}

// Алгоритм двоичного(бинарного) поиска
void BinarySearch(int* Array, int FirstPointer, int LastPointer, int SearchElement)
{
	int SeparatingElement = (FirstPointer + LastPointer) / 2;	// Нахождение среднего элемента

	// Бинарный поиск для случая, когда в массиве может быть несколько элементов искомого значения
	if (SearchElement < Array[SeparatingElement])
	{
		LastPointer = SeparatingElement - 1;
		BinarySearch(Array, FirstPointer, LastPointer, SearchElement);
	}
	else if (SearchElement > Array[SeparatingElement])
	{
		FirstPointer = SeparatingElement + 1;
		BinarySearch(Array, FirstPointer, LastPointer, SearchElement);
	}
	else
	{
		vector<int> IndicesOfSearchedElement;	// Вектор в который будут записаны индексы найденных ключей

		// цикл прохода от левой границы до разделяемого элемента и при нахождении значений равных ключу, добавление в массив
		while (FirstPointer < SeparatingElement)
		{
			if (Array[FirstPointer] == SearchElement)
			{
				IndicesOfSearchedElement.push_back(FirstPointer);
			}
			
			FirstPointer++;
		}

		IndicesOfSearchedElement.push_back(SeparatingElement);	// Если известно, что в массиве только один элемент искомого значения, можно закомментировать
		// верхний и нижний циклы и оставить только лишь добавление среднего элемента

		// Цикл прохода от разделяемого элемента к правой границе в том случае, если есть значения равные ключу справа от разделяемого элемента
		do
		{
			SeparatingElement++;

			if (Array[SeparatingElement] == SearchElement)
			{
				IndicesOfSearchedElement.push_back(SeparatingElement);
			}

		} while (SeparatingElement < LastPointer && Array[SeparatingElement] == SearchElement);

		// Вывод результата работы линейного поиска
		if (IndicesOfSearchedElement.size() == 0)
		{
			cout << endl;
			cout << "The desired element in the array was not found" << endl;
		}
		else
		{
			cout << endl;
			cout << "Indices of searched element = \t";
			for (int i = 0; i < IndicesOfSearchedElement.size(); i++)
			{
				cout << IndicesOfSearchedElement[i] << "\t";
			}
			cout << endl;
		}
	}
}

// Алгоритм Интерполяционного поиска
void InterpolationSearch(int* Array, int FirstPointer, int LastPointer, int SearchElement)
{
	// Алгоритм интерполяционного поиска отличается от бинарного только формулой нахождения среднего элемента

	// Формула нахождения среднего элемента
	int SeparatingElement = FirstPointer + (((SearchElement - Array[FirstPointer]) * (LastPointer - FirstPointer)) / (Array[LastPointer] - Array[FirstPointer]));

	// Интерполяционный поиск для случая, когда в массиве может быть несколько элементов искомого значения
	if (SearchElement < Array[SeparatingElement])
	{
		LastPointer = SeparatingElement - 1;
		InterpolationSearch(Array, FirstPointer, LastPointer, SearchElement);
	}
	else if (SearchElement > Array[SeparatingElement])
	{
		FirstPointer = SeparatingElement + 1;
		InterpolationSearch(Array, FirstPointer, LastPointer, SearchElement);
	}
	else
	{
		vector<int> IndicesOfSearchedElement;	// Вектор в который будут записаны индексы найденных ключей

		// цикл прохода от левой границы до разделяемого элемента и при нахождении значений равных ключу, добавление в массив
		while (FirstPointer < SeparatingElement)
		{
			if (Array[FirstPointer] == SearchElement)
			{
				IndicesOfSearchedElement.push_back(FirstPointer);
			}

			FirstPointer++;
		}

		IndicesOfSearchedElement.push_back(SeparatingElement);	// Если известно, что в массиве только один элемент искомого значения, можно закомментировать
		// верхний и нижний циклы и оставить только лишь добавление среднего элемента

		// Цикл прохода от разделяемого элемента к правой границе в том случае, если есть значения равные ключу справа от разделяемого элемента
		do
		{
			SeparatingElement++;

			if (Array[SeparatingElement] == SearchElement)
			{
				IndicesOfSearchedElement.push_back(SeparatingElement);
			}

		} while (SeparatingElement < LastPointer && Array[SeparatingElement] == SearchElement);

		// Вывод результата работы интерполяционного поиска
		if (IndicesOfSearchedElement.size() == 0)
		{
			cout << endl;
			cout << "The desired element in the array was not found" << endl;
		}
		else
		{
			cout << endl;
			cout << "Indices of searched element = \t";
			for (int i = 0; i < IndicesOfSearchedElement.size(); i++)
			{
				cout << IndicesOfSearchedElement[i] << "\t";
			}
			cout << endl;
		}
	}
}

void ShowArray(int* Array, int size)
{
	cout << endl;
	cout << "Array - " << "\t";

	for (int i = 0; i < size; i++)
	{
		cout << Array[i] << "\t";
	}
	cout << endl;
}