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
//2.	�������� �������, ������� � ����������� �� ������ ������������ �������� ������� ��������, ������������, ���������, ������� ���� ����� (��� ������� ���� ����� �������� ��������������).
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
//3.�������� �������, ������� ���������, �������� �� ���������� �� ����� ������� ? ����� ���������� �������, ���� ��� ������� ��� ������� ������ �� ���� � �� �������.
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
	//1.	�������� �������, ������� ���������� ������, ���� ������������ �������� ������������� � ����, ���� �������������.
	/*int c=0;
	cin >> c;
	chert(c);
	cout << chert(c) << endl;*/

	//2.	�������� �������, ������� � ����������� �� ������ ������������ �������� ������� ��������, ������������, ���������, ������� ���� ����� (��� ������� ���� ����� �������� ��������������).
	/*int a = 0, b = 0;
	char operation;
	cout << "Enter firstNumber, operation and secondNumber"<<endl;
	cout << "Enter for operation +,-,*,/" << endl;
	cin >> a >> b >> operation;
	performOperation(a, b, operation);
		cout << performOperation(a, b, operation) << endl;
*/

	//3.	�������� �������, ������� ���������, �������� �� ���������� �� ����� �������? ����� ���������� �������, ���� ��� ������� ��� ������� ������ �� ���� � �� �������.
	int a = 0, c = 0;
	cout << "enter a numbers c & " << endl;
	cin >> a >> c;
	prost(c, a);
	cout << prost(c, a) << endl;

	system("pause");
}