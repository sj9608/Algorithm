#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	int n, m;
	cin >> n >> m;
	
	vector<string> v;
	vector<string> v_res;

	
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		v.push_back(s);
	}

	sort(v.begin(), v.end());

	string str;
	for (int i = 0; i < m; i++)
	{
		cin >> str;

		if (binary_search(v.begin(), v.end(), str))
			v_res.push_back(str);
	}
	
	sort(v_res.begin(), v_res.end());

	cout << v_res.size() << '\n';

	for (int i = 0; i < v_res.size(); i++)
		cout << v_res[i] << '\n';

	return 0;
}

