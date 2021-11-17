#include <iostream>
using namespace std;

int main(void)
{
	int test, repeats;
	string org;
	cin >> test;
	for (int i = 0; i < test; i++)
	{
		cin >> repeats >> org;
		for (int j = 0; j < org.length(); j++)
			for (int k = 0; k < repeats; k++)
				cout << org[j];
		cout << '\n';
	}

	return 0;
}
