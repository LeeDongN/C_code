#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
int main(void)
{
	int n = 1;
	int k = 1;
	
	
	while (n <= 7) {
		int s = 7;
		int i = 1;

		while (i <= n) {
			printf("%d", i);
			i++;
		}
		while (s > n) {
			printf("*");
			s--;
		}
		printf("\n");
		n++;
	}
	while (k <= 6) {
		int l = 6;
		int m = 1;

		while (l<=k) {
			printf("%d", l);
			l--;
		}
		while (m > k) {
			printf("*");
			m--;
		}
		printf("\n");
		k++;
	}
	
	return 0;
	}
	*/
/*
int main(void) {
	int first;
	int second;
	int sum = 0;
	int i;

	printf("시작정수\n");
	scanf_s("%d", &first);

	printf("종료정수\n");
	scanf_s("%d", &second);

	for (i = first; i <= second; i++) {
		sum += i;
		
	}
	printf("%d", sum);
	return 0;
}*/

int main(void) {
	int i;
	int k;
	int x;
	int m, n;

	printf("정수입력");
	scanf_s("%d", &k);


	for (i = 1; i <= k; i++) {
		for (x = 1; x <= i; x++) {
			printf("%d", x);
		}
		printf("\n");

		
		}
for (m = k-1; m >= 0; m--) {
			for (n = 1; n <= m; n++) {
				printf("%d", n);
			}
			printf("\n");
	}return 0;
}