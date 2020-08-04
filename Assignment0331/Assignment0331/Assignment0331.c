
//173P. 예제 7-1

/*

#include <stdio.h>

void main()
{
	int num = 0;
	while (num < 5)
	{
		printf("반복 :%d \n", num);
		num++;
	}

	printf("반복문을 종료한 후: %d\n", num);
}

*/

// 7-2

/*
#include <stdio.h>

void main()
{
	int i = 0, sum = 0;
	while (i < 10)
	{
		sum = sum + 1;
		printf("i=%d, sum= %d \n", i, sum);
		i++;
	}
}
*/

//7-3

/*

#include <stdio.h>
void main()
{
	int i = 0;
	while (1)
	{

		printf("반복 횟수: %d\n", i);
		i++;

		

	}

}
*/

//7-4

/*

#include <stdio.h>

void main()
{

	int i = 1;
	int j;
	int result = 0;

	while (i < 9)
	{
		j = 1;
		i ++;

		while (j < 10)
		{
			result = i * j;
			printf("%d*%d=%d\n", i, j, result);
			j++;
		}

		
		
		printf("----------------\n");

	}

}

*/


//7-5

/*

#include <stdio.h>

void main()
{
	int num = 0, j = 9, result = 0;
	printf("숫자를 입력하세요:");
	scanf_s("%d", &num);

	while (num>0)
	{

		j = 9;

		while (j > 0)
		{
			result = num * j;
			printf("%d*%d=%d \n", num, j, result);
			j--;
		}

		num--;
		
		printf("-----------\n");

	}

}
*/

//181P. 예제7-6

/*

#include <stdio.h>

void main()
{
	int num;
	for (num = 0; num < 5; num++)
	{
		printf("repeat contents: %d\n", num);
	}

	printf("Finish: %d \n", num);

}
*/

//7-7

/*
#include <stdio.h>

void main()
{

	int i, sum = 0;
	for (i = 0; i <= 10; i++)
	{
		sum = sum + i;
		printf("i=%d, sum=%d \n", i, sum);
	}

	printf("Finish\n");
}
*/

//7-8

/*
#include <stdio.h>

void main()
{
	int num, i, result = 0;

	printf("input number:");
	scanf_s("%d", &num);

	for (i = 1; i < 10; i +=2 )
	{
		result = num * i;
		printf("%d*%d=%d \n", num, i, result);
	}

}
*/

//7-9

/*
#include <stdio.h>

void main()
{
	int i;
	for (i = 0; 1; i++)
	{
		printf("repeat num: %d \n", i);
		if(i>7000)
		break;
	}

}
*/

//7-10
/*
#include <stdio.h>

void main()
{
	int i, j;
	int result = 0;

	for (i = 2; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			result = i * j;
			printf("%d*%d=%d\n", i, j, result);
		}

		printf("-------------------------\n");
	}

}
*/

//7-11

/*

#include <stdio.h>

void main()
{
	int num, j, result;
	printf("input number: ");
	scanf_s("%d", &num);

	for (; num > 0; num--)
	{
		for (j = 9; j > 0; j--)
		{
			result = num * j;
			printf("%d*%d=%d\n", num, j, result);
		}

		printf("---------------\n");
	}
}
*/

//7-12

/*
#include <stdio.h>

void main()
{
	int i;
	int fac=1;

	for (i = 1; i <= 10; i++)
	{
		fac = fac * i;
	}
	printf("1to10 : %d \n", fac);
}
*/

//7-13

/*
#include <stdio.h>

void main()
{
	int i = 1, fac = 1;

	for (; i <= 10; i++)
	{
		fac = fac * i;
	}

	printf("1to10: %d\n", fac);
}
*/

//7-14

/*
#include <stdio.h>

void main()
{
	int i, fac = 1;
	for (i = 1;; i++)
	{
		if (i > 10)
			break;

		fac = fac * i;
	}

	printf("1*10: %d \n", fac);
}
*/

//7-15

/*
#include <stdio.h>

void main()
{
	int i, fac = 1;
	for (i = 1; i <= 10;)
	{
		fac = fac * i;
		i++;
	}
	printf("1*10: %d \n", fac);
}
*/

//7-16

/*

#include <stdio.h>

void main()
{
	int num = 6;

	do
	{
		printf("%d", num);
		num++;
	} while (num < 10);
	printf("\n END while f \n");
}
*/


//195P. 연습문제 1.

/*
#include <stdio.h>

void main()
{
	int num, times, i, result;

	printf("\nInput num:");
	scanf_s("%d", &num);

	printf("1~100 사이의 배수를 입력:");
	scanf_s("%d", &times);

	printf("입력받은 수: %d\n", num);
	printf("%d의 배수: ", num);
	
	i = 1;
	while (i < times)
	{
		result = num * i;
		printf("%d ", result);
		i++;
	}

	printf("\n");
	printf("%d의 배수 개수: %d", num, times);

}
*/


//연습문제 2.

/*
#include <stdio.h>

void main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j= 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
*/

//연습문제 3. ★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★
/*
#include <stdio.h>

void main()
{
	int i, j;

	for (i = 0; i<5; i++)
	{
		for (int k = 0; k < i; k++)
		{
			printf(" ");
		}
		for (j = 7-(i*2); j>0; j--)
		{
			printf("*");
		}
		
		printf("\n");
	}

}
★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★
*/

//연습문제 4.

/*
#include <stdio.h>

void main()
{
	int num, i, result;

	printf("숫자를 입력하세요: ");
	scanf_s("%d", &num);

	for (i = 1; i < 10; i++)
	{
		result = num * i;
		printf("%d * %d = %d\n", num, i, result);
	}


	//i = 1;
	//while (i < 10)
	//{
	//	result = num * i;
	//	printf("%d * %d = %d 입니다. \n", num, i, result);
	//	i++;
	//}
}

*/


//연습문제 5.

/*

#include <stdio.h>

void main()
{

	int num, fac, result;

	printf("팩토리얼 숫자를 입력하세요:");
	scanf_s("%d", &num);

	result = 1;
	for (fac = 1; fac <= num; fac++)
	{
		result = result * fac;
		
		//fac=1 -> 0
		//fac=2 -> 2
		//fac=3 -> 3*2 = 6
		//fac=4 -> 4*3= 12
		//fac=5 -> X
		
	}
	printf("%d의 팩토리얼 결과: %d\n", num, result);
}
*/

//연습문제6.

/*
#include <stdio.h>

void main()
{
	int fir, sec, result;

	while (1)
	{
		printf("첫번째 수를 입력하세요:");
		scanf_s("%d", &fir);

		printf("\n");

		printf("두번째 수를 입력하세요:");
		scanf_s("%d", &sec);

		printf("\n");

		result = fir + sec;
		printf("%d + %d = %d \n\n", fir, sec, result);
	}

}
*/

//연습문제 7.

/*
#include <stdio.h>

void main()
{
	int ave, num, result=0;

	printf("열 과목의 점수의 평균을 계산합니다.\n");
	
	for (num = 1; num <= 10; num++)
	{
		printf("점수를 입력해주세요: ");
		scanf_s("%d", &ave);
		
		result = ave + result;

		//printf("평균 테스트: %.1f \n", (float)result/num);

		if(num==10)
		printf("\n열 과목 점수의 평균: %.1f \n", (float)result / num);

	}
	
}
*/

//연습문제 8.

/*
#include <stdio.h>

void main()
{
	int num, sca, sum;
	num = 0;
	sum = 0;
	while (1)
	{
		printf("정수를 입력하시오: ");
		scanf_s("%d", &sca);
		sum = sca + sum;
		num++;

		if (sca == 0)
			break;
	}

	printf("입력한 수의 합: %d\n", sum);
	printf("총 입력한 수: %d\n", num-1);
}
*/



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


/*
//문제 9

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


