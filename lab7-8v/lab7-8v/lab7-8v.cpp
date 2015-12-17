#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include "Vector.h"
#include "massiv.h"

using namespace std;

template <class T>
void getLessThan(Massiv<T>& mas, T val)
{
	for (int i = 0; i < mas.a_size; i++)
	{
		if (mas.a_mass[i] < val)
		{
			cout << mas.a_mass[i]<< " ";
		}
	}
	cout << endl;
}

void main()
{
	setlocale(LC_CTYPE, "RUSSIAN");
	cout << "Работа с типом int " << endl;
	Massiv<int> mas1;
	mas1.push(2);
	mas1.push(7);
	mas1.push(5);
	mas1.push(11);
	mas1.push(4);
	mas1.print();
	int a = 5;
	cout << "Все наименьшие числа типа int: " << endl;
	getLessThan(mas1, a);;
	cout << "Работа с типом double " << endl;
	Massiv<double> mas2;
	mas2.push(2.4);
	mas2.push(5.9);
	mas2.push(4.2);
	mas2.push(7.8);
	mas2.push(1.6);
	mas2.print();
	cout << "Все наименьшие числа типа double: " << endl;
	double t = 5.6;
	getLessThan(mas2, t);
	cout << "Работа с  пользовательским типом" << endl;
	Massiv<Vector> mas3(3);
	int d[] = { 4, 8, 7 };
	Vector vct(3,d);
	//vct.printVector();
	int aa[] = { 1, 2 };	int b[] = { 3, 4 };	int c[] = { 4, 5, 6 };
	mas3.push(Vector(2,aa));
	mas3.push(Vector(2, b));
	mas3.push(Vector(3,c));
	mas3.print();
	
	cout << "Все наименьшие числа пользовательского типа: " << endl;
	getLessThan(mas3, vct);
	system("pause");
};
