#include <iostream>
#include <conio.h>
using namespace std;
 
//#define SQURE
//#define TRIANGLE
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define RHOMB
//#define RHOMB2
//#define PM
 #define PM2
//#define CHESSBOARD
#define WHITE (char)219
#define SIDE (char)179
#define UP_BOTTOM (char)196
void main()
{
	setlocale(LC_ALL, "rus");
	int n, m, k;
	cout << "Введите размер фигуры:"; cin >> n;
#ifdef SQURE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++) cout << "* ";
		cout << endl;
	}
	cout << endl;
#endif // SQURE
#ifdef TRIANGLE
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << "* ";
		cout << endl;
	}
	cout << endl;
#endif // TRIANGLE

#ifdef TRIANGLE_2
	
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j <n; j++) cout << "* ";
        cout << endl;
	}
	cout << endl;
#endif // TRIANGLE_2

#ifdef TRIANGLE_3
	
	for (int i = 0; i < n; i++)
	{
        for (int j = 0; j < i; j++)cout << "  ";
        for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
	cout << endl;
#endif // TRIANGLE_3

#ifdef TRIANGLE_4
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n-1; j++)  cout << "  ";
        for (int j = 0; j <= i; j++) cout << "* ";
		cout << endl;
    }
	cout << endl;
#endif // TRIANGLE_4

#ifdef RHOMB
	for (int i = 0; i < n; i++)
	{	
		for (int j = i; j < n-1; j++) cout << " ";
		cout << "/";
		for (int j = 0; j < i; j++) cout << "  ";
		cout << '\\' << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <i; j++) cout << " ";
		cout << "\\";
		for (int j = i+1; j <n; j++) cout << "  ";
		cout << '/' << endl;
	}
	cout << endl;
#endif // RHOMB

#ifdef PM
	m = n;
	for (int i = 0; i < n; i++)
	{
		m--;
		for (int j = 1; j < n; j += 2)
		{
			if (i % 2 == 0) cout << "+ - ";
			else cout << "- + ";
		}
		if (n % 2 == 1)
		{
			if (m % 2 == 0) cout << "+ ";
			else cout << "- ";
		}
		cout << endl;
	}
	cout << endl;
#endif // PM

#ifdef CHESSBOARD
	
	cout << "Шахматная доска." << endl;
	setlocale(LC_ALL, "C");
	cout   << "\t\t";
	for (int i = 0; i < n; i++)cout <<char(i +'A') << " ";
	cout << "\n\t\t" << (char)218;
	for (int i = 0; i < n; i++) cout << UP_BOTTOM << UP_BOTTOM;
	cout << (char)191 << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\t\t" << SIDE;
		for (int j = 1; j < n; j += 2)
		{

			if (i % 2 == 0) cout << WHITE << WHITE << "  ";
			else cout << "  " << WHITE << WHITE;
		}
		if (n % 2 == 1)
		{
			if (m % 2 == 0) cout << WHITE << WHITE;
			else cout << "  " ;
		}
		cout << SIDE << endl;
	}
	cout << "\t\t" << (char)192 ;
	for (int i = 0; i < n; i++) cout << UP_BOTTOM << UP_BOTTOM;
	cout << (char)217;
#endif // CHESSBOARD

#ifdef PM2
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			//if ((i + j) % 2 == 0)cout << "+ "; else cout << "- ";
			//(i + j) % 2 == 0 ? cout << "+ " : cout << "- ";
			//cout << ((i + j) % 2 == 0 ? "+ " : "- ");
		    cout << ((i + j) % 2 ? "+ " : "- ");
		cout << endl;
	}
#endif // PM2

}