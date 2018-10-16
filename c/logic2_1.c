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
		printf("B가 더 작습니다 : ");
		printf("%d\n", b);
	} else {
		printf("A가 더 작습니다 : ");
		printf("%d\n", a);
	}
	//end
	return 0;
}
