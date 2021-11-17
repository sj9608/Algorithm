#include <stdio.h>

void	print_sum(int a, int b)
{
	printf("%d", a + b);
}

int		main(void)
{
	int a, b;

	scanf("%d %d", &a, &b);
	print_sum(a, b);

	return (0);
}
