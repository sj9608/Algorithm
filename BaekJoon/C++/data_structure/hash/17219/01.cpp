#include <iostream>
#include <unordered_map>

using namespace std;

int n, m;
unordered_map<string, string> map;
string s1, s2;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	// unordered_map<string, string>::iterator it = map.begin();
	// 이터레이터 반환형이 길어서 auto를 사용함
	for (int i = 0; i < n; i++)
	{
		cin >> s1 >> s2;
		map.insert(make_pair(s1, s2));
	}

	for (int i = 0; i < m; i++)
	{
		cin >> s1;
		cout << map[s1] << '\n';
	}

	return 0;
}