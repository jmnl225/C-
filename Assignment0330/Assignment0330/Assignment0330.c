#include <stdio.h>

//204p. IF�� ���� 8-1.

/*

void main()
{
	printf("\n");

	int num;
	printf("���ڸ� �Է��ϼ���:");
	scanf_s("%d", &num);

	if (num >= 0)
		printf("����Դϴ�.\n");

	if (num < 0)
		printf("�����Դϴ�.\n");

}

*/

/*
void main()
{
	printf("\n");

	int age;

	printf("���� �Է�:");
	scanf_s("%d", &age);

	if (age >= 15 && age <= 100)
		printf("ȸ�� ������ �����մϴ�.\n");

	else
		printf("ȸ�� ������ �Ұ����մϴ�.\n");
}
*/

/*
void main()
{

	printf("\n");

	int num1;
	printf("���� �Է�:");
	scanf_s("%d", &num1);

	if (num1 > 0)
		printf("0���� ū ���� num1�� ����\n");

	else
		printf("0 �Ǵ� 0���� ���� ���� num1�� ����\n");
}
*/

/*
void main()
{
	printf("\n");

	int num2;

	printf("���� �Է�:");
	scanf_s("%d", &num2);

	printf("\n\n");

	if (num2 > 0)
		printf("0���� ū ���� ����\n");

	else
	{
		if (num2 == 0)
			printf("0�� ����\n");

		else
			printf("0���� ���� ���� ����\n");
	}

}
*/

/* ���� 8-6
void main()
{
	int num3;

	printf("���� �Է�:");
	scanf_s("%d", &num3);

	printf("\n");

	if (num3 > 0)
		printf("0���� ū ���� ����\n");

	else if (num3 == 0)
		printf("0�� ����\n");

	else
		printf("0���� ���� ���� ����\n");

}
*/

/* ���� 8-7
void main()
{
	int num4;
	
	printf("\n");

	printf("C��� ���� �Է� :");
	scanf_s("%d", &num4);

	if (num4 >= 95)
		printf("A+ �Դϴ�.\n");
	else
	{
		if (num4 >= 90)
			printf("A�Դϴ�.\n");
		else
		{
			if (num4 >= 85)
				printf("B+�Դϴ�.\n");
			else
			{
				if (num4 >= 80)
					printf("B�Դϴ�.\n");
				else
					printf("F�Դϴ�.\n");
			}
		}
	}

}
*/

//���� 8-8
/*
void main()
{
	int num5;

	printf("C��� ���� �Է�: ");
	scanf_s("%d", &num5);

	if (num5 >= 95)
		printf("A+�Դϴ�. \n");
	else if (num5 >= 90)
		printf("A�Դϴ�. \n");
	else if (num5 >= 85)
		printf("B+�Դϴ�. \n");
	else if (num5 >= 80)
		printf("B�Դϴ�. \n");
	else
		printf("�������� �׸�����\n");
}
*/

/* 8-9
void main()
{
	int num6;

	printf("\n");

	printf("���� �Է�:");
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
	
	printf("�� �� ����ġ�� �����ڽ��ϱ�? ");
	scanf_s("%d", &num7);

	switch (num7)
	{
	case 1:
		printf("������ ���� \n");
		break;
	case 2:
		printf("������ ���� \n");
		break;
	case 3:
		printf("����\n");
		break;

	default:
		printf("����ġ����: 1~3������1");
	}

}
*/

/*
���� 8-11
void main()
{
	char ch;

	printf("(M)onday, (T)useday, (F)riday \n");
	printf("�����Է� (M, T, F) : ");
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

// 222p. ����1.
/*
void main()
{
	int n1, n2;

	printf("\n");

	printf("����1�� �Է����ּ���:");
	scanf_s("%d", &n1);

	printf("\n");

	printf("����2�� �Է����ּ���:");
	scanf_s("%d", &n2);

	printf("\n");

	if (n1 > n2)
		printf("�� ū ���� %d �Դϴ�.", n1);
	else if (n1 == n2)
		printf("�� ���� �����ϴ�.", n2);
	else
		printf("�� ū ���� %d �Դϴ�.", n2);
}

*/

//����2 �𸣰ڴ�

/*
void main()
{
	printf("\n");

	int nb, nb1, nb2, nb3;

	printf("���ڸ� �������� ���ڸ� �Է��ϼ���: ");
	scanf_s("%d", nb);

	printf("\n\n");

	nb1 = nb / 100
		if (nb1 % 2 == 0)
			printf("%d: ¦�� ", nb1);
		else
			printf("%d: Ȧ�� " nb1);

	nb2=nb/??????????????????????????????????
	}
	*/

/*
void main()
{
	
	char n1,n2,n3;

	printf("���ڸ� �������� �� �ڸ� ���ڵ��� ¦��, Ȧ������ �����Ͽ� ���.");

	printf("\n\n");

	printf("���ڸ� �������� ���ڸ� �Է��ϼ���: ");
	scanf_s("%c", &n1);
	scanf_s("%c", &n2);

	printf("\n");

	if (n1 % 2 == 0)
		printf("%c: ¦�� ", n1);
	else
		printf("%c: Ȧ�� ", n1);

	if (n2 % 2 == 0)
		printf("%d: ¦�� ", n2);
	else
		printf("%d: Ȧ�� ", n2);
	
}
*/

//����3
/*
void main()
{
	printf("\n");

	int score;

	printf("100 ������ ������ �Է��ϼ���.:");
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

//����5

/*
void main()
{
	printf("\n");

	int a, b, c;

	printf("����1 �Է�: ");
	scanf_s("%d", &a);
	printf("\n");

	printf("����2 �Է�: ");
	scanf_s("%d", &b);
	printf("\n");

	printf("����3 �Է�: ");
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

	printf("������ �Է��ϼ���: ");
	scanf_s("%lf", &num8);

	printf("\n\n");

	int real;

	real = (int)num8;

	printf("�Էµ� ���� ���밪: %d \n", real);

}

*/

/*
void main()
{
	printf("\n");

	char one;

	printf("�� ���ڸ� �Է����ּ���: ");
	scanf_s("%c", &one);

	printf("\n");

	printf("���: %c", (one < 90) ? ((one<65)? one: one+32): one - 32);

}
*/

void main()
{

	int a, b, c;

	printf("\n ������ �����ּ���. \n\nA:");
	scanf_s("%d", &a);

	printf("B:");
	scanf_s("%d", &b);

	printf("C:");
	scanf_s("%d", &c);

	printf("\n\n");

	printf("�� ������ ��: %d\n", a + b + c);

	float ave;
	ave = (a + b + c) / 3;

	printf("�� ������ ���: %.2f\n", ave);

	printf("�� ���� �� �ִ밪: %d\n", (a > b && a > c) ? a :(b > c) ? b : c);

	printf("�� ���� �� �ּҰ�: %d\n", (a < b&& a < c) ? a :(b < c) ? b : c);

	
	/*if (a >= c && b > c)
		printf("�� ���� �� �ִ밪 : %d\n", a);
	else if (b >= c && c > a)
		printf("�� ���� �� �ִ밪 : %d\n", b);
	else if (c >= b && b > a)
		printf("�� ���� �� �ִ밪 : %d\n", c);
	else
		printf("�� ���� �� �ִ밪: %d\n", a);


	if (a <= b && b < c)
		printf("�� ���� �� �ּҰ� : %d\n", a);
	else if (b <= c && c < a)
		printf("�� ���� �� �ּҰ� : %d\n", b);
	else if (c <= a && a < b)
		printf("�� ���� �� �ּҰ� : %d\n", c);*/
	

	


}