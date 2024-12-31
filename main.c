#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double a;

	while (1) {
		printf("실수를 입력하세요 (0을 입력하면 종료): ");

		// 실수(double)를 입력받되, 정상적으로 한 개를 읽지 못하면 에러 처리
		int result = scanf("%lf", &a);

		if (result == 1) {
			// 정상 입력: 0 체크 후 0이면 종료
			if (a == 0) {
				printf("프로그램을 종료합니다.\n");
				break;
			}
			// 정상 입력한 경우 출력
			printf("입력한 숫자는 %.2f입니다. \n", a);
		}
		else {
			// 입력 오류: 잘못된 입력이 있을 경우 에러 메시지 출력 후 입력 버퍼 비우기
			printf("입력 오류입니다. 다시 입력하세요.\n");

			int c;
			while ((c = getchar()) != '\n' && c != EOF) {
				// 아무것도 안하고 소진만 함
			}

			// 입력 버퍼 비우기 후 다시 입력 받기
			continue;
		}
	}

		system("pause");
		return 0;
}
