#include <stdio.h>

int max(int a, int b, int c) {
	int m;
	if (a > b) {
		if (a > c) {
			m = a;
		} else {
			m = c;
		}
	} else {
		if (b > c) {
			m = b;
		} else {
			m = c;
		}
	}
	return m;
	}

int main() {
	int z, x, c;
	printf("정수 (3개) : ");
	scanf("%d %d %d", &z, &x, &c);
	printf("%d\n", max(z, x, c));
	return 0;
}

