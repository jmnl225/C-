#include <stdio.h>

char num[20] = { 0 };

void scan();
void card();
void regi();


void scan()
{
	int i;
	scanf_s("%s", num, 20);  //전역변수 char num[20]에 입력을 받음


	//주소 테스트printf("%d", p);

	for (i = 0; num[i] != 0; i++)	{	}
	printf("%d\n", i); // 자릿수 테스트


	if (i < 13)
	{
		printf("...개인정보가 아닙니다.\n");
		return;
	}

	if (i == 13 || i == 14) regi(); //주민번호인경우

	if (i > 14) card();

}

void regi()
{
	int i;

	printf("%s", num);


	int check[14] = { 2,3,4,5,6,7,8,9,2,3,4,5 };
	char result[15] = { 0 };

	if (num[6] == 32 || num[6] == 45) //중간에 스페이스바 혹은 대쉬가 있는 경우 
	{
		result[6] = num[6];

		for (int k = 0; k < 6; k++)
		{
			num[k] = num[k] - 48;
			result[k] = num[k] * check[k];
		}

		for (int k = 7; k < 15; k++)
		{
			num[k] = num[k] - 48;
			result[k] = num[k] * check[k - 1];
		}

	}

	else
	{
		for (int k = 0; k < 14; k++)
		{
			num[k] = num[k] - 48;
			result[k] = num[k] * check[k];
			printf("%d  ", result[k]); //숫자만 넣는 경우에는 됨.
		}
	}
	//num에 진짜 숫자 대입
	//확인 프로세스 시작

	int sum = 0;
	for (i = 0; i < 15; i++)
	{
		sum = result[i] + sum;
	}

	int fin = 0;
	fin = (11 - (sum % 11)) % 10;

	printf("\n%d\n", fin); //된다!!

	if (fin == num[12])
		printf("...주민번호가 맞습니다.\n");
	else
		printf("...개인정보가 아닙니다.\n");

	
}

void card()
{
	//printf("%s", num); //테스트

	for (int k = 0; k < 4; k++) //카드 0~3 숫자 중 숫자외의 문자가 있는경우 
	{
		if ((char)num[k] < 48 || (char)num[k]>57)
		{
			printf("...개인정보가 아닙니다.\n");
			return;
		}
	}

	for (int k = 5; k < 9; k++) //카드 5~8 숫자 중 숫자외의 문자가 있는경우
	{
		if (num[k] < 48 || num[k]>57)
		{
			printf("...개인정보가 아닙니다.\n");
			return;
		}
	}

	for (int k = 10; k < 14; k++) //카드 10~13 숫자 중 숫자외의 문자가 있는경우
	{
		if (num[k] < 48 || num[k]>57)
		{
			printf("...개인정보가 아닙니다.\n");
			return;
		}
	}

	for (int k = 15; k < 19; k++) //카드 15~19 숫자 중 숫자외의 문자가 있는경우
	{
		if (num[k] < 48 || num[k]>57)
		{
			printf("...개인정보가 아닙니다.\n");
			return;
		}
	
	}
	printf("...카드 번호가 맞습니다.\n");
}

void main()
{
	while (1)
	{
		printf("입력값: ");

		scan();

	}
	
}