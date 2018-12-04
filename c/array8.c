#include <stdio.h>

int main() {
	int i, max, a[10];
	max = 0;
	for (i = 1; i <= 9; i++) {
		printf ("숫자를 입력하세요 (%d / 9) : ", i);
		scanf("%d", &a[i]);
	}
	for (i = 1; i <= 9; i++) {
		printf ("%d ", a[i]);
	}
	printf("\n");
	for (i = 1; i <= 9; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	printf ("최댓값 : %d\n", max);
	return 0;
}
