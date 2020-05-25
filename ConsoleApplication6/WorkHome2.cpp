
// Напишите программу, проверяющую число, введнное с клавиатуры на четность.

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int number;
	cin << number;
	if (number % 2 == 0) {
		cout << "Число " << number <<"четное";
	}
	else {
		cout << "Число " << number <<"не четное";
	}
}

