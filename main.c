#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double a;

	while (1) {
		printf("�Ǽ��� �Է��ϼ��� (0�� �Է��ϸ� ����): ");

		// �Ǽ�(double)�� �Է¹޵�, ���������� �� ���� ���� ���ϸ� ���� ó��
		int result = scanf("%lf", &a);

		if (result == 1) {
			// ���� �Է�: 0 üũ �� 0�̸� ����
			if (a == 0) {
				printf("���α׷��� �����մϴ�.\n");
				break;
			}
			// ���� �Է��� ��� ���
			printf("�Է��� ���ڴ� %.2f�Դϴ�. \n", a);
		}
		else {
			// �Է� ����: �߸��� �Է��� ���� ��� ���� �޽��� ��� �� �Է� ���� ����
			printf("�Է� �����Դϴ�. �ٽ� �Է��ϼ���.\n");

			int c;
			while ((c = getchar()) != '\n' && c != EOF) {
				// �ƹ��͵� ���ϰ� ������ ��
			}

			// �Է� ���� ���� �� �ٽ� �Է� �ޱ�
			continue;
		}
	}

		system("pause");
		return 0;
}
