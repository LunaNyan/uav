#include <stdio.h>

int main()
{
	int a;

	while(1)
	{
		scanf("%d", &a);
		if (a > 0)
			break;
		else
		{
			puts("not a positive integer or error encountered.\nmake sure that your input is correct.");
			continue;
		}
	}
	
	if (a%2 == 0)
		printf("even\n");
	else if (a%2 == 1)
		printf("odd\n");
	else
		puts("error encountered");
	
	return 0;
}
