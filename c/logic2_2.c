#include <stdio.h>

int main() {
	//initialize
	int a = 0;
	int b = 0;
	int c = 0;
	//interface
	printf("숫자 두개를 입력하세요 (예시 : 1 2) : ");
	scanf("%d %d", &a, &b);
	printf("A는 %d(이)고 B는 %d이며 ", a, b);
	//logic
	if(a>b)
		c = a - b;
	else
		c = b - a;
	printf("A랑 B의 차는 %d 입니다\n", c);
	//end
	return 0;
}
