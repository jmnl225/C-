//배열 메모장 문제 1.

/*

#include <stdio.h>

void main()
{
	int arr[5] = { 0 };
	int max, j=1;

	for (int i = 0; i < 5; i++)
	{
		printf("정수를 입력하세요: ");
		scanf_s("%d", &arr[i]);

		//printf("%d\n", arr[i]); test
	}

	max = arr[0];
	for (; j < 5; j++)
	{
		if (max < arr[j]) max = arr[j];
	}
	printf("입력된 정수 중에서 최대값: %d\n", max);

	int min = arr[0];
	for (; j < 5; j++)
	{
		if (min > arr[j]) min = arr[j];
	}
	printf("입력된 정수 중에서 최소값: %d\n", min);
	
	int total = 0;
	for (j = 0; j < 5; j++)
	{
		total = total + arr[j];
	}
	printf("입력된 정수의 총 합: %d\n", total);
}
*/

//문제 2번 ~~~~~~~~~~~~~~~~~~~~~~~!!!!!!!!!!! 문자열에는 & 안 씀~!~!!!!!!!!!!!!!!

/*
#include <stdio.h>

void main()
{
	char word[30];

	printf("문자입력: ");
	scanf_s("%s", word,30);

	int len;
	for (len = 0; word[len] != 0; len++)
	{

	}
	printf("\n%d\n", len);
}
*/


//3번.

/*
#include <stdio.h>

void main()
{
	char voca[30];
	int num=0;
	
	scanf_s("%s", voca, 29);

	num = (int)voca[0];
	
	for (int i = 0; i < 30; i++)
	{
		if (num < (int)voca[i]) num = (int)voca[i];
	}

	printf("%c", (char)num);
}
*/


//4번
/*
#include <stdio.h>

void main()
{
	char voca[31];

	printf("단어입력: ");
	scanf_s("%s", voca, 30);

	//printf("\n%s\n\n", voca);

	int len;
	for (len = 0; voca[len] != 0; len++)
	{
	}
	//printf("%d\n", len);

	for (int i = 1; i <= len; i++)
	{
		printf("%c", (char)voca[len - i]);
	}
	printf("\n");
}
*/


//5번

/*
#include <stdio.h>

void main()
{

	int student[10];
	int num = 0, sum=0;

	printf("학생의 수(최대10명): ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("학생 %d의 성적을 입력: ", i+1);
		scanf_s("%d", &student[i]);

		sum = sum + student[i];

		while (student[i] > 100)
		{
			printf("잘못된 성적입니다. 다시 입력하세요: ");
			scanf_s("%d", &student[i]);
				if (student[i] <= 100)
					break;
		}
	}

	printf("\n성적 평균은 %.1f 입니다.\n", (float)sum / num);
}
*/


//6번 문제이해X



//7번



#include <stdio.h>

void main()
{
	int seat[2][10] = { {1,2,3,4,5,6,7,8,9,10},{0,0,0,0,1,1,1,0,1} };

	int yn = 0, num=0;

	while (1)
	{
		printf("좌석을 예약하시겠습니까? Yes=1, No=0을 입력하세요:  ");
		scanf_s("%d", &yn);

		if (yn == 0) break;

		printf("현재 예약상태는 다음과 같습니다.\n");

		printf("-----------------------------\n");
		printf("좌석번호: 1  2  3  4  5  6  7  8  9  10\n");
		printf("-----------------------------\n");
		
		for(int i=0; i<10; i++)
		printf("예약상태: %d", seat[1][i]);

		printf("")



//8번

/*
#include <stdio.h>

void main()
{
	int arr1[5] = { 10,20,30,40,50 };
	int arr2[5] = { 1,2,3,4,5 };
	int arr3[5] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		arr3[i] = arr1[i] + arr2[4 - i];
		printf("%d\t", arr3[i]);
	}
}
*/


