// ---------------------------------------------------------------------------------------

//메모장 Control 문제1.

/*
#include <stdio.h>

void main()
{
	int sca, num;

	printf("양의 정수 입력:");
	scanf_s("%d", &sca);

	num = 0;
	while (num < sca)
	{
		printf("Hello World!\n");
		num++;
	}
}
*/

//문제2

/*
#include <stdio.h>

void main()
{
	int sca, num;

	printf("양의 정수를 입력하세요:");
	scanf_s("%d", &sca);

	for (num = 1; num <= sca; num++)
	{
		printf("%d ", 3 * num);
	}
}
*/


//문제3

/*
#include <stdio.h>

void main()
{
	int num, sca,sum=0;
	num = 0;
	while (1)
	{
		printf("정수를 입력하세요:");
		scanf_s("%d", &sca);
		sum = sum + sca;
		num++;

		if (sca == 0)
		break;
	}

	printf("\n입력받은 수의 합: %d\n", sum);
	printf("입력받은 수의 갯수: %d\n", num-1);
}
*/

//문제4

/*
#include <stdio.h>

void main()
{
	int dan, i;
	printf("단수를 입력하세요:");
	scanf_s("%d", &dan);

	for (i = 9; i >=1; i--)
	{
		printf("%d * %d = %d\n", dan, i, dan * i);
	}
}
*/


//문제 5

/*
#include <stdio.h>

void main()
{
	int num,sev,nin;

	for (num = 1; num < 100; num++)
	{
		sev = num * 7;
		nin = num * 9;

		if (sev == nin)
		{
			printf(" ");
		}
		else
		{
			printf("%d %d ", sev, nin);
		}

	}

}
*/


//문제 6

/*
#include <stdio.h>

void main()
{
	int n1, n2, result;
	printf("숫자1 입력: ");
	scanf_s("%d", &n1);

	printf("숫자2 입력: ");
	scanf_s("%d", &n2);

	printf("%d", n1 > n2 ? n1 - n2 : n2 - n1);

}
*/


//문제 7
/*
#include <stdio.h>

void main()
{
	int n1, n2, result;
	printf("숫자1 입력: ");
	scanf_s("%d", &n1);

	printf("숫자2 입력: ");
	scanf_s("%d", &n2);

	if (n1 >= n2)
	{
		printf("%d - %d = %d\n", n1, n2, n1 - n2);
	}
	else
	{
		printf("%d - %d = %d\n", n2, n1, n2 - n1);
	}
}
*/

// 문제 8 ???????????????????????????????????????????????
/*
#include <stdio.h>

void main()
{
	int i, j, k;
	
	for (i = 1; i < 10; i++)
	{
		if (i % 2 == 1)
			continue;

		for (j = 1; j < 10; j++)
		{
			printf("%d * %d = %d \n", i, j, i * j);

			if (i == j)
				break;
		}
		printf("\n");
	}

}

*/


/*
#include <stdio.h>

void main()
{
	int dan, i;

	for (dan = 1; dan <= 9; dan++)
	{
		if (dan % 2 == 1)
		{
			continue;
		}

		for (i = 1; i <= 9; i++)
		{
			printf("%d * %d = %d \n", dan, i, dan * i);

			if (dan == i)
				break;
		}
		printf("\n");
	}

}
*/



//문제 9

/*
#include <stdio.h>

void main()
{
	int qtt, i, num, sum=0;
	printf("몇개의 숫자를 입력하실 건가요? :");
	scanf_s("%d", &qtt);

	for (i = 0; i < qtt; i++)
	{
		printf("정수를 입력하세요: ");
		scanf_s("%d", &num);
		sum = sum + num;
	}
	printf("\n입력한 수의 평균 값: %.2f", (float)sum / qtt);
}
*/


//문제 10

/*
#include <stdio.h>

void main()
{
	int sca, i;

	for (i = 0; i < 5; i++)
	{
		printf("5개의 양수의 정수를 입력해주세요: ");
		scanf_s("%d", &sca);

		while (sca < 0)
		{
			printf("다시 입력하세요.\n");
			scanf_s("%d", &sca);

			if (sca > 0)
				break;
			else
				continue;
		}
	}
}
*/



//문제 11

#include <stdio.h>
/*
void main()
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("ㅇ");
		}
		printf("*");
		printf("\n");
	}
}
*/

/*
#include <stdio.h>

void main()
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("ㅇ");
		}

		printf("*");
		printf("\n");
	}

}
*/



// 구구단 출력 프로그램 문제 


/*
#include <stdio.h>

void main()
{
	printf("구구단 출력 프로그램입니다. \n");

	int i, j, k, l=1;
	for (i = 1; i < 10; i+=3)
	{
		for (j = 1; j < 10; j++)
		{
			for (k = 0; k < 3; k++)
			{

				printf("%d * %d = %d \t", k+i, j, (k+i) * j);

			}
			
			printf("\n");
		}
		
		printf("\n");
	}

}
*/

// ZigZag

#include <stdio.h>

/*
void main()
{

	int num=1; // 현재 위치에 입력할 숫자
	int line = 1; // 현재 라인의 위치
	int i; // 거꾸로 출력하기 위한 변수
	int data; // 최대값
	int data1; // 한줄 출력 개수

	printf("숫자 출력 프로그램 \n");
	printf("출력하려는 최대값 입력: ");
	scanf_s("%d", &data);

	printf("한 줄 출력하려는 숫자 개수: ");
	scanf_s("%d", &data1);

	printf("\n");

	i = data1 - 1;

	for (num = 1; num <= data + (data1 - (data % data1)); num++)
	{
		if (line % 2)
		{
			if (num > data)
			{
				break;
			}
			printf("%d\t", num);

		}
		else
		{
			if ((num + i) > data)
			{
				printf("\t");
			}
			else
			{
				printf("%d\t", num + i);
			}
			i -= 2;
		}

		if (!(num % data1))
		{
			printf("\n");
			line++;
			i = data1 - 1;
		}
	}

}
*/


/*

#include <stdio.h>

void main()
{
	int i, j, num, rep, k=0;

	printf("한 행의 숫자: ");
	scanf_s("%d", &rep);

	printf("최대값을 적으시오: ");
	scanf_s("%d", &num);

	for (i = 1;i<=num/(rep-1); i++)
	{
		for (j = 0;j< rep; j++)
		{
			k++;
			printf("%3d\t", k);

			

			if (k == num)
				break;

		}

		printf("\n");
		if (k == num)
			break;

	}

}
*/

//기타

/*
#include <stdio.h>

void main()
{
	int i, k;

	for (i = 0; i < 5; i++)
	{
		for (k = 5; k>i;k--)
		{
			printf("*");
		}
		printf("\n");
	}

}
*/

#include <stdio.h>

void main()
{
	int i, j, k;
	for (i = 0; i < 5; i++)
	{
		for (j = 5; j >i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}