

// �迭 !!!! 4/3

//280P. ���� 1-1

/*
#include <stdio.h>

void main()
{
	int student[5];

	student[0] = 90;
	student[1] = 80;
	student[2] = 70;

	printf("ù ��° �л��� ����: %d \n", student[0]);
	printf("�� ��° �л��� ����: %d \n", student[1]);
	printf("�� ��° �л��� ����: %d \n", student[2]);
	printf("�� ��° �л��� ����: %d \n", student[3]);
	printf("�ټ� ��° �л��� ����: %d \n", student[4]);
}
*/


/*
#include <stdio.h>

void main()
{
	int array1[5] = { 90, 80, 70, 60, 50 };
	int array2[] = { 90,80,70,60,50 };
	int array3[5] = { 90,80,70 };

	printf("%d %d %d %d %d \n", array1[0], array1[1], array1[2], array1[3], array1[4]);
	printf("%d %d %d %d %d \n", array2[0], array2[1], array2[2], array2[3], array2[4]);
	printf("%d %d %d %d %d \n", array3[0], array3[1], array3[2], array3[3], array3[4]);

}
*/

//���� 1-3

/*
#include <stdio.h>

void main()
{
	int array[3] = { 87,99,80 };
	int total = 0;

	total = array[0] + array[1] + array[2];

	printf("������ %d �̰�", total);
	printf("����� %.2lf �Դϴ�. \n", (double)total / 3);
}
*/

// ���� 1-4

/*
#include <stdio.h>

void main()
{
	int array[3] = { 87,65,78 };
	int i, total = 0;

	for (i = 0; i < 3; i++)
	{
		total = total + array[i];
		printf("�迭�� ��� array[%d]�� ��: %d\n", i, array[i]);
	}

	printf("������ %d�̰� ", total);
	printf("����� %.2lf �Դϴ�.\n", (double)total / 3);
}
*/


//���� 1-5

/*
#include <stdio.h>

void main()
{
	int array1[3] = { 1,2,3 };
	char array2[3] = { 'A','B','C' };

	printf("%x %x %x \n", array1[0], array1[1], array1[2]);
	printf("%x %x %x \n", array2[0], array2[2], array2[2]);
}
*/


// 295P. �������� 2.

/*
#include <stdio.h>

void main()
{
	printf("10���� �л� ������ �迭�� ����, ������ ��� ���ϱ�\n\n");

	int score[10] = { 30,40,55,70,80,60,45,70,90,45 };
	int total = 0;

	for (int i = 0; i < 10; i++)
	{
		total = total + score[i];
	}
	
	printf("����: %d \n", total);
	printf("���: %d \n", total / 10);
}
*/


//�������� 3.

/*
#include <stdio.h>

void main()
{
	int table[3][5] = { 
		{90,78,77,98,98},
		{80,45,67,88,57},
		{88,99,65,55,74} };

	int x =0, y = 0;
	int xx=0, yy=0;

	//x=table[0][1]+talbe[0][2]+

	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			x = x + table[i][j];
			xx = xx + table[i][j];
		}
		printf("%d��° �������� ��: %d\n", j, x);
		x = 0;
	}

	printf("\n");

	for (int k = 0; k < 3; k++)
	{
		for (int z = 0; z < 5; z++)
		{
			y = y + table[k][z];
			yy= yy + table[k][z];
		}
		printf("%d��° �������� ��: %d\n", k, y);
		y = 0;
	}

	printf("\n");

	printf("������ ��: %d\n", xx);
	printf("������ ��: %d\n", yy);
	printf("����: %d", yy);
}
*/


//�������� 4��

/*
#include <stdio.h>

void main()
{
	int array[9];
	int x;

	printf("��� �ϳ� �Է�: ");
	scanf_s("%d", &x);

	for (int i = 1; i < 10; i++)
	{
		array[i-1] = x * i;
		printf("%d * %d = %d \n", x, i, array[i - 1]);
	}
}
*/

//�������� 5��

/*
#include <stdio.h>

void main()
{
	float arr1[5] = { 2.2,3.5,2.5,10.1,4.0 };
	float arr2[5] = { 3.3,2.0,4.0,1.0,2.5 };

	float total1 = 1, total2 = 1;

	for (int i = 0; i < 5; i++)
	{
		total1 = total1 * arr1[i];
	}

	for (int j = 0; j < 5; j++)
	{
		total2 = total2 * arr2[j];
	}

	printf("�����: %.1f \t %.1f", total1, total2);

}
*/



//������ �迭~~~~~~~~~~~~~~~~~~~~~~~~~ 
//301P. ���� 2-1 

/*
#include <stdio.h>

void main()
{

	int array[4][3];

	array[0][0] = 1; array[0][1] = 2; array[0][2] = 3;
	array[1][0] = 4; array[1][1] = 5; array[1][2] = 6;
	array[2][0] = 7; array[2][1] = 8; array[2][2] = 9;
	array[3][0] = 10; array[3][1] = 11; array[3][2] = 12;
	
	printf("%d %d %d \n", array[0][0], array[0][1], array[0][2]);
	printf("%d %d %d \n", array[1][0], array[1][1], array[1][2]);
	printf("%d %d %d \n", array[2][0], array[2][1], array[2][2]);

}
*/


//���� 2-3

/*
#include <stdio.h>

void main()
{
	//2���� �迭�� ����� ���ÿ� �� ������ ������ ����(�ʱ�ȭ)
	
	int array1[4][3] = { {1,2},{3},{4},{5} };
	int array2[4][3] = { {1,2,3},{4,5,6},{7,8,9},{10} };

	//2���� �迭 array1�� ���

	printf("%d %d %d \n", array1[0][0], array1[0][1], array1[0][2]);
	printf("%d %d %d \n", array1[1][0], array1[1][1], array1[1][2]);
	printf("%d %d %d \n", array1[2][0], array1[2][1], array1[2][2]);
	printf("%d %d %d \n", array1[3][0], array1[3][1], array1[3][2]);

	printf("-------------------------------------------------\n");

	printf("%d %d %d \n", array2[0][0], array2[0][1], array2[0][2]);
	printf("%d %d %d \n", array2[1][0], array2[1][1], array2[1][2]);
	printf("%d %d %d \n", array2[2][0], array2[2][1], array2[2][2]);
	printf("%d %d %d \n", array2[3][0], array2[3][1], array2[3][2]);

}
*/


//���� 2-4

/*
#include <stdio.h>

void main()
{
	int array[2][2];
	int i, j;

	//2���� �迭�� ������ �Է�
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("������ �Է��ϼ���: ");
			scanf_s("%d", &array[i][j]);
		}
	}

	//2���� �迭�� ������ ���
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf(" %3d ", array[i][j]);
		}
		printf("\n");
	}

}
*/


//���� 2-5 309P.

/*
#include <stdio.h>

void main()
{

	int i, j, k;
	int array[3][3][3] = { 
		{1,2,3,4,5,6,7,8,9}, 
		{10,11,12,13,14,15,16,17,18}, 
		{19,20,21,22,23,24,25,26,27} };

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 3; k++)
			{
				printf(" %d ", array[i][j][k]);
			}
			printf("\n");
		}
		printf("--------------------------------\n");
	}
}
*/


//----------------------------324P. ��������1-------------------

#include <stdio.h>

void main()
{
	int arr[2][4] = { {1,2,3,4,},{5,6,7,8} };

	for (int j = 0; j < 2; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			printf(" %d ", arr[j][i]);
		}
		printf("\n");
	}
	printf("\n");
	for (int j = 0; j < 4; j++)
	{
		for (int i = 1; i >=0; i--)
		{
			printf(" %d ", arr[i][j]);
		}
		printf("\n");
	}

}