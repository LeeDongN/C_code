#include<stdio.h>
#include<time.h>
#include<conio.h>

int i;
char a[1000];
char mes[1000];

char message(char a) {
	printf("메시지를 입력하세요");
	gets_s(mes, 1000);
	return a;
}

/*int main(void) {
	for (i = 0; i < message(a); i++) {
		printf("%c", message(a));
	}
}*/