#include <iostream>
#include <algorithm>

using namespace std;

int ft_fib(int n, int n_1, int n_2)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return n_2;
	return ft_fib(n - 1, n_2, n_1 + n_2);
}


int main(void)
{
	int x;
	cin >> x;

	cout << ft_fib(x, 0, 1) << "\n";
	return (0);
}
