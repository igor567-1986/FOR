#include <iostream>

using namespace std;

//#define TASK_1
//#define TASK_2
#define TASK_3

void main()
{
	setlocale(LC_ALL, "");
#ifdef TASK_1
	cout << "���������� ����������:" << endl;
    double number, n = 1,;
	cout << "������� �������� �����: "; cin >> number;
	for (int i = 1; i <= number; ++i)
	{
		n = n * i;
	}
	cout << "��������� �����:" << n << endl;

#endif TASK_1

#ifdef TASK_2
	cout << "���������� � �������." << endl;
	double N, a;
	int	 n;
	cout << "������� ��������� :"; cin >> a;
	cout << "������� ���������:"; cin >> n;
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
	cout << "����� ascii ����� ." << endl;
	setlocale(LC_ALL, "C");// ���������� ��������� �� ���������
	for (int i = 1; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << '=' << i << ' ';
	}
	setlocale(LC_ALL, "");
	cout << "��� � �������� �����." << endl;
#endif TASK_3

}