#include <stdio.h>

int main() {
	int n1 = 0;
	int n2 = 0;
	int i = 1;
	printf("숫자 두개를 입력하세요 (예 : 1 2) : ");
	scanf("%d %d", &n1, &n2);
	while (i <= n1) {
		if(n1 % i == 0 && n2 % i == 0) {
			printf("%d\t", i);
		}
		i++;
	}
	printf("\n완료\n");
	return 0;
}

