#include <iostream>
using namespace std;

// По сути умный указатель является обёрткой над обычным указателем, позволяющей автоматизировать некоторые действия, например освобождение памяти

// Пример простейшей обёртки умного указателя
template<typename T> class SmartPointer
{
public:
	SmartPointer(T *ptr)
	{
		this->ptr = ptr;
	}

	~SmartPointer()
	{
		delete ptr;
	}

	T& operator*()
	{
		return *ptr;
	}

private:
	T *ptr;
};

int main()
{
	srand(time(NULL));

	SmartPointer<int> pointer = new int(7);

	cout << *pointer << endl;
	
	*pointer = 12345;

	cout << *pointer << endl;

	return 0;
}