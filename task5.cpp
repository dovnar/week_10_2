#include <iostream>

using namespace std;

int luckyNumber(int number)
{
	int result = 0;
	int number1, number2;
	number1 = number / 100000;
	number1 += number % 100000 / 10000;
	number1 += number % 10000 / 1000;
	number2 = number % 10;
	number2 += number % 100 / 10;
	number2 += number % 1000 / 100;
	if (number1 == number2)
	{
		cout << "lucky number ";
		return result;
	}
	else
	{
		cout << "not a lucky number";
		return result;
	}
}

int main()
{
	int result;
	int number;
	cout << "enter the six- digit number for verification = ";
	cin >> number;
	result = luckyNumber(number);
	cout << endl;
	return 0;
}