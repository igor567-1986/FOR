#include <iostream>

using namespace std;

//#define TASK_1
//#define TASK_2
#define TASK_3

void main()
{
	setlocale(LC_ALL, "");
#ifdef TASK_1
	cout << "Вычисление факториала:" << endl;
    double number, n = 1,;
	cout << "Введите конечное число: "; cin >> number;
	for (int i = 1; i <= number; ++i)
	{
		n = n * i;
	}
	cout << "Факториал числа:" << n << endl;

#endif TASK_1

#ifdef TASK_2
	cout << "Возведение в степень." << endl;
	double N, a;
	int	 n;
	cout << "Введите основание :"; cin >> a;
	cout << "Введите множитель:"; cin >> n;
	N = 1;
	if (n < 0)
	{
		a = 1 / a;
		n = - n;
	}
	for (int i = 0; i < n; ++i)
	{
		N *= a;
	}
	cout << N;
#endif TASK_2

#ifdef TASK_3
	cout << "Вывод ascii кодов ." << endl;
	setlocale(LC_ALL, "C");// Возвращает кодировку по умолчанию
	for (int i = 1; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << '=' << i << ' ';
	}
	setlocale(LC_ALL, "");
	cout << "Вот и сказачке конец." << endl;
#endif TASK_3

}