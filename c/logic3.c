#include <stdio.h>

int main() {
	//initialize
	int a = 0;
	//interface
	printf("숫자 하나를 입력하세요 : ");
	scanf("%d", &a);
	//logic module
	if(a<0)
		puts("음수\n");
	else if(a>0)
		puts("양수\n");
	else
		puts("0\n");
	//end
	return 0;
}
