#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, k;
	cin >> n >> k;

	int *input = new int[n];

	for (int i = 0; i < n; i++)
		cin >> input[i];

	// 정렬
	sort(input, input + n);

	int ans = 0;
	while (n--)
		if (input[n] <= k)
		{
			k -= input[n];
			ans++;
			n++;
		}

	cout << ans << '\n';

	return 0;
}
