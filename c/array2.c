#include <stdio.h>

int main() {
	char s[3][2] = {{90, 95}, {80, 85}, {70, 75}};
	int i, j;
	for(i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d ", s[i][j]);
		}
		printf("\n");
	}
	printf("The end\n");
	return 0;
}
