#include <stdio.h>

/*

void main()
{
	int score; //������ �����ϴ� ����

	printf("\n");

	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &score);

	printf("\n");

	//printf("  %d  , score"); �׽�Ʈ ����

	if (score >= 90)
	{
		printf("A���� �Դϴ�.\n");
	}

	else
	{
		if (score >= 80 && score < 90)
		{
			printf("B���� �Դϴ�.\n");
		}

		else
		{
			if (score >= 70)
			{
				printf("C���� �Դϴ�.\n");
			}
			else
			{
				if (score >= 60)
				{
					printf("D���� �Դϴ�.\n");
				}
				else
				{
					printf("F���� �Դϴ�.\n");
				}
			}
		}

	}

	printf("\n");

	printf("���� ����� �Ϸ� �Ǿ����ϴ�. �����ϼ̽��ϴ�. \n");

}

*/


//��~ ������٤��� ���� ��Գ�

/*
void main()
{
	printf("\n");

	printf("���ϴ� �������� �ܼ� �Է�");

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
		printf("�߸� �Է��ϼ̽��ϴ�. 2~9�� ���̷� �����ּ���.\n");
	}
}

*/

/*
void main()
{
	int num=2;

	printf("\n");

	printf("1. ���� \n2. �ٳ��� \n3. ���ڳ� \n\n����� � ������ �����Ͻó���? :");
	scanf_s("%d", &num);

	printf("\n\n\n");

	switch (num)
	{
	case 1:
		printf("����� ���⸦ �����ϴ� Ÿ��.\n");
		break;
	case 2:
		printf("����� �ٳ����� �����ϴ� Ÿ��.\n");
		break;
	case 3:
		printf("����� ���ڳ��� �����ϴ� Ÿ��.\n");
		break;
	default:
		printf("����� �������� Ÿ��.\n");

	}

	printf("\n");

	printf("\n ����. \n");

}
*/

void main()
{

	printf("\n");

	printf("������ �Է��ϸ� ���� ������ �˷��ִ� ���α׷�");

	printf("\n");

	char grade;
	printf("���� �Է�:");
	scanf_s("%c", &grade);

	printf("\n\n");

	switch (grade)
	{
	case'A':
	case'a':
		printf("90~100�� �����Դϴ�. \n");
		break;

	case'B':
	case'b':
		printf("80~90�� �����Դϴ�.\n");
		break;
	case'C':
	case'c':
		printf("70~79�� �����Դϴ�.\n");
	case'D':
	case'd':
		printf("60~69�� �����Դϴ�.\n");
	case'F':
	case'f':
		printf("60�� �̸��Դϴ�.\n");
	default:
			printf("�߸� �Է��߾��.\n");
	}
}