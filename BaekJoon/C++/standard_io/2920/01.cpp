#include <iostream>
using namespace std;

int main()
{
	int input[8] = { 0, };
	int asc = 0, desc = 0;

	for (int i = 0; i < 8; i++)
		cin >> input[i];

	for (int i = 0; i < 8; i++)
		if (input[i] == i + 1)
			asc++;
		else if (input[i] == 8 - i)
			desc++;

	if (asc == 8)
		cout << "ascending";
	else if (desc == 8)
		cout << "descending";
	else
		cout << "mixed";

	return 0;
}
