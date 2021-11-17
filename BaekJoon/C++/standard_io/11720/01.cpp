#include <iostream>

using namespace std;

int main(void)
{
	int N;
	int sum = 0;
	cin >> N;
	char arr[N];

	cin >> arr;
	for (int i = 0; i < N; i++)
		sum += arr[i] - '0';
	cout << sum;

	return (0);
}
