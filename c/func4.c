#include <stdio.h>

int max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
	}
	
int main() {
	int a, b, r;
	printf ("정수 (2개) : ");
	scanf ("%d %d", &a, &b);
	r = max(a, b);
	printf ("큰 수 : %d\n", r);
	return 0;
}
