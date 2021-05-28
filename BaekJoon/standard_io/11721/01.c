/// 11721 열 개씩 끊어 출력하기
#include <stdio.h>

int main(void)
{
	char input[100] = {0, };
	int i = 0;
	scanf("%s", input);
	while (input[i] != 0)
	{
		printf("%c", input[i++]);
		if (i % 10 == 0)
			puts("");
	}
}

/*
int main(void)
{
	char input[11];
	while (scanf("%10s", input) != -1) // 입력 받고(10글자가 넘으면 다음 입력으로 취급) EOF가 아니면 scanf는 0보다 큰 수를 반환함
		printf("%s\n", input); // 입력받은 input 버퍼(최대 10개) 를 출력함
	return 0;
}
*/
