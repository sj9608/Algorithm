#include <iostream>
#define power(a) a*a

using namespace std;

int main(void)
{
	int a, b, c;
	bool flag = 0;

	while (true)
	{
		scanf("%d %d %d", &a, &b, &c);

		if (a == 0 && b == 0 && c == 0)
			break;
		else if (power(a) == power(b) + power(c))
			flag = 1;
		else if (power(b) == power(a) + power(c))
			flag = 1;
		else if (power(c) == power(a) + power(b))
			flag = 1;
		
		if (flag == 1)
			cout << "right\n";
		else
			cout << "wrong\n";
		flag = 0;	
	}
	return 0;
}
