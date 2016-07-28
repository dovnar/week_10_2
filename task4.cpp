#include <iostream>

using namespace std;

int playingСard(char number, char simvol)
{
	int result = 1;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == 0 &&
				j == 0)
			{
				char n = 218;
				cout << n;
			}
			else if (i == 0 && j == 4)
			{
				char n = 191;
				cout << n;
			}
			else if (i == 4 &&
				j == 0)
			{
				char n = 192;
				cout << n;
			}
			else if (i == 4 &&
				j == 4)
			{
				char n = 217;
				cout << n;
			}
			else if (i == 1 &&
				j == 1)
			{
				cout << number;
			}
			else if (i == 1 &&
				j == 2)
			{
				cout << simvol;
			}
			else if (i == 0|| i == 4)
			{
				char n = 196;
				cout << n;
			}
			else if (j == 0 ||
				j == 4)
			{
				char n = 179;
				cout << n;
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return result;
}

int main()
{
	int result;
	char simvol;
	char number;
	cout << "vvedite number card\nformat: 2, 3, 4, 5, 6, 7, 8, 9, 10, j, d, k, a";
	cin >> number;
	cout << "vvedite znak\nformat: *, +, &, #";
	cin >> simvol;
	result = playingСard(number, simvol);

}