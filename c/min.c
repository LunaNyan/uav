#include <stdio.h>

int main() {
	int a, b;
	a = 0;
	b = 2147483647;
	printf("숫자 1개를 입력하시오 : ");
	scanf("%d", &a);
	while(a!=0){
		if (a <= b) {
			b = a;
		}
		printf("숫자 1개를 입력하시오 : ");
		scanf("%d", &a);
	}
	printf("min : %d\n", b);
	return 0;
}
