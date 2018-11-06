#include <stdio.h>

int main() {
	int i = 0;
	int count = 1;
	short goal = 0;
	char verbose_bool = 0;
	char tc_count = 10;
	printf("어디까지 합을 구하시겠습니까?  : ");
	scanf("%hd", &goal);
	printf("합 계산 과정을 출력하시겠습니까? (예 : 1, 아니오 : 0) : ");
	scanf("%hhd", &verbose_bool);
	while (count <= goal) {
		while (tc_count >= 1) {
			if (verbose_bool > 0) {
			printf("%d\t", i);
			tc_count--;
			i = i + count;
			count++;
		}
	puts("\n");
	tc_count = 10;
	}
	printf("%d\n종료\n", i);
	return 0;
}
