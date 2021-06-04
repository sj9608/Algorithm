#include <iostream>
using namespace std;

int main(void)
{
	int cont = 0;
	int t, sum = 0;
	string input;

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> input;
		for (int j = 0; j < input.length(); j++)
		{
			if (input[j] == 'O')
			{
				cont++;
				sum += cont;
			}
			else
				cont = 0;
		}
		cout << sum << '\n';
		sum = 0;
		cont = 0;
	}
	return (0);
}
