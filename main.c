#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double a;
	printf("�Ǽ��� �Է��ϼ���: ");

	if (scanf("%lf", &a) != 1) {
		printf("�Է� ������ �߻��߽��ϴ�.\n");
		// �Է� ���ۿ� ���� �߸��� ���ڿ��� ����� (MSVC ����)
		fflush(stdin);
		return 1;
	}
	printf("�Է��� ���ڴ� %.2f�Դϴ�. \n", a);
	system("pause");
	return 0;
}
