#include <iostream>
#include <string>

using namespace std;

bool ft_check(string s)
{
	int len = s.length();
	int lc = 0;

	for (int i = 0; i < len; i++)
	{
		if (s[i] == '(')
			lc++;
		else
			lc--;
		if (lc < 0)
			return false;
	}
	if (lc == 0)
		return true;
	else
		return false;
}
int main(void)
{
	int t;
	string s;
	
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> s;
		if (ft_check(s))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	
	return 0;
}
