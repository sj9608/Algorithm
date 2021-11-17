#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N, K;
	cin >> N >> K;

	queue<int> que;
	for(int i = 0; i < N; i++)
	{
		que.push(i+1);
	}
	cout << '<';
	while (que.size() - 1)
	{
		for (int i = 0; i < K - 1; i++)
		{
			que.push(que.front());
			que.pop();
		}
		cout << que.front() << ", ";
		que.pop();
	}
	cout << que.front() << '>';
	return 0;
}
