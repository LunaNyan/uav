#include <stdio.h>

int main() {
	char i, score[3];
	score[0] = 90;
	score[1] = 100;
	score[2] = 95;
	for (i = 0; i < 3; i++) {
		printf("%d ", score[i]);
	}
	printf("\n");
	return 0;
}
