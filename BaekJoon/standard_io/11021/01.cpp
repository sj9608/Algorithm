#include <iostream>
using namespace std;

int		main(void)
{
	int a, b;
	int cnt, i;

	i = 1;
	cin >> cnt;
	while (cnt > 0)
	{
		cin >> a >> b;
		cout << "Case #" << i++ << ": " << a + b << "\n";
		cnt--;
	}
	return (0);
}
