#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool ft_check(string s)
{
	int len = s.length();
	stack<char> input;

	for (int i = 0; i < len; i++)
	{
		char c = s[i];
		if (c == '(')
			input.push(c);
		else
		{
			if (!input.empty())
				input.pop();
			else
				return false;
		}
	}
	return input.empty();
}

int main(void)
{
	int t;
	string str;

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> str;
		if (ft_check(str))
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}
