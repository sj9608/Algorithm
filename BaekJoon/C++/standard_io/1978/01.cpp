#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
	int N;
	int cnt = 0;
	bool is_prime = false;

	cin >> N;
	int *input = (int *)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++)
		cin >> input[i];

	// 모든 입력값에 대해 검사해야함
	for (int i = 0; i < N; i++)
	{
		if (input[i] != 1)
		{
		// 해당 인풋의 sqrt까지만 검사
			for (int j = 1; j <= sqrt(input[i]); j++)
			{
				if (input[i] % j == 0 && j != 1)
				{
					is_prime = false;
					break;
				}
				else
					is_prime = true;
			}
			if (is_prime)
				cnt++;
			is_prime = false;
		}
	}
	cout << cnt << '\n';

	return 0;
}
