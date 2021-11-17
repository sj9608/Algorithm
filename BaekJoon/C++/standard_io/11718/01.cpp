#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string a;

	while (true)
	{
		getline(cin, a);
		if (a == "\0")
			break;
		cout << a << endl;
	}
	return (0);
}
