#include <stdio.h>

int main() {
	char i = 10;
	while (i >= 1) {
		printf("%d\t", i);
		i = i - 1;
	}
	puts("\n종료");
	return 0;
}
