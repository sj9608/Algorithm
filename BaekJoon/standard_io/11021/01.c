#include <stdio.h>

int		main(void)
{
	int a, b;
	int cnt, i;

	i = 1;
	scanf("%d", &cnt);
	while (cnt > 0)
	{
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i++, a + b);
		cnt--;
	}
	return (0);
}
