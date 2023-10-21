#include <iostream>
#include <tuple>
using namespace std;

tuple<int, int> Function()
{
	return make_tuple(5, 7);
}

int main()
{
	// --------------------------------------------------------------------------------------------------------------
	// Создание кортежа

	//tuple<> FirstTuple;
	//tuple<int, int> SecondTuple(5, 7);
	//tuple<int, string, float> ThirdTuple(2, "qwerty", 4);
	
	//tuple<char, int, float> FourthTuple = make_tuple('A', 7, 1.23);
	// --------------------------------------------------------------------------------------------------------------
	// Доступ к значениям кортежа

	//tuple<int, string, float> FirstTuple = make_tuple(7, "qwerty", 2.28);

	//cout << get<0>(FirstTuple) << endl;
	//cout << get<1>(FirstTuple) << endl;
	//cout << get<2>(FirstTuple) << endl;
	//cout << tuple_size<decltype(FirstTuple)>::value << endl;	// размер кортежа
	// --------------------------------------------------------------------------------------------------------------
	// Изменение значения элемента кортежа

	/*tuple<int, int> FirstTuple = make_tuple(1, 9);

	cout << get<1>(FirstTuple) << endl;
	get<1>(FirstTuple) = 11;
	cout << get<1>(FirstTuple) << endl;*/
	// --------------------------------------------------------------------------------------------------------------
	// Распаковка кортежа(std::tie) на примере функции swap
	
	/*int a = 3;
	int b = 7;

	cout << a << endl;
	cout << b << endl;

	tie(a, b) = make_tuple(b, a);

	cout << a << endl;
	cout << b << endl;*/
	// --------------------------------------------------------------------------------------------------------------
	//  Возврат нескольких значений из функции

	/*int a, b;

	tie(a, b) = Function();

	cout << a << endl;
	cout << b << endl;*/
	// --------------------------------------------------------------------------------------------------------------

	return 0;
}