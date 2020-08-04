
// 231P. 예제 9-1

/*
#include <stdio.h>

int sum(int x, int y)
{
	int result = 0;
	result = x + y;
	return result;
}

void main()
{
	int answer = 0;
	answer = sum(3, 4);
	printf("%d \n", answer);
}
*/

//예제 9-2

/*
#include <stdio.h>

int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

void main()
{
	int i, j;
	int k;

	printf("숫자를 입력하시오: ");
	scanf_s("%d %d", &i, &j);

	k = max(i, j);
	printf("%d와 %d 중 큰 수는 %d \n", i, j, k);
}
*/

//예제 9-3

/*
#include <stdio.h>

double divide(double x, double y);
double input(void);
void output(double x);
void information(void);

void main()
{
	double num1, num2, result;

	information();
	printf("첫번째 실수 입력: ");
	num1 = input();

	printf("두번째 실수 입력: ");
	num2 = input();

	result = divide(num1, num2);
	output(result);
}

double divide(double x, double y)
{
	double val;
	val = x / y;
	return val;
}

double input(void)
{
	double val;
	scanf_s("%lf", &val);
	return val;
}

void output(double x)
{
	printf("나눗셈 결과: %lf \n", x);
}

void information(void)
{
	printf("-----프로그램 시작-----\n");
	return;
}
*/


//240p. 예제 9-4

/*
#include <stdio.h>

int sum(void);
int input(void);
void output(int x);

int main(void)
{
	int result;

	printf("-----프로그램 시작-----\n");
	printf("정수 입력: ");

	result = sum();
	output(result);
}

int sum(void)
{
	int i = 0, total = 0, num = 0;
	num = input();

	for (i = 0; i <= num; i++)
	{
		total = total + i;
	}
	return total;
}

int input(void)
{
	int val;
	scanf_s("%d", &val);
	return val;
}

void output(int x)
{
	printf("결과: %d \n", x);
	return;
}
*/



//예제 9-5

/*
#include <stdio.h>

void func_A(void);

void main()
{
	int aaa = 10;
	printf("main() 함수의  aaa 값: %d\n", aaa);

	func_A();
}

void func_A(void)
{
	int aaa = 20;
	int bbb = 30;

	printf("func_A() 함수의 aaa값: %d \n", aaa);
	printf("func_A() 함수의 bbb값: %d \n", bbb);

	return;
}
*/


//예제 9-6

/*
#include <stdio.h>

void main()
{
	int i = 0;
	int total=0;

	for (i = i; i < 3; i++)
	{
		int total = 0;
		total = total + 1;
	}

	if (total < 10)
	{
		printf("total 값: %d \n", total);
	}
}
*/


//예제 9-7

/*
#include <stdio.h>

int subtract(int x, int y);

void main()
{
	int a = 5, b = 3;

	printf("뺄셈 결과: %d \n", subtract(a, b));
}

int subtract(int x, int y)
{
	return x - y;
}
*/


//예제 9-8

/*
#include <stdio.h>

int num;
void grow(void);

int main(void)
{
	printf("함수 호출 전 num: %d \n", num);

	grow();

	printf("함수 호출 후 num: %d \n", num);
}

void grow(void)
{
	num = 60;
}
*/


//예제 9-9

/*
#include <stdio.h>

void count(void);

void main(void)
{
	count();
	count();
	count();
}

void count(void)
{
	static int x = 0;
	int y = 0;

	x = x + 1;
	y = y + 1;

	printf("x 값: %d, y값: %d \n", x, y);
}
*/


// 264P. 예제 9-14


/*
#include <stdio.h>

int factorial(int n);

void main()
{
	int a;
	int result;

	printf("정수입력: ");
	scanf_s("%d", &a);

	result = factorial(a);
	printf("%d 팩토리얼은: %d \n", a, result);

}

int factorial(int n)
{
	if (n <= 1)
		return 1;

	else
		return n * factorial(n - 1);
}
*/




//-------------------------------------------266p. 연습문제----------------------------------------------


#include <stdio.h>

int repeat(max);

void main()
{
	int result, max;

	printf("X개월 후의 토끼의 수 구하기\n");
	printf("몇 개월 후인지 적으시오: ");
	scanf_s("%d", &max);

	result =

	printf("%d 마리", result);
}

int num(max)
{0
	int num=1, i;

	for (i = 0; i < max; i++)
	{
		num = num + i;
	}
	return num;
}

int sum(max)
{
	int sum = 1, j;

	for (j = 0; j < max; j++)
	{
		sum = sum + j;
	}
	return sum;
}