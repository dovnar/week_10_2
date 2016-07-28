#include <iostream>
#include <locale.h>

using namespace std;

long perfect(long range)
{
	long result = 0;
	for (long i = 1; i < range; i++)
	{
		if (range % i == 0)
		{
			result += i;
		}
	}
	return result;
}

int main()
{
	setlocale(LC_ALL, "rus");

	long result;
	long range;

	cout << "введите минимальное число = ";
	cin >> range;
	
	for (long i = 1; i < range; i++)
	{
		result = perfect(i);
		if (i == result)
		{
			cout << "совершенное число = " << result << endl;
		}
	}
	return 0;
}