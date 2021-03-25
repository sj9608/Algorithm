#include <stdio.h>

void	scan_then_sum()
{
	int a, b;
	char c;

	scanf("%d %c %d", &a, &c, &b);
	printf("%d\n", a + b);
}
int		main(void)
{
	int cnt;

	scanf("%d", &cnt);
	while (cnt > 0)
	{
		scan_then_sum();
		cnt--;
	}
    return 0;
}
