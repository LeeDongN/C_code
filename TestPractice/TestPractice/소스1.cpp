#include<stdio.h>


int main(void)
{
	int number[6] = {1, 20, 30, 15, 55, 3 };
	int i;
	int serch;
printf("[ ");
	for (i = 0; i < 6; i++)
	{
		printf("%d, ", number[i]);
		}
printf(" ]\n");

	printf("Ž���� ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &serch);

	for (i = 0; i < 6; i++)
	{
		if (serch == number[i]) {
			printf("Ž�� ���� �ε��� = %d", i);
			break;
		}
	}
	return 0;

}