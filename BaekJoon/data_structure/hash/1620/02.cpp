#include <iostream>
#include <unordered_map>

using namespace std;

int N, M;
unordered_map<string ,int> m;
string str[1000001];
string temp;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;
	for (int i = 1; i <= N; i++)
	{
		cin >> temp;
		str[i] = temp;
		m.insert(make_pair(temp, i));
	}

	int n;
	for (int i = 1; i <= M; i++)
	{
		cin >> temp;
		// 숫자 문자 판별
		if (isdigit(temp[0]))
		{
			n = stoi(temp);
			cout << str[n] << '\n';
		}
		else
		{
			cout << m[temp] << '\n';
		}
	}

	return 0;
}
