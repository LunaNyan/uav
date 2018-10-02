#include <stdio.h>

int main() {
	int cm, m, cm2;
	printf ("cm 단워의 길이를 입력하세요 : ");
	scanf ("%d", &cm);
	m = cm / 100;
	cm2 = cm % 100;
	printf ("%d 를 입력받았습니다\n", cm);
	printf ("m : %d, cm2 : %d\n", m, cm2);
	return 0;
}
