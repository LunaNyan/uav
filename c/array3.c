#include <stdio.h>

int main() {
	char i, a[10];
	for (i = 1; i <= 10; i++)
		a[i-1] = i;
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}

