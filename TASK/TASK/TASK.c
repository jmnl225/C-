#include <stdio.h>

void card();

void regi()
{
	char num[20] = { 0 };
	int i,j;

	scanf_s("%s", num, 19);

	for (i = 0; num[i] != 0; i++)
	{
	}
	//printf("%d", i); for i �ڸ��� �׽�Ʈ


	for (j = 0; j < 20; j++)
	{
		if (num[j] >= 65)
		{
			printf("...���������� �ƴմϴ�.\n");
			return;
		}
	}


		int check[14] = {2,3,4,5,6,7,8,9,2,3,4,5};
		char result[15] = { 0 };

		if (i == 13 || i == 14) //�ֹε�Ϲ�ȣ�ΰ��
		{

			if (num[6] == 32||num[6]==45) //�߰��� �����̽��� Ȥ�� �뽬�� �ִ� ��� ?? �ȵ�. �־ȴ�İ�~~~~~~!
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
					result[k] = num[k] * check[k-1];
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
			//num�� ��¥ ���� �� ����
			//Ȯ���غ��ô�

			int sum = 0;
			for (i = 0; i < 15; i++)
			{
				sum = result[i] + sum;
			}

			int fin = 0;
			fin = (11 - (sum % 11)) % 10;

			printf("\n%d\n", fin);//�Ǳ�Ǵµ� ���ڸ� �־���� �ФФ�

			if (fin == num[12])
				printf("...�ֹι�ȣ�� �½��ϴ�.\n");
			else
				printf("...���������� �ƴմϴ�.\n");
			

		}

		
		if (i < 13)
		{
			printf("...���������� �ƴմϴ�.\n");
			return;
		}
		else
		{
			for (j = 0; j < 20; j++)
			{
				if (num[j] >= 65)
				{
					printf("...���������� �ƴմϴ�.\n");
					return;
				}
			}
		}



		//if (i > 15) //ī���ȣ�� ���
		//{
		//	int max;
		//	for (int j = 0; j < 20; j++)
		//	{
		//		max = num[0];
		//		if (max < num[j]) max = num[j];
		//		card(max);
		//	}

		//}

}



void card()
{
	/*
	if (max >= 65)
		printf("...���������� �ƴմϴ�.");

	//�̷��� ���ڸ� �°� �߰��� --�� ���� �°Ե� �����ʿ�


	if (i > 15)
	{
		for (j = 0; j < 20; j++)
		{
			if (num[j] >= 65)
			{
				printf("...���������� �ƴմϴ�.");
				break;
			}
			printf("...ī���ȣ�� �½��ϴ�.");
			return;
		}
	}
	printf("...ī���ȣ�� �½��ϴ�.");
	*/


}



void main()
{
	while (1)
	{
		printf("�Է°�: ");
		
		regi();

	}
	
}