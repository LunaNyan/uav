#include <stdio.h>

int main() {
	//initialize
	int a = 0;
	int b = 0;
	//interface
	printf("숫자 두개를 입력하세요 (예시 : 1 2) : ");
	scanf("%d %d", &a, &b);
	printf("A는 %d(이)고 B는 %d인데 ", a, b);
	//logic
	if (a>b) {
		printf("A가 더 큽니다 : ");
		printf("%d\n", a);
	} else {
		printf("B가 더 큽니다 : ");
		printf("%d\n", b);
	}
	//end
	return 0;
}
