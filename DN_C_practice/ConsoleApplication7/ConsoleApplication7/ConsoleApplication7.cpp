/*#include<stdio.h>
#define SIZE 10

int days[12] = { 31, 29, 31, 30, 31, 30, 31,31,30,31,30,31 };
int i;

int main(void)
{
	for (i = 0; i < 12; i++)
	{
		printf("%d월은 %d일 까지 있습니다.\n", i + 1, days[i]);
	}
	return 0;
}*/
#include<stdio.h>

/*int user[SIZE] = { 10, 20, 30, 40, 50 };
int i, k = 0;
int bAnds(int small, int big);

int main(void)
{
	int big, small = 0;

	for (i = 0; i < SIZE; i++)
		{
			printf("정수를 입력하시오: ");
			scanf_s("%d", &user[i]);
		}
	k =  bAnds(0, 0);

	printf("최대값 = %d", k);
	return 0;
}

int bAnds(int small, int big)
{
	for (i = 0; i < SIZE - 1; i++)
	{
		if (user[i] > user[i + 1]) {
			int tmp = user[i];
			user[i] = user[i + 1];
			user[i + 1] = tmp;
		}
	}
	small = user[0];
	big = user[4];

	return big;
}*/
/*int student[3][3] = {
	{30, 10, 11}, {40, 90, 32}, {35, 57, 88}
};
int i, k, sum = 0;

int main(void) {
	for (i = 0; i < 3; i++) {
		for (k = 0; k < 3; k++) {
			sum += student[i][k];
		}
	}

	double average;
	average = sum / 9;
	printf("학생들의 평균은 %f입니다.", average);
}*/

/*int math[10][10] = { 0 };
int i, k;
int Auto(int x, int y);
int valu = 1;

int main(void) {
	printf("알고 싶은 구구단을 입력하시오(예: 9 3): ");
	int n, m;
	scanf_s("%d%d", &n, &m);

	valu = Auto(n, m);
	printf("%d x %d = %d", n, m, valu);
}

int Auto(int x, int y) {
	int a = 1;
	
	a = x * y;

	return a;
}*/

/*int main(void)
{
	int math[10][10] = { 1 };
	int i, k;
	for (i = 0; i < 10; i++) {
		for (k = 0; k < 10; k++) {
			math[i][k] = i * k;
		}
	}

	printf("알고 싶은 구구단을 입력하세요.(예: 9 3): ");
	int n, m;
	scanf_s("%d%d", &n, &m);
	printf("%d X %d = %d", n, m, math[n][m]);
	return 0;
}*/

/*#include<stdlib.h>
#include<time.h>
#define SIZE 1000

int main(void) {
	int random, i, k;
	double average = 1.0;
	int number[SIZE] = { 1};
	srand(time(NULL));


	for (i = 0; i < SIZE; i++) {
		random = rand() % 10;
		number[random] += 1;
		
	}
	for (k = 0; k < 10; k++) {
		
		printf("%d = %d개\n", k, number[k]);
		
		}return 0;
}*/
/*#include<stdlib.h>
#include<time.h>
#define SIZE 60000

int main(void) {
	srand(time(NULL));
	int random;
	int i, k;

	int number[6] = { 0 };
	printf("===========================\n");
	printf("eyes                   rate\n");
	printf("===========================\n");

	for (i = 0; i < SIZE; i++) {
		random = rand() % 6;
		number[random] += 1;
	}
	for (k = 0; k < 6; k++) {
		printf("%d                     %d\n", k + 1, number[k]);
	}
	return 0;
}*/
/*#include<conio.h>

int chair[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
char user;
int userNumber;
int k, i;

int main(void) {
	do {
		printf("    예약하시겠습니까? (y/n)\n   ");
		printf("================================\n");
		user = _getch();

		if (user == 'y') {
			for (i = 0; i < 10; i++) {
				printf("%d    ", i + 1);
			}

			printf("\n");

			for (i = 0; i < 10; i++) {
				printf("%d    ", chair[i]);
			}

			printf("어느 좌석을 예약하시겠습니까? ");
			scanf_s("%d", &userNumber);
			
			if (chair[userNumber - 1] == 0) {
				chair[userNumber - 1] = 1;
				printf("예약되었습니다\n");
			}
			else
				printf("이미 예약되어있습니다.\n");
		}
	} while (user == 'y');
}*/

/*#include<math.h>

double user[5] = { 0 };
int i= 0;
double a, b = 0;
double averageU(double k);
double vunS(double l);

int main(void) {

	double avg;
	double v;

	for (i = 0; i < 5; i++) {
		printf("실수를 입력하세요: ");
		scanf_s("%lf", &a);
		user[i] = a;
	}
	for (i = 0; i < 5; i++) {
		b += user[i];
	}
	avg = averageU(b);
	v = vunS(avg)/5;
	printf("평균 = %f\n", avg);
	printf("표준편차 = %f", sqrt(v));
}

double averageU(double k) {
	double aver = k / 5;
	return aver;
}

double vunS(double l) {
	double v;
	double vunSum = 0;
	

	for (i = 0; i < 5; i++) {
		v = user[i] - l;
		vunSum += v * v;
	}
	return vunSum;
}*/

/*#include<stdlib.h>
#include<time.h>
#define SIZE 10

char walk[SIZE] = { 0 };
int main(void) {
	srand(time(NULL));
	int i, k;
	int pos = 5;

	for (i = 0; i < 100; i++) {
		for (k = 0; k < 10; k++)
			walk[k] = '_';

		int value;
		value = rand() % 2;
		if (value == 0)
			pos++;
		else
			pos--;

		if (pos <= 0)
			pos = 0;
		if (pos > 10)
			pos = 9;
		walk[pos] = '*';

		for (k = 0; k < 10; k++)
			printf("%c", walk[k]);

		printf("\n");
	}
}*/

/*double math(double x, double y);
double x, y, solution = 0;

int main(void) {
	printf("1.5x + 3.0y에 관한 프로그램입니다,\n");
	printf("x 값을 입력하세요: ");
	scanf_s("%lf", &x);

	printf("y값을 입력하세요: ");
	scanf_s("%lf", &y);

	solution = math(x, y);
	printf("결과값 = %lf", solution);
}
double math(double x, double y) {
	solution = x * 1.5 + y * 3.0;

	return solution;
}*/

/*double bigger(double x, double y);
double a, b;
double result;

int main(void) {

	printf("실수 두 개 써: \n");
	scanf_s("%lf%lf", &a, &b);

	result = bigger(a, b);
	printf("둘 중 더 큰 수는 %lf입니다.", result);
}

double bigger(double x, double y) {
	if (x > y)
		result = x ;
	else
		result = y;

	return result;

}*/

/*void get_divisor(int x);
int user;

int main(void) {
	printf("약수를 찾고 싶은 정수 적어라: ");
	scanf_s("%d", &user);

	get_divisor(user);
}

void get_divisor(int x) {
	int i, k;
	for (i = 1; i <= x; i++) {
		k = x % i;
		if (k == 0)
			printf("%d, ", i);
	}
}*/

/*int prime(int x);
int i = 0;

int main(void) {
	printf("1 ~ 100사이의 소수를 출력하겠습니다.\n");
	for (i = 2; i <= 100; i++) {
		if (prime(i) == 1)
			printf("%d ", i);
	}
	return 0;
}

int prime(int x) {
	int k;
	for (k = 2; k < x; k++) {
		if ((x % k == 0))
			return 0;
	}
	return 1;
}*/

/*int ipower(int x, int y);
int n, k, result;

int main(void) {
	printf("정수 n과 k를 입력하세요: ");
	scanf_s("%d%d", &n, &k);

	result = ipower(n, k);
	printf("정답은 %d", result);
}

int ipower(int x, int y) {
	int i;
	int result = 1;
	for (i = 1; i <= y; i++) {
		result = result * x;
	}
	return result;
}*/

/*#include<math.h>

double math(double a, double b, double c);

int main(void) {
	double a, b, c, result;

	printf("이차방정식의 계수를 입력하세요\n");
	printf("a: ");
	scanf_s("%lf", &a);
	printf("b: ");
	scanf_s("%lf", &b);
	printf("c: ");
	scanf_s("%lf", &c);

	result = math(a, b, c);
	printf("이차방정식의 근 = %lf, %lf 입니다.", result, result*(-1));
}

double math(double a, double b, double c) {
	double first, result;
	first = (-1) * b + sqrt(b * b - 4 * a * c);
	result = first / (2 * a);

	return result;
}*/

/*#include<stdlib.h>
#include<time.h>

int main(void) {
	srand(time(NULL));

	int user, computer;
	while (1) {
		printf("앞(0), 뒤(1)를 선택하시오(종료: -1): ");
		scanf_s("%d", &user);

		computer = rand() % 2;

		if (user == -1)
			break;
		if (user == computer)
			printf("사용자가 이겼습니다.");
		
		else
			printf("컴퓨터가 이겼습니다.");
	}
	return 0;
}*/



/*double add(double x, double y);
double sub(double x, double y);
double mult(double x, double y);
double div(double x, double y);

int main(void) {

	double user1, user2, result;
	int quit;
	char op;

	while (1) {
		printf("연산을 입력하시오(종료는 crt + c)");

		quit = scanf_s("%lf %c %lf", &user1, &op 0,  &user2);
		if (quit != 3)
			return 0;

		switch (op) {
		case '+':
			result = add(user1, user2);
			break;

		case '-':
			result = sub(user1, user2);
			break;

		case '*':
			result = mult(user1, user2);
			break;

		case '/':
			result = div(user1, user2);
			break;

		default:
			break;
		}
		printf("연산결과 = %lf\n", result);
	}
	return 0;

}

double add(double x, double y) {
	static int count = 0;
	count++;
	printf("덧셈은 총 %d번 호출됨\n", count);
	return x + y;
}

double sub(double x, double y) {
	static int count = 0;
	count++;
	printf("뺄셈은 총 %d번 호출됨\n", count);
	return x - y;
}

double mult(double x, double y) {
	static int count = 0;
	count++;
	printf("곱셈은 총 %d번 호출됨\n", count);
	return x * y;
}

double div(double x, double y) {
	static int count = 0;
	count++;
	printf("나눗셈은 총 %d번 호출됨\n", count);
	return x / y;
}*/

/*int save(int amount);

int main(void) {
	int amt;
	int total = 0;
	while (1) {
		printf("얼마를 저축하시겠습니까?(종료는 -1): ");
		scanf_s("%d", &amt);

		if (amt == -1)
			break;
		total = save(amt);
		printf("지금까지의 저축액은 %d입니다.\n", total);
	}
	return 0;
}


int save(int amount) {
	static int total = 0;
	total += amount;

	return total;
}*/

/*int save(int amount);
int draw(int amount);
int total = 0;

int main(void) {
	int amt;
	int total = 0;
	while (1) {
		printf("얼마를 저축하시겠습니까?(종료는 -1): ");
		scanf_s("%d", &amt);

		if (amt == -1)
			break;
		else if ((amt != -1) && (amt <= 0))
			save(amt);
		else
			draw(amt);

	}
	return 0;
}


int save(int amount) {
	total += amount;
	printf("지금까지의 저축액은 %d입니다.\n", total);
	return total;
	
}

int draw(int amount) {
	total += amount;
	
	printf("지금까지의 저축액은 %d입니다.\n", total);
	return total;
	
}*/

/*void show(int x);
int user;

int main(void) {
	printf("나누고 싶은 수 적어라: ");
	scanf_s("%d", &user);

	show(user);
}

void show(int x) {
	if (x > 0)
	{
		show(x / 10);
		printf("%d\n", x % 10);
	}
}*/

/*int sum(int x);

int main(void) {
	int user;
	int sumU;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &user);

	sumU = sum(user);
	printf("%d", sumU);
	return 0;
}

int sum(int x) {
	int i;
	int mult = 0;

	for (i = 1; i <= x; i++) {
		mult = mult + (i * i * i);
	}
	return mult;
}*/

/*void print_array(int* A, int size);
int print_array_sum(int* A, int size);

int main(void) {
	int data[10] = { 1,2,3,4,5,6,7,8,9,10 };

	print_array(data, 10);
	int sum = 0;
	sum = print_array_sum(data, 10);

	printf("배열 요소의 합 = %d", sum);
}

void print_array(int* A, int size) {
	int i;
	printf("print_array()\n");

	for (i = 0; i < size; i++) {
		printf("%d, ", A[i]);
	}
	printf("\n");
}
*/

/*int number[5] = { 1, 2, 3, 4, 5 };
int* p = number;

int main(void) {

	printf("5개의 정수를 입력하세요: ");
	scanf_s("%d%d%d%d%d", p, p + 1, p + 2, p + 3, p + 4);

	printf("역순으로 출력하겠습니다.\n");
	int i;

	for (i = 4; i >= 0; i--) {
		printf("%d ", *(p + i));
		printf("\n");
	}
	return 0;
}
*/

/*#include<math.h>

void quadratic(int a, int b, int c, double* xplus, double* xminus);

int main(void) {
	int a = 1, b = 4, c = 4;
	double xplus, xminus;

	quadratic(a, b, c, &xplus, &xminus);

	printf("첫번째 실근: %1f\n", xplus);
	printf("두번째 실근: %1f\n", xminus);
}

void quadratic(int a, int b, int c, double* xplus, double* xminus) {
	*xplus = (-b - sqrt(b * b - (4 * a * c)) / 2 * a);
	*xminus = (-b + sqrt(b * b - (4 * a * c)) / 2 * a);
}*/

/*void get(double value, int* i_part, double* f_part);

int main(void) {
	double pi = 3.141592;
	int i_part;
	double f_part;

	get(3.141592, &i_part, &f_part);

	printf("정수부 = %d, 소수부 = %f", i_part, f_part);
}

void get(double value, int* i_part, double* f_part) {
	*i_part = value / 1;
	*f_part = value - (int)i_part;
}*/

/*#define WIDTH 10;
#define HEIGHT 10;

void imageB(char* p, int n);

int main(void) {
	int k;
	char image[10 * 10] = {
		0,0,0,0,9,0,0,0,0,0,
		0,0,0,9,9,0,0,0,0,0,
		0,0,0,8,0,9,0,0,0,0,
		0,0,0,0,0,9,0,0,0,0,
		0,0,0,0,0,7,0,0,0,0,
		0,0,0,0,6,0,0,0,9,0,
		0,0,7,0,0,0,0,0,0,9,
		0,6,6,7,0,0,0,0,8,0,
		0,0,0,0,9,0,0,0,7,0,
		0,0,0,0,0,6,0,0,5,0
	};
	imageB(image, 100);
	for( k = 0; k < 100; k ++)
		printf("%d", image[k]);
	return 0;
}
		
void imageB(char *p, int n) {
	int i;
	for (i = 0; i < n; i++)
		if (p[i] >0)
			p[i]--;
}*/

/*#include<string.h>

int main(void) {
	char password[100];
	int up, mid, low;

	while (1) {
		printf("암호를 생성하시오: ");
		gets_s(password, 100);

		 up = mid = low = 0;

		for (int i = 0; i < strlen(password); i++) {
			if (password[i] >= '0' && password[i] <= '9')
				up = 1;

			else if (password[i] >= 'a' && password[i] <= 'z')
				mid = 1;

			else if (password[i] >= 'A' && password[i] <= 'Z')
				low = 1;
		}

		if ((up == 1) && (mid == 1) && (low == 1))
		{
			printf("암호 생성이 완료되었습니다.");
			break;
		}
		else
			printf("숫자, 영어 대소문자를 모두 사용하세요\n");
	}
}*/

/*#include<string.h>
#include<conio.h>

char password[100] = { 0 };

int main(void) {
	printf("비밀번호를 입력하시오: ");
	for (int i = 0; i < 4; i++) {
		int user = _getch();
		password[i] = user;
		_putch('*');
	}

	if (strcmp(password, "1234") == 0)
		printf("비밀번호 일치\n");

	else
		printf("비밀번호 불일치\n");
}*/

/*#include<string.h>

int user[1000] = { 0 };
char s[1000] = { 0 };
int i;

int main(void) {
	printf("입력 문자열: ");
	gets_s(s, 100);

	int number;
	number = strlen(s);

	for (i = 0; i < number; i++) {
		user[s[i]]++;
	}
	for (i = 'a'; i <= 'z'; i++) {
		if (user[i] != 0)
			printf("%c 문자가 %d번 등장하였음 \n", i, user[i]);
	}
}*/

/*int main(void) {
	char text[100], result[100];
	int c = 0;
	int d = 0;

	printf("문자를 입력하세요: ");
	gets_s(text, 100);

	while (text[c] != '\0') {
		if (text[c] != 'a' && text[c]!= 'i' && text[c] != 'o' && text[c] != 'e' && text[c] != 'u') {
			result[d] = text[c];
				d++;
		}
		c++;
	}
	result[d] = '\0';
		printf("최종 텍스트: %s\n", result);
		return 0;
}*/

/*#include<string.h>
#include<ctype.h>

int count_word(const char* s);

int main(void) {
	char text[1000];
	int count = 0;

	printf("문장을 입력하세요: ");
	gets_s(text, 1000);

	count = count_word(text);
	printf("단어의 갯수는 %d 입니다.", count);
}

int count_word(const char* s) {
	int i, tmp = 0;
	int value = 1;
	for (i = 0; s[i] != NULL; i++) {
		if (isalpha(s[i])) {
			if (value) {
				tmp++;
				value = 0;
			}
		}
		else value = 1;
	}
	return tmp;
}*/

/*#include<string.h>

char user[100] = { 0 };
char result[100] = { 0 };

int main(void) {
	int i, d;
	d = 0;

	printf("문자열을 입력하세요: ");
	gets_s(user, 100);

	for (i = 0; i < strlen(user); i++) {
		if (user[i] >= 'a' && user[i] <= 'z') {
			result[d] = user[i];
			d++;
		}
	}
	printf("최종 텍스트: %s\n", result);
	return 0;
}*/

/*#include<string.h>

char user[1000] = { 0 };

int main(void) {
	printf("텍스트를 입력하세요: ");
	gets_s(user, 1000);

	int i, k;
	int c = 0;
	int count[26] = { 0 };

	for (i = 0; i < strlen(user); i++) {
		if (user[i] >= 'a' && user[i] <= 'z') {
			count[user[i] - 'a']++;
		}
	}

	for (i = 0; i < 26; i++)
	{
		if (count[i] != 0)
			printf("%c: %d\n", i + 'a', count[i]);

		else
			printf("%c: 0\n", i + 'a');
	}
	return 0;
}*/


/*struct TIME {
	int hours;
	int minutes;
	int seconds;
};

void get_diffrence(struct TIME t1, struct TIME t2, struct TIME* diff);

int main(void) {
	struct TIME t1, t2, diff;

	printf("시작시간(시, 분, 초)");
	scanf_s("%d%d%d", &t1.hours, &t1.minutes, &t1.seconds);

	printf("종료시간(시, 분, 초");
	scanf_s("%d%d%d", &t2.hours, &t2.minutes, &t2.seconds);

	get_diffrence(t1, t2, &diff);
	printf("소요시간 %d: %d: %d", diff.hours, diff.minutes, diff.seconds);
}

void get_diffrence(struct TIME t1, struct TIME t2, struct TIME* diff) {
	if (t1.seconds > t2.seconds) {
		--t2.minutes;
		t2.seconds += 60;
	}
	diff->seconds = t2.seconds - t1.seconds;

	if (t1.minutes > t2.minutes) {
		--t2.hours;
		t2.minutes += 60;
	}
	diff->minutes = t2.minutes - t1.minutes;
	diff->hours = t2.hours - t1.hours;
}*/

/*#include<string.h>

struct E_MAIL {
	int sequence;
	char topic[1000] = { 0 };
	char reciver[1000] = { 0 };
	char giver[1000] = { 0 };
	char content[1000] = { 0 };
	char date[1000] = { 0 };
};

int main(void) {
	struct E_MAIL e;
	strcpy_s(e.topic, "안부메일");
	strcpy_s(e.reciver, "동녕");
	strcpy_s(e.giver, "미래의 동녕");
	strcpy_s(e.content, "C언어 ㅈ됐어");
	strcpy_s(e.date, "2019/12/09");
	e.sequence = 1;

	printf("우선순위 %d\n제목 : %s\n수신자 : %s\n발신자 : %s\n내용 : %s\n날짜 : %s", e.sequence,
		e.topic, e.reciver, e.giver, e.content, e.date);
}*/

/*struct student {
	union {
		char number[30];
		char reg_number[30];
	};
	char name[20];
	char tell[20];
};

int main(void) {
	struct student s[10]{
		{"201937438", "이동녕", "111-111"},
	{"010113", "이똥녕", "010-010"},
	{"3409517", "이댕녕", "123-456"}
	};
	
	int i;
	for (i = 0; i < 10; i ++) {
		printf("%s\n %s\n", s[i].name, s[i].tell);
	}
	return 0;
}*/

/*struct math {
	double real;
	double imag;
};
struct math math_add(struct math x, struct math y);

int main(void) {
	struct math x, y, z;

	printf("첫 번째 복소수를 입력하세요(a + bi)");
	scanf_s("%lf%lf", &x.real, &x.imag);

	printf("두 번째 복소수를 입력하세요(c + di)");
	scanf_s("%lf%lf", &y.real, &y.imag);

	z = math_add(x, y);
	printf("%.1f + %.1fi\n", z.real, z.imag);
}

struct math math_add(struct math x, struct math y) {
	struct math z;
	z.real = x.real + y.real;
	z.imag = x.imag + y.imag;

	return z;
}*/

/*enum game{scissor, rock, paper};

int main(void)
{
	enum  game computer = scissor;
	enum  game user = scissor;
	printf("가위(0), 바위(1), 보(2)");
	scanf_s("%d", &user);

	if (user == scissor)
		printf("비겼습니다.");

	else if (user == rock)
		printf("당신이 이겼습니다.");

	else
		printf("컴퓨터가 이겼습니다.");

	return 0;
}*/

/*#include<math.h>

enum shape_type { TRIANGLE, RECTANGLE, CIRCLE};

struct shape {
	int type;
	union {
		struct {
			int base;
			int height;
		}tri;

		struct {
			int width;
			int height;
		} rect;

		struct {
			int radius;
		}circ;
	}p;
};

int main(void) {
	struct shape s;
	enum shape_type type;
	printf("도형의 타입을 입력하시오(0,1,2)");
	scanf_s("%d", &type);
}*/

/*#include<time.h>
#include<stdlib.h>

int number[10] = { 0 };

int main(void) {
	srand(time(NULL));

	int random;
	int i, k;
	for (i = 0; i < 100; i++) {
		random = rand() % 10;
		number[rand() % 10]++;
	}
	int max = number[0];
	
	int index = 1;

	for (k = 0; k < 10; k++) {
		if (number[k] >= max)
		{
			
			number[k] = max;
			index = k;
		}
	}
	for (k = 0; k < 10; k++) {
		printf("%d가 %d번\n", k, number[k]);
	}
	printf("가장 많이 나온 수는 %d입니다.", index);
	return 0;
}
*/

#include<conio.h>

int seat[10] = { 0,0,0,0,0,0,0,0,0,0 };

int main(void) {
	char user;
	int userNum;
	int i;

	do {
		printf("예약하시겠습니까?(y/n) ");
		user = _getch();

		for (i = 0; i < 10; i++) {
			printf("%d  ", i);
		}
		printf("\n");
		for (i = 0; i < 10; i++) {
			printf("%d  ", seat[i]);
		}

		if (user == 'y') {
			printf("어느 좌석을 선택하실 건가요? ");
			scanf_s("%d", &userNum);
			if (seat[userNum] == 0)
				seat[userNum] == 1;
			else
				printf("이미 예약되어 있습니다.\n");
		}
	} while (user == 'y');
}