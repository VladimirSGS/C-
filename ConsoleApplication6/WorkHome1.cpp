
// Напишите программу, проверяющую число, введнное с клавиатуры на четность.

#include <iostream>

using namespace std;

int main()

{
setlocale(LC_ALL, "ru");

int a, b, c;

cout « "Введите 3 числа:" « endl;
cin » a » b » c;

cout « "Сумма трёх чисел = " « a + b + c « endl;

cout « "Произведение трёх чисел = " « a*b*c « endl;

cout « "Среднее арифметическое 3х чисел = " « (double)(a + b + c) / 3 « endl;

}


