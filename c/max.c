#include <stdio.h>

int main() {
	int a, max;
	a = 0;
	max = 0;
	printf("숫자 1개를 입력하시오 : ");
	scanf("%d", &a);
	while(a!=0){
		if (a > max) {
			max = a;
		}
		printf("숫자 1개를 입력하시오 : ");
		scanf("%d", &a);
	}
	printf("max : %d\n", max);
	return 0;
}
