#include <stdio.h>

int main() {
	//initialize
	int a = 0;
	//interface
	printf("나이를 입력하세요 : ");
	scanf("%d", &a);
	//logic module
	if (a>=8 && a<60)
		puts("유료\n");
	else
		puts("무료\n");
	//end
	return 0;
}

