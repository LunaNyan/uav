#include <stdio.h>

int main() {
	int a, b, c, i;
	a = 1;
	b = 1;
	printf("a = %d, b = %d", a, b);
	for(i = 3; i <= 20; i++) {
		c = a + b;
		printf("%d\n", c);
		a = b;
		b = c;
	}
	puts("the end");
	return 0;
}

