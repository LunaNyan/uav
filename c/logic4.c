#include <stdio.h>

int main() {
	//initialize
	int a = 0;
	int b = 0;
	int c = 0;
	//interface
	puts("\x1b[1;31m무\x1b[1;32m지\x1b[1;33m개\x1b[1;34m색\x1b[1;35m총\x1b[1;36m공\x1b[1;0m격");
	printf("\x1b[0;0m숫자 3개를 입력하세요 (예 : 1 2 3) : ");
	scanf("%d %d %d", &a, &b, &c);
	//logic module
	if (a > b) {
		if (a > c)
			printf("\x1b[31mA를 출력합니다 : %d\n", a);
		else
			printf("\x1b[32mC를 출력합니다 : %d\n", c);
	} else {
		if (b > c)
			printf("\x1b[33mB를 출력합니다 : %d\n", b);
		else
			printf("\x1b[32mC를 출력합니다 : %d\n", c);
	}
	//end
	return 0;
}
