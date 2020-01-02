#include<stdio.h>

int main(void) {
	int in;

	while (1) {
		
		printf("원하는 숫자를 넣으시오(0~127)\n");
		scanf_s("%d", &in);

		if (in == 128) {
			break;
		}

		printf("'%d' = %c\n", in, in);


	}
}