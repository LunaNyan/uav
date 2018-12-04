#include <stdio.h>

int main() {
	int n, a, i, b[20];
	printf("10진수 : ");
	scanf("%d", &n);
	a = 0;
	while(n!=0) {
		b[a] = n%2;
		a = a+1;
		n = n/2;
	}
	for(i=a-1; i>0; i--) {
		printf("%d", b[i]);
	}
	printf("\n");
	return 0;
}

