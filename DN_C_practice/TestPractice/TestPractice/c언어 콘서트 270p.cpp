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
		printf("%d번째 강의에 출석하셨나요<출석은: 1, 결석은: 0\n", i + 1);
		scanf_s("%d", &proffesorAns);

		if (proffesorAns == 1)
			attendNumber[i] = 1;

		else
			attendNumber[i] = 0;

		sum += attendNumber[i];
	}

	average = (sum * 100)/16;

	if (average <= 70)
		printf("수업 일수 부족입니다 < %f% >", average);

	else
		printf("수강 성공하셨습니다.");

	return 0;
}