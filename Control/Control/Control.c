#include <stdio.h>

/*

void main()
{
	int score; //점수를 저장하는 변수

	printf("\n");

	printf("점수를 입력하세요: ");
	scanf_s("%d", &score);

	printf("\n");

	//printf("  %d  , score"); 테스트 목적

	if (score >= 90)
	{
		printf("A학점 입니다.\n");
	}

	else
	{
		if (score >= 80 && score < 90)
		{
			printf("B학점 입니다.\n");
		}

		else
		{
			if (score >= 70)
			{
				printf("C학점 입니다.\n");
			}
			else
			{
				if (score >= 60)
				{
					printf("D학점 입니다.\n");
				}
				else
				{
					printf("F학점 입니다.\n");
				}
			}
		}

	}

	printf("\n");

	printf("학점 계산이 완료 되었습니다. 수고하셨습니다. \n");

}

*/


//아~ 배고프다ㅏㅏ 오늘 모먹냐

/*
void main()
{
	printf("\n");

	printf("원하는 구구단의 단수 입력");

		printf("\n");

		int num;
	scanf_s("%d", &num);

	if (num >= 2 && num <= 9)
	{
		printf("%d*%d=%d\n", num, 1, num * 1);
		printf("%d*%d=%d\n", num, 2, num * 2);
		printf("%d*%d=%d\n", num, 3, num * 3);
		printf("%d*%d=%d\n", num, 4, num * 4);
		printf("%d*%d=%d\n", num, 5, num * 5);
		printf("%d*%d=%d\n", num, 6, num * 6);
		printf("%d*%d=%d\n", num, 7, num * 7);
		printf("%d*%d=%d\n", num, 8, num * 8);
		printf("%d*%d=%d\n", num, 9, num * 9);
	}
	else
	{
		printf("잘못 입력하셨습니다. 2~9단 사이로 적어주세요.\n");
	}
}

*/

/*
void main()
{
	int num=2;

	printf("\n");

	printf("1. 딸기 \n2. 바나나 \n3. 코코넛 \n\n당신은 어떤 음식을 좋아하시나요? :");
	scanf_s("%d", &num);

	printf("\n\n\n");

	switch (num)
	{
	case 1:
		printf("당신은 딸기를 좋아하는 타입.\n");
		break;
	case 2:
		printf("당신은 바나나를 좋아하는 타입.\n");
		break;
	case 3:
		printf("당신은 코코넛을 좋아하는 타입.\n");
		break;
	default:
		printf("당신은 반항적인 타입.\n");

	}

	printf("\n");

	printf("\n 종료. \n");

}
*/

void main()
{

	printf("\n");

	printf("학점을 입력하면 점수 영역을 알려주는 프로그램");

	printf("\n");

	char grade;
	printf("학점 입력:");
	scanf_s("%c", &grade);

	printf("\n\n");

	switch (grade)
	{
	case'A':
	case'a':
		printf("90~100점 사이입니다. \n");
		break;

	case'B':
	case'b':
		printf("80~90점 사이입니다.\n");
		break;
	case'C':
	case'c':
		printf("70~79점 사이입니다.\n");
	case'D':
	case'd':
		printf("60~69점 사이입니다.\n");
	case'F':
	case'f':
		printf("60점 미만입니다.\n");
	default:
			printf("잘못 입력했어요.\n");
	}
}