#include<stdio.h>
#include<string.h>
#include<conio.h>

int main(void)
{
	char solution[100] = "meet at midnight";
	char answer[80] = "____ __ ________";
	int i, ch;

	while (1) {
		printf("\n문자열을 입력하시오: %s", answer);
		printf("글자를 추측하시오: ");
		ch = _getch();

		for (i = 0; solution[i] != NULL; i++)
		{
			if (solution[i] == ch)
			{
				answer[i] = ch;
			}
		}
		if (strcmp(solution, answer) == 0) {
			printf("\n축하합니다! %s", solution);
			break;
		}

	}
}

	
