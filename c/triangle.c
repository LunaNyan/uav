#include <stdio.h>

int main() {
	int i, j, inp;
	printf ("얼마나 큰 삼각형을 만드시겠습니까? : ");
	scanf("%d", &inp);
	for(i=1; i <= inp; i++) {
		for(j =  1; j <= i; j++) {
			if(j <= 9 && inp >= 10) {
				printf("%d  ", j);
			} else {
				printf("%d ", j);
			}
		}
		printf("\n");
	}
	return 0;
}
