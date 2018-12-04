#include <stdio.h>

int main() {
	int a[10] = {26, 27, 39, 63, 57, 75, 11, 76, 80, 18};
	int key, cnt;
	printf("key : ");
	scanf("%d", &key);
	for (cnt = 0; cnt < 10; cnt++) {
		if (a[cnt] == key) {
			printf("%d에서 탐색 성공\n", cnt);
			break;
		}
	}
	if (cnt == 10) {
		printf("something went wrong\n");
	}
	return 0;
}

