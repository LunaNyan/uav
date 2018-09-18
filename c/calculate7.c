#include <stdio.h>

int main() {
	int a, b, mul;
	printf("밑변과 높이를 입력하세요 : ");
	scanf ("%d %d", &a, &b);
	mul = a * b / 2;
	printf ("a = %d, b = %d, 넓이 = %d\n", a, b, mul);
	return 0;
}

