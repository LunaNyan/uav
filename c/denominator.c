#include <stdio.h>

int main() {
	int n = 0;
	int i = 1;
	printf("숫자 하나를 입력하세요 : ");
	scanf("%d", &n);
	while(i <= n) {
		if (n % i == 0) {
			printf("%d\t", i);
		}
		i++;
	}
	printf("\n완료\n");
	return 0;
}
