#include <iostream>
using namespace std;

//#define TASK1
//#define TASK2

void main()
{
	setlocale(LC_ALL, "");

#ifdef TASK1
	cout << "\t\t\t\tТаблица умножения.";
	system("color 03");
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			if (j % 10 == 1)cout << "\n";
			cout << j << '*' << i << '=' << j * i << "\t";
		}
	}
#endif // TASK1

#ifdef TASK2
	system("color 02");
	cout << "\t\t\t\t Таблица пифагора.";
	int n;
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			if (i < 10) cout << endl;

			if (j % 9 == 1)cout << "\n\n\n";
			n = j * i;
			cout << n << "\t";
			cout << i << '|';
		}
		cout << endl;
	}
#endif // TASK2

}