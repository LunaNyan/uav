#include <stdio.h>

int main() {
	int a, b, c, d, i;
	a = 1;
	b = 1;
	d = 2;
	printf("a = %d, b = %d", a, b);
	for(i = 3; i <= 20; i++) {
		c = a + b;
		d = d + c;
		//printf("%d\n", c);
		//a = b;
		b = c;
	}
	printf("\n%d\n", d);
	puts("the end");
	return 0;
}

