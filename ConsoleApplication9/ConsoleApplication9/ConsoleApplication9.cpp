#include<stdio.h>
#include<string.h>
#include<math.h>

void sum_A(int n);
int i, n, sum = 0;
double su = 0.0;

int main(void) {

	sum_A(5);
	return 0;
}

void sum_A(int n) {
	if (n > 1) {
		sum_A(n / 2);
		sum_A(n / 2);
	}
	printf("*");
}

	