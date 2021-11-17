#include <iostream>
using namespace std;

void	scan_then_sum()
{
	int a, b;
	char c;
	cin >> a >> c >> b;
	cout << a + b << "\n";
}
int		main(void)
{
	int cnt;

	cin >> cnt;
	while (cnt > 0)
	{
		scan_then_sum();
		cnt--;
	}
    return 0;
}
