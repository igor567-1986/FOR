#include <iostream>
using namespace std;
#define UPPER_LEFT_ANGLE  (char)218
#define UPPER_RIGHT_ANGLE (char)191
#define DOWN_LEFT_ANGLE   (char)192
#define DOWN_RIGHT_ANGLE  (char)217
#define WHITE_BOX         "\xDB\xDB" 
#define SIDE              (char)179
#define UP_BOTTOM         "\xC4\xC4"
#define BLACK_BOX         "  "
//#define CHESS1
#define HOME_WORK_CHEES1
#define HOME_WORK_CHEES2


void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << " ¬ведите размер доски:"; cin >> n;
#ifdef CHESS1
	setlocale(LC_ALL, "C");
	n++;
	for (int i = 0; i <= n; i++)
	{
		cout << "\t\t";
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << DOWN_LEFT_ANGLE;
			else if (i == n && j == n)cout << DOWN_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << UP_BOTTOM;
			else if (j == 0 || j == n)cout << SIDE;
			else cout << ((i + j) % 2 == 0 ? WHITE_BOX : BLACK_BOX);
			// ((i + j) % 2 == 0)?cout << WHITE_BOX << WHITE_BOX : cout << "  ";

		}
		cout << endl;
	}
#endif //  CHESS1
#ifdef HOME_WORK_CHEES1
	setlocale(LC_ALL, "C");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "\t\t";
			if (i % 2 == 0)
			{
				for (int j = 0; j < n; j++)
				{
					if (j % 2 == 0)
						for (int j = 0; j < n; j++)cout << WHITE_BOX;
					else
						for (int j = 0; j < n; j++)cout << "  ";
				}
				cout << endl;
			}
			else
			{
				for (int j = 0; j < n; j++)
				{
					if (j % 2 == 0)
						for (int j = 0; j < n; j++)cout << "  ";
					else
						for (int j = 0; j < n; j++)cout << WHITE_BOX;
				}
				cout << endl;
			}
		}
	}
	cout << "\n\n";
#endif // HOME_WORK_CHEES1

#ifdef HOME_WORK_CHEES2
	setlocale(LC_ALL, "C");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "\t\t";
			if (i % 2 == 0)
			{
				for (int j = 0; j < n; j++)
				{
					if (j % 2 == 0)
						for (int j = 0; j < n; j++)cout << "* ";
					else
						for (int j = 0; j < n; j++)cout << "  ";
				}
				cout << endl;
			}
			else
			{
				for (int j = 0; j < n; j++)
				{
					if (j % 2 == 0)
						for (int j = 0; j < n; j++)cout << "  ";
					else
						for (int j = 0; j < n; j++)cout << "* ";
				}
				cout << endl;
			}
		}
	}
#endif // HOME_WORK_CHEES2


	
}