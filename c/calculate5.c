#include <stdio.h>

int main() {
	int a, b, add, mul;
	puts("숫자 두개를 입력하세요");
	scanf ("%d %d", &a, &b);
	add = a / b;
	mul = a % b;
	printf ("a = %d, b = %d, 나누기 = %d, 몫 = %d\n", a, b, add, mul);
	return 0;
}

