#include <stdio.h>

int main() {
	//initialize
	int a = 0;
	//interface
	printf("feed me with a number : ");
	scanf("%d", &a);
	//logic module
	if(a<0)
		puts("it's negative\n");
	else if(a>0)
		puts("it's positive\n");
	else
		puts("it's a 0\n");
	//end
	return 0;
}
