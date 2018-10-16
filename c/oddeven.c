#include <stdio.h>

int main() {
	//initialize
	int a = 0;
	//interface
	printf("정수를 입력하세요 : ");
	scanf("%d", &a);
	//logic module
	if (a % 2 == 1) {
		puts("홀수");
	} else {
		puts("짝수");
	}
	//end
	return 0;
}

