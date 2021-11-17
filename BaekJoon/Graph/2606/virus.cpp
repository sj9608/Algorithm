#include <iostream>
#include <vector>
using namespace std;

vector<int> a[101];
bool check[101];
int cnt;

void dfs(int x)
{
	check[x] = true;
	for (int i = 0;i < a[x].size(); i++)
	{
		int y = a[x][i];
		if (!check[y])
		{
			dfs(y);
			cnt++;
		}
	}
}

int main(void)
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int u, v;
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	dfs(1);
	cout << cnt << '\n';

	return 0;
}
