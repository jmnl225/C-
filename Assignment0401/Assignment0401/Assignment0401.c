// ---------------------------------------------------------------------------------------

//�޸��� Control ����1.

/*
#include <stdio.h>

void main()
{
	int sca, num;

	printf("���� ���� �Է�:");
	scanf_s("%d", &sca);

	num = 0;
	while (num < sca)
	{
		printf("Hello World!\n");
		num++;
	}
}
*/

//����2

/*
#include <stdio.h>

void main()
{
	int sca, num;

	printf("���� ������ �Է��ϼ���:");
	scanf_s("%d", &sca);

	for (num = 1; num <= sca; num++)
	{
		printf("%d ", 3 * num);
	}
}
*/


//����3

/*
#include <stdio.h>

void main()
{
	int num, sca,sum=0;
	num = 0;
	while (1)
	{
		printf("������ �Է��ϼ���:");
		scanf_s("%d", &sca);
		sum = sum + sca;
		num++;

		if (sca == 0)
		break;
	}

	printf("\n�Է¹��� ���� ��: %d\n", sum);
	printf("�Է¹��� ���� ����: %d\n", num-1);
}
*/

//����4

/*
#include <stdio.h>

void main()
{
	int dan, i;
	printf("�ܼ��� �Է��ϼ���:");
	scanf_s("%d", &dan);

	for (i = 9; i >=1; i--)
	{
		printf("%d * %d = %d\n", dan, i, dan * i);
	}
}
*/


//���� 5

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


//���� 6

/*
#include <stdio.h>

void main()
{
	int n1, n2, result;
	printf("����1 �Է�: ");
	scanf_s("%d", &n1);

	printf("����2 �Է�: ");
	scanf_s("%d", &n2);

	printf("%d", n1 > n2 ? n1 - n2 : n2 - n1);

}
*/


//���� 7
/*
#include <stdio.h>

void main()
{
	int n1, n2, result;
	printf("����1 �Է�: ");
	scanf_s("%d", &n1);

	printf("����2 �Է�: ");
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

// ���� 8 ???????????????????????????????????????????????
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



//���� 9

/*
#include <stdio.h>

void main()
{
	int qtt, i, num, sum=0;
	printf("��� ���ڸ� �Է��Ͻ� �ǰ���? :");
	scanf_s("%d", &qtt);

	for (i = 0; i < qtt; i++)
	{
		printf("������ �Է��ϼ���: ");
		scanf_s("%d", &num);
		sum = sum + num;
	}
	printf("\n�Է��� ���� ��� ��: %.2f", (float)sum / qtt);
}
*/


//���� 10

/*
#include <stdio.h>

void main()
{
	int sca, i;

	for (i = 0; i < 5; i++)
	{
		printf("5���� ����� ������ �Է����ּ���: ");
		scanf_s("%d", &sca);

		while (sca < 0)
		{
			printf("�ٽ� �Է��ϼ���.\n");
			scanf_s("%d", &sca);

			if (sca > 0)
				break;
			else
				continue;
		}
	}
}
*/



//���� 11

#include <stdio.h>
/*
void main()
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("��");
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
			printf("��");
		}

		printf("*");
		printf("\n");
	}

}
*/



// ������ ��� ���α׷� ���� 


/*
#include <stdio.h>

void main()
{
	printf("������ ��� ���α׷��Դϴ�. \n");

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

	int num=1; // ���� ��ġ�� �Է��� ����
	int line = 1; // ���� ������ ��ġ
	int i; // �Ųٷ� ����ϱ� ���� ����
	int data; // �ִ밪
	int data1; // ���� ��� ����

	printf("���� ��� ���α׷� \n");
	printf("����Ϸ��� �ִ밪 �Է�: ");
	scanf_s("%d", &data);

	printf("�� �� ����Ϸ��� ���� ����: ");
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

	printf("�� ���� ����: ");
	scanf_s("%d", &rep);

	printf("�ִ밪�� �����ÿ�: ");
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

//��Ÿ

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