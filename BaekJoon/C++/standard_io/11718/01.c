#include <stdio.h>

int main(void)
{
	char c;

	while (scanf("%c", &c) != -1)
		printf("%c", c);

	return (0);
}

/*
char c;

while ((c = getchar()) != EOF)
	putchar(c);
*/
