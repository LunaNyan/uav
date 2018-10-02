#include <stdio.h>

int main() {
	int a, b, c, mul, avg;
	printf ("점수 1 2 3 입력 : ");
	scanf ("%d %d %d", &a, &b, &c);
	mul = a + b + c;
	avg = mul / 3;
	printf ("%d\n", avg);
	
	//debug
	printf ("\nAdditional debug info : \na = %d, b = %d, c = %d, mul = %d, avg = %d\n", a, b, c, mul, avg);
	
	return 0;
}
