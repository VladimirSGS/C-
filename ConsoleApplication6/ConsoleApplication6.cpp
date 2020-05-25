// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Домашнее задание. Введите три числа и выведите на экран значение суммы, 
// произведения и среднее арифметическое этих чисел

#include <iostream>
using namespace std;

int main()
{
    int ferstNumber, twoNumber, threeNumber, resultSum, mult, result2;
    cout << "Enter 3 number: ";
    cin >> ferstNumber >> twoNumber >> threeNumber;
    resultSum = ferstNumber + twoNumber + threeNumber;
    mult = ferstNumber * twoNumber * threeNumber;
    result2 = resultSum / 3;
    cout << "Your result sum: " << resultSum << endl;
    cout << "Your result composition: " << mult << endl;
    cout << "Your result average: " << result2;
}

