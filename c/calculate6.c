#include <stdio.h>

int main() {
	int a, b, mul;
	printf("가로와 세로를 입력하세요 : ");
	scanf ("%d %d", &a, &b);
	mul = a * b;
	printf ("a = %d, b = %d, 넓이 = %d\n", a, b, mul);
	return 0;
}

