 #include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	/*for (;;)
	{
		cout << "Hello";
	}*/
	/*int n;
	cout << "Введите количество итерации: "; cin >> n;
	for (int i = 1;i<=n; ++i)
	{
		cout << i << "\t";
	}
	cout << endl;*/

	cout << "Возведение в степень." << endl;
	int degree, number, n, i = 0;
	cout << "Введите основание и множитель степени:"; cin >> number >> n >> endl;
	for (n; i < n; ++i)
	{
		degree = number * i;
	}
	cout << degree;
}