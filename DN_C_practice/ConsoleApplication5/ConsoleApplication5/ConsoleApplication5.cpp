#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
/*
int main(void) {

	int a = 1;
	int b;
	int c = 7;
	int d = 1;
	int k;
	int l;
	int m;

	while (a <= 7) {
		for (d = 1; d <= a; d++) {
			printf("%d", d);
		}
		for (c = 7; c > a; c--) {
			printf("*");
		}
		printf("\n");
		a++;
	}
	for (k = 6; k > 0; k--) {
		for (l = 1; l <= k; l++) {
			printf("%d", l);
		}
		for (m = 1; m <= (7 - k); m++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}*/
/*
int main(void) {
	double first = 1000.0;
	double pump;
	double remain = 1000.0;

	while (remain > first * 0.1) {
		printf("연료충전은 +, 소모는 - 입력");
		scanf_s("%lf", &pump);

		remain = remain + pump;
		if (remain < 0.0) {
			remain = 0.0;
		}
		if (remain > first) {
			remain = first;
		}
		printf("현재 남은 연료는 %lf이다.", remain);
	}
	printf("(경고) 10퍼센트 미만이다.");
	return 0;

}*/
/*
int main(void) {
	int input;
	int a = 2;
	int flag = 0;
	

	printf("정수입력");
	scanf_s("%d", &input);

	for (a = 2; a <= input / 2; a++) {
		if (input % a == 0) {
			flag = 1;
			break;
		}
	}
		if (flag == 0) {
			printf("소수입니다.\n");
		}
		else {
			printf("소수가 아닙니다.\n");
		}
		return 0;
	}*/
/*
int main(void) {
	
	int count = 0;


	while (1) {

		printf("문자를 입력하시오\n");
		char user = getchar();
		getchar();
		if (user == 'a') 
			count++;
		
		if (user == '.') 
			break;
		
	}
	printf("a의 개수 = %d\n", count);
	return 0;
}*/
/*
int main(void)
{
	int stake = 50;
	int goal = 250;
	int T = 1000;
	int t;

	int bets = 0;
	int wins = 0;

	for (t = 0; t < T; t++) {

		int cash = stake;
		while (cash > 0 && cash < goal) {
			bets++;
			if ((double)rand() / RAND_MAX < 0.5)
				cash++;
			else                     
				cash--;
		}
		if (cash == goal) wins++;
	}

	printf("초기 금액 $%d \n", stake);
	printf("목표 금액 $%d \n", goal);
	printf("%d 중의 %d번 승리\n", T, wins);
	printf("이긴 확률=%f \n", 100.0 * wins / T);
	printf("평균 배팅 횟수 = %f \n", 1.0 * bets / T);
	return 0;
}*/
/*
int main(void) {

	HDC hdc = GetWindowDC(GetForegroundWindow());
	Rectangle(hdc, 100, 100, 200, 200);
	Ellipse(hdc, 100, 100, 200, 200);
	return 0;
}*/
int main(void) {

	int answer = 41;
	int guess;
	int tries = 0;
	
	do {
		printf("추측해봐\n");
		scanf_s("%d", &guess);
		tries++;

		if (guess > answer)
			printf("좀 더 낮은 수 써\n");
		else if (guess < answer)
			printf("좀 더 높은 수 써\n");
	} while (guess != answer);

	printf("축하, 시도횟수 %d", tries);

	return 0;
}


