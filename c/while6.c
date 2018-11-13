#include <stdio.h>

int main() {
	int i = 0;
	char count = 1;
	while (count <= 100) {
		if (count % 2 == 0) {
			i = i + count;
		}
		else {
			i = i - count;
		}
		count = count + 1;
	}
	printf("%d", i);
	return 0;
}
