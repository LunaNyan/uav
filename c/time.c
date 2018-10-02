#include <stdio.h>

int main() {
	int s, m, h, s2;
	printf ("초 입력 : ");
	scanf ("%d", &s);
	m = s / 60;
	h = s / 3600;
	s2 = s % 60;
	printf ("%d %d %d\n", h, m, s2);
	return 0;
}
