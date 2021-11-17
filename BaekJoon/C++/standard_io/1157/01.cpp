#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
	string str;
	int count[26] = {0, };
	int max = 0;
	int flag = 0;
	int prntIndex = 0;

	cin >> str;
	transform(str.begin(), str.end(), str.begin(), (int(*)(int))toupper);
	
	for (int i = 0; i < str.length(); i++)
	{
		count[str[i] - 'A']++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (max < count[i])
		{
			max = count[i];
			flag = 0;
			prntIndex = i;
		}
		if (max == count[i])
		{
			flag++;
		}
	}
	if (flag > 1)
	{
		cout << '?';
	}
	else
		cout << (char)(prntIndex + 'A');

	return 0;
}
