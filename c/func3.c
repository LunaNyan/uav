#include <stdio.h>

int power(int a, int b) {
	int i, c = 1;
	for (i=1; i<=b; i++) {
		c = c * a;
	}
	return c;
}

int main() {
	int a;
	a = power(3, 4);
	printf("%d\n", a);
	return 0;
}

