#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Russian");
	int** a;
	int i, j, n, m, k = 0, k1 = 0, x;
	printf("����������,������� ������� �������� n �� m: ");
	scanf_s("%d", &n);
	scanf_s("%d", &m);
	if (n <= 1 || m <= 1) {
		printf("���������� ������� �������");
		return 1;
	}
	// ���� ��������� �������


	a = (int**)malloc(n * sizeof(int*)); // ��������� ������ �� �������� ������
	for (i = 0; i < n; i++) {

		a[i] = (int*)malloc(m * sizeof(int)); // ��������� ������ ��� �������� ������ �������� �� ���������
		for (j = 0; j < m; j++) {
			printf("a[%d][%d] = ", i, j);
			fflush(stdin);
			scanf_s("%d", &a[i][j]);
		}
	}
	printf("\n");
	// ����� �������
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d\t ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	//���� � ����� k � k1
	if (1 <= k || k <= n) {
		printf("�������� ����� k :");
		scanf_s("%d", &k);
		k = k - 1; //��� ��� ���� ���������� � 1 ,� �� � 0,��� ���� ��� ��������,�� �������� 1
	}
	else printf("�������������� �������");

	if (1 <= k1 || k1 <= n) {
		printf("�������� ����� k1 :");
		scanf_s("%d", &k1);
		k1 = k1 - 1;
	}
	else printf("�������������� �������");

	printf("\n");


	if (k == k1 + 1) //���� �� � ��� ���������
		printf("������ ����� �� ���������� �����");

	else {
		for (int j = 0; j < m; j++) {
			int temp = a[k][j];
			a[k][j] = a[k1 + 1][j];
			a[k1 + 1][j] = temp;
		}

	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d\t ", a[i][j]);
		}
		printf("\n");
	}

	free(a);

	return 0;


}