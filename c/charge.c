#include <stdio.h>

int main() {
	//initialize
	int charge = 5000;
	int age = 0;
	//interface
	printf("나이 입력 : ");
	scanf("%d", &age);
	//logic  module
	if(age < 8) {
		charge = 0;
	} else if (age < 60) {
		charge = charge;
	} else {
		charge = charge * 0.5;
	}
	//output module
	printf("%d원 나왔습니다\n", charge);
	//end
	return 0;
}
