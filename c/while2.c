#include <stdio.h>

int main() {
	int i = 1;
	int count = 1;
	while (count<=10) {
		printf("%d, ", count);
		i = i + i;
		printf("%d\n", i);
		count = count + 1;
		}
	return 0;
}
