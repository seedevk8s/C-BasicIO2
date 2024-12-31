#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double a;
	printf("실수를 입력하세요: ");

	if (scanf("%lf", &a) != 1) {
		printf("입력 오류가 발생했습니다.\n");
		// 입력 버퍼에 남은 잘못된 문자열을 비워줌 (MSVC 한정)
		fflush(stdin);
		return 1;
	}
	printf("입력한 숫자는 %.2f입니다. \n", a);
	system("pause");
	return 0;
}
