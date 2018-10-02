#include <stdio.h>

int main() {
	int cm, m, km;
	printf ("cm 단워의 길이를 입력하세요 : ");
	scanf ("%d", &cm);
	m = cm / 100;
	km = m / 1000;
	printf ("%d 를 입력받았습니다\n", cm);
	printf ("m : %d, km : %d\n", m, km);
	return 0;
}
