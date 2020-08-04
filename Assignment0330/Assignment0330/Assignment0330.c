#include <stdio.h>

//204p. IF문 예제 8-1.

/*

void main()
{
	printf("\n");

	int num;
	printf("숫자를 입력하세요:");
	scanf_s("%d", &num);

	if (num >= 0)
		printf("양수입니다.\n");

	if (num < 0)
		printf("음수입니다.\n");

}

*/

/*
void main()
{
	printf("\n");

	int age;

	printf("나이 입력:");
	scanf_s("%d", &age);

	if (age >= 15 && age <= 100)
		printf("회원 가입이 가능합니다.\n");

	else
		printf("회원 가입이 불가능합니다.\n");
}
*/

/*
void main()
{

	printf("\n");

	int num1;
	printf("숫자 입력:");
	scanf_s("%d", &num1);

	if (num1 > 0)
		printf("0보다 큰 수가 num1에 저장\n");

	else
		printf("0 또는 0보다 작은 수가 num1에 저장\n");
}
*/

/*
void main()
{
	printf("\n");

	int num2;

	printf("숫자 입력:");
	scanf_s("%d", &num2);

	printf("\n\n");

	if (num2 > 0)
		printf("0보다 큰 수가 저장\n");

	else
	{
		if (num2 == 0)
			printf("0이 저장\n");

		else
			printf("0보다 작은 수가 저장\n");
	}

}
*/

/* 예제 8-6
void main()
{
	int num3;

	printf("숫자 입력:");
	scanf_s("%d", &num3);

	printf("\n");

	if (num3 > 0)
		printf("0보다 큰 수가 저장\n");

	else if (num3 == 0)
		printf("0이 저장\n");

	else
		printf("0보다 작은 수가 저장\n");

}
*/

/* 예제 8-7
void main()
{
	int num4;
	
	printf("\n");

	printf("C언어 성적 입력 :");
	scanf_s("%d", &num4);

	if (num4 >= 95)
		printf("A+ 입니다.\n");
	else
	{
		if (num4 >= 90)
			printf("A입니다.\n");
		else
		{
			if (num4 >= 85)
				printf("B+입니다.\n");
			else
			{
				if (num4 >= 80)
					printf("B입니다.\n");
				else
					printf("F입니다.\n");
			}
		}
	}

}
*/

//예제 8-8
/*
void main()
{
	int num5;

	printf("C언어 성적 입력: ");
	scanf_s("%d", &num5);

	if (num5 >= 95)
		printf("A+입니다. \n");
	else if (num5 >= 90)
		printf("A입니다. \n");
	else if (num5 >= 85)
		printf("B+입니다. \n");
	else if (num5 >= 80)
		printf("B입니다. \n");
	else
		printf("귀찮으니 그만하자\n");
}
*/

/* 8-9
void main()
{
	int num6;

	printf("\n");

	printf("성적 입력:");
	scanf_s("%d", &num6);

	printf("\n");

	if (num6 >= 95) 
		printf("A+\n");
	else if(num6>=90)
		printf("A \n");
	else if(num6>=85)
		printf("B+");
	
}
*/

/*
void main()
{
	int num7;

	printf("\n");
	
	printf("몇 번 스위치를 누르겠습니까? ");
	scanf_s("%d", &num7);

	switch (num7)
	{
	case 1:
		printf("전등이 켜짐 \n");
		break;
	case 2:
		printf("전등이 꺼짐 \n");
		break;
	case 3:
		printf("고장\n");
		break;

	default:
		printf("스위치오류: 1~3번중택1");
	}

}
*/

/*
예제 8-11
void main()
{
	char ch;

	printf("(M)onday, (T)useday, (F)riday \n");
	printf("문자입력 (M, T, F) : ");
	scanf_s("%c", &ch);

	printf("\n");

	switch (ch)
	{
	case 'T':
	case 't':
		printf("Tuseday");
		break;

	case 'M':
	case 'm':
		printf("Monday");
		break;

	case 'F':
	case 'f':
		printf("Friday");
		break;

	defaut:
		printf("SUNDAY");
	}
}
*/

// 222p. 문제1.
/*
void main()
{
	int n1, n2;

	printf("\n");

	printf("정수1을 입력해주세요:");
	scanf_s("%d", &n1);

	printf("\n");

	printf("정수2을 입력해주세요:");
	scanf_s("%d", &n2);

	printf("\n");

	if (n1 > n2)
		printf("더 큰 수는 %d 입니다.", n1);
	else if (n1 == n2)
		printf("두 수는 같습니다.", n2);
	else
		printf("더 큰 수는 %d 입니다.", n2);
}

*/

//문제2 모르겠당

/*
void main()
{
	printf("\n");

	int nb, nb1, nb2, nb3;

	printf("세자리 십진수의 숫자를 입력하세요: ");
	scanf_s("%d", nb);

	printf("\n\n");

	nb1 = nb / 100
		if (nb1 % 2 == 0)
			printf("%d: 짝수 ", nb1);
		else
			printf("%d: 홀수 " nb1);

	nb2=nb/??????????????????????????????????
	}
	*/

/*
void main()
{
	
	char n1,n2,n3;

	printf("세자리 십진수의 각 자리 숫자들이 짝수, 홀수인지 구분하여 출력.");

	printf("\n\n");

	printf("세자리 십진수의 숫자를 입력하세요: ");
	scanf_s("%c", &n1);
	scanf_s("%c", &n2);

	printf("\n");

	if (n1 % 2 == 0)
		printf("%c: 짝수 ", n1);
	else
		printf("%c: 홀수 ", n1);

	if (n2 % 2 == 0)
		printf("%d: 짝수 ", n2);
	else
		printf("%d: 홀수 ", n2);
	
}
*/

//문제3
/*
void main()
{
	printf("\n");

	int score;

	printf("100 이하의 점수를 입력하세요.:");
	scanf_s("%d", &score);

	printf("\n");

	switch (score)
	{
	case 100:
	case 99:
	case 98:
	case 97:
	case 96:
	case 95:
	case 94:
	case 93:
	case 92:
	case 91:
	case 90:
		printf("A \n");
		break;

	case 89:
	case 88:
	case 87:
	case 86:
	case 85:
	case 84:
	case 83:
	case 82:
	case 81:
	case 80:
		printf("B \n");
		break;

	default:
		printf("F \n");

	}

}
*/

//문제5

/*
void main()
{
	printf("\n");

	int a, b, c;

	printf("정수1 입력: ");
	scanf_s("%d", &a);
	printf("\n");

	printf("정수2 입력: ");
	scanf_s("%d", &b);
	printf("\n");

	printf("정수3 입력: ");
	scanf_s("%d", &c);
	printf("\n");

	if (a > b && b > c)
		printf("%d", a);
	else if (b > a && b > c)
		printf("%d", b);
	else if (c > a && c > b)
		printf("%d", c);
	else if (a == b && a > c)
		printf("%d", a);
	else if (b == c && b > a)
		printf("%d", b);
	else
		printf("%d", c);
	
	
}

*/

/*

void main()
{
	printf("\n");

	double num8;

	printf("정수를 입력하세요: ");
	scanf_s("%lf", &num8);

	printf("\n\n");

	int real;

	real = (int)num8;

	printf("입력된 수의 절대값: %d \n", real);

}

*/

/*
void main()
{
	printf("\n");

	char one;

	printf("한 문자를 입력해주세요: ");
	scanf_s("%c", &one);

	printf("\n");

	printf("결과: %c", (one < 90) ? ((one<65)? one: one+32): one - 32);

}
*/

void main()
{

	int a, b, c;

	printf("\n 정수를 적어주세요. \n\nA:");
	scanf_s("%d", &a);

	printf("B:");
	scanf_s("%d", &b);

	printf("C:");
	scanf_s("%d", &c);

	printf("\n\n");

	printf("세 정수의 합: %d\n", a + b + c);

	float ave;
	ave = (a + b + c) / 3;

	printf("세 정수의 평균: %.2f\n", ave);

	printf("세 정수 중 최대값: %d\n", (a > b && a > c) ? a :(b > c) ? b : c);

	printf("세 정수 중 최소값: %d\n", (a < b&& a < c) ? a :(b < c) ? b : c);

	
	/*if (a >= c && b > c)
		printf("세 정수 중 최대값 : %d\n", a);
	else if (b >= c && c > a)
		printf("세 정수 중 최대값 : %d\n", b);
	else if (c >= b && b > a)
		printf("세 정수 중 최대값 : %d\n", c);
	else
		printf("세 정수 중 최대값: %d\n", a);


	if (a <= b && b < c)
		printf("세 정수 중 최소값 : %d\n", a);
	else if (b <= c && c < a)
		printf("세 정수 중 최소값 : %d\n", b);
	else if (c <= a && a < b)
		printf("세 정수 중 최소값 : %d\n", c);*/
	

	


}