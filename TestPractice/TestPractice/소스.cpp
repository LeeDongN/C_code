#include<stdio.h>
#define CLASS 16

int main(void)
{
	int i;
	int attendNumber[CLASS];
	int proffesorAns;
	int sum = 0;
	double average;
	

	for (i = 0; i < CLASS; i++)
	{
		printf("%d��° ���ǿ� �⼮�ϼ̳���<�⼮��: 1, �Ἦ��: 0\n", i + 1);
		scanf_s("%d", &proffesorAns);

		if (proffesorAns == 1)
			attendNumber[i] = 1;

		else
			attendNumber[i] = 0;

		sum += attendNumber[i];
	}

	average = (sum * 100)/16;

	if (average <= 70)
		printf("���� �ϼ� �����Դϴ� < %f% >", average);

	else
		printf("���� �����ϼ̽��ϴ�.");

	return 0;
}