#include <stdio.h>

int main()
{
	int a;

	while(1)
	{
		a = 0;
		scanf("%d", &a);
		if (a > 0)
			break;
		else if (a == 0)
		{
			puts("0은 입력할 수 없습니다");
			continue;
		}
		else if (a < 0)
		{
			puts("양수 정수가 아니거나 2147483647보다 큰 값은 입력할 수 없습니다");
			continue;
		}
	}
	
	if (a%2 == 0)
		printf("짝수\n");
	else if (a%2 == 1)
		printf("홀수\n");
	else
		puts("오류가 발생했습니다");
	
	return 0;
}
