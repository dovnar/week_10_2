#include <iostream>
#include <locale.h>

using namespace std;

int sum(int numberMin, int numberMax)
{
	int result = 0;
	int number = numberMin + 1;
	for (; number < numberMax; number++)
	{
		result += number;
	}
	return result;
}

int main()
{
	setlocale(LC_ALL, "rus");

	int result;
	int numberMin, numberMax;

	cout << "введите минимальное число = ";
	cin >> numberMin;
	cout << "введите максимальное число = ";
	cin >> numberMax;

	result = sum(numberMin, numberMax);

	cout << "сумма чисел из диапазона между ними = " << result << endl;
	return 0;
}