#include <stdio.h>

char num[20] = { 0 };

void scan();
void card();
void regi();


void scan()
{
	int i;
	scanf_s("%s", num, 20);  //�������� char num[20]�� �Է��� ����


	//�ּ� �׽�Ʈprintf("%d", p);

	for (i = 0; num[i] != 0; i++)	{	}
	printf("%d\n", i); // �ڸ��� �׽�Ʈ


	if (i < 13)
	{
		printf("...���������� �ƴմϴ�.\n");
		return;
	}

	if (i == 13 || i == 14) regi(); //�ֹι�ȣ�ΰ��

	if (i > 14) card();

}

void regi()
{
	int i;

	printf("%s", num);


	int check[14] = { 2,3,4,5,6,7,8,9,2,3,4,5 };
	char result[15] = { 0 };

	if (num[6] == 32 || num[6] == 45) //�߰��� �����̽��� Ȥ�� �뽬�� �ִ� ��� 
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
			printf("%d  ", result[k]); //���ڸ� �ִ� ��쿡�� ��.
		}
	}
	//num�� ��¥ ���� ����
	//Ȯ�� ���μ��� ����

	int sum = 0;
	for (i = 0; i < 15; i++)
	{
		sum = result[i] + sum;
	}

	int fin = 0;
	fin = (11 - (sum % 11)) % 10;

	printf("\n%d\n", fin); //�ȴ�!!

	if (fin == num[12])
		printf("...�ֹι�ȣ�� �½��ϴ�.\n");
	else
		printf("...���������� �ƴմϴ�.\n");

	
}

void card()
{
	//printf("%s", num); //�׽�Ʈ

	for (int k = 0; k < 4; k++) //ī�� 0~3 ���� �� ���ڿ��� ���ڰ� �ִ°�� 
	{
		if ((char)num[k] < 48 || (char)num[k]>57)
		{
			printf("...���������� �ƴմϴ�.\n");
			return;
		}
	}

	for (int k = 5; k < 9; k++) //ī�� 5~8 ���� �� ���ڿ��� ���ڰ� �ִ°��
	{
		if (num[k] < 48 || num[k]>57)
		{
			printf("...���������� �ƴմϴ�.\n");
			return;
		}
	}

	for (int k = 10; k < 14; k++) //ī�� 10~13 ���� �� ���ڿ��� ���ڰ� �ִ°��
	{
		if (num[k] < 48 || num[k]>57)
		{
			printf("...���������� �ƴմϴ�.\n");
			return;
		}
	}

	for (int k = 15; k < 19; k++) //ī�� 15~19 ���� �� ���ڿ��� ���ڰ� �ִ°��
	{
		if (num[k] < 48 || num[k]>57)
		{
			printf("...���������� �ƴմϴ�.\n");
			return;
		}
	
	}
	printf("...ī�� ��ȣ�� �½��ϴ�.\n");
}

void main()
{
	while (1)
	{
		printf("�Է°�: ");

		scan();

	}
	
}