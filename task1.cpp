#include <iostream>
#include <locale.h>

using namespace std;

int pow(int number, int pow)
{
	int result = 1;
	for (int i = 0; i < pow; i++)
	{
		result *= number;
	}
	return result;
}

int main()
{
	setlocale(LC_ALL, "rus");

	int result;
	int number;
	int pow1;

	cout << "введите число = ";
	cin >> number;
	cout << "введите степень = ";
	cin >> pow1;

	result = pow(number, pow1);
	cout << number << " ^ " << pow1 << " = " << result << endl;
	
	return 0;
}