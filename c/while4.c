#include <stdio.h>

int main() {
	int i = 0;
	int count = 1;
	char tc_count = 10;
	while (count <= 100) {
		while (tc_count >= 1) {
			printf("%d\t", i);
			i = i + count;
			count++;
			tc_count--;
		}
	puts("\n");
	tc_count = 10;
	}
	puts("\n종료");
	return 0;
}
