#include <iostream>
#include <stdio.h>
#include <time.h>
#include <Windows.h>
#include <locale.h>
#include <stdlib.h>
using namespace std;
//task1
bool chert(int c) {
	if (c >= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//2.	Написать функцию, которая в зависимости от выбора пользователя вызывает функции сложения, произведения, вычитания, деления двух чисел (эти функции тоже нужно написать самостоятельно).
float performOperation(int a, int b, char operation) {

	switch (operation) {

	case '+':
		return a + b;

	case '-':
		return a - b;

	case '*':
		return a * b;

	case '/':
		return a / b;

	}

	return 0;

}
//3.Написать функцию, которая проверяет, является ли переданное ей число простым ? Число называется простым, если оно делится без остатка только на себя и на единицу.
bool prost(int c,int a) {
	a != c && a!=1;
	if (c %c == 0|| c%1==0)
	{
		return true;
	}
	else if (c%a==0)
	{
		return false;
	}
}
void main() 
{
	//1.	Написать функцию, которая возвращает истину, если передаваемое значение положительное и ложь, если отрицательное.
	/*int c=0;
	cin >> c;
	chert(c);
	cout << chert(c) << endl;*/

	//2.	Написать функцию, которая в зависимости от выбора пользователя вызывает функции сложения, произведения, вычитания, деления двух чисел (эти функции тоже нужно написать самостоятельно).
	/*int a = 0, b = 0;
	char operation;
	cout << "Enter firstNumber, operation and secondNumber"<<endl;
	cout << "Enter for operation +,-,*,/" << endl;
	cin >> a >> b >> operation;
	performOperation(a, b, operation);
		cout << performOperation(a, b, operation) << endl;
*/

	//3.	Написать функцию, которая проверяет, является ли переданное ей число простым? Число называется простым, если оно делится без остатка только на себя и на единицу.
	int a = 0, c = 0;
	cout << "enter a numbers c & " << endl;
	cin >> a >> c;
	prost(c, a);
	cout << prost(c, a) << endl;

	system("pause");
}