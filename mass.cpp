
#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	setlocale(0, "");
	const int rows = 3, columns = 5;
	float numbers[rows][columns];

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cin >> numbers[i][j];
		}
	}
	cout << endl;

	

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << numbers[i][j] << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < 3; ++i) {
			double sum = 0;
			for (int j = 0; j < 5; ++j) {
				sum += numbers[i][j];
			}
			double sa = sum / 5;
			cout << "Среднее арифметическое элементов строки " << i << ": " << sa << endl;
		}
	return 0;

}

