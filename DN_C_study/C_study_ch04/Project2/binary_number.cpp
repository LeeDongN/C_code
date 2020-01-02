#include<stdio.h>

int main(void) {
	int number = 3;
	int change1, change2;
	int two;

	change1 = number << 3;
	change2 = change1 >> 2;

	printf("3 x 8 / 4 = %d\n", change2);
	
	for (int i = 31; i >= 0; i--) {
		two = 1 << i;
		printf("%d", two & change2 ? 1 : 0);

		if (i % 8 == 0)
			printf(" ");
	}
}