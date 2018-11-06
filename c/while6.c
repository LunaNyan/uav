#include <stdio.h>

int main() {
	int i = 0;
	char count = 1;
	/*
	while (count <= 100) {
	i = i + count;
	count = count + 1;
	}
	 */
	while (count <= 100) {
		i = i + count;
		count = count + 2;
	}
	printf("%d", i);
	return 0;
}
