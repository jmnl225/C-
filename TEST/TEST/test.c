#include <stdio.h>

void main()
{
	/*
	printf("%3s\n", "*");
	printf("%4s\n", "***");
	printf("%5s\n", "*****");
	printf("%4s\n", "***");
	printf("%3s\n", "*");
	*/

	printf("  *\n");
	printf(" ***\n");
	printf("*****\n");
	printf(" ***\n");
	printf("  *\n");
	

	/*
	int a = 3;
	int b = 1;
	printf("\n��������2 p.53\n\n");

	printf("%d * %d = %2d\n", a, b, a * b);
	printf("%d * %d = %2d\n", a, 2, a * 2);
	printf("%d * %d = %2d\n", a, 3, a * 3);
	printf("%d * %d = %2d\n", a, 4, a * 4);
	printf("%d * %d = %2d\n", a, 5, a * 5);
	printf("%d * %d = %2d\n", a, 6, a * 6);
	printf("%d * %d = %2d\n", a, 7, a * 7);
	printf("%d * %d = %2d\n", a, 8, a * 8);
	printf("%d * %d = %2d\n", a, 9, a * 9);
	*/

	/*
	printf("\n2020-03-25 ����\n\n");
	printf("����1.\n");
	printf("ȫ�浿\nȫ �� ��\nȫ  ��  ��  \nȫ\t��\t��\n\n\n");

	printf("����2. \n");
	printf("�̸�: ������\n");
	printf("�ּ�: ����� ������\n");
	printf("��ȭ��ȣ: 000-1111-2222\n\n\n");


	printf("����3. \n");
	printf("�� �̸��� %s �Դϴ�.\n", "ȫ�浿");
	printf("�� ���̴� %d �� �̰��.\n", 20);
	printf("���� ��� ���� �������� %d-%d �Դϴ�.\n\n\n", 123, 456);

	printf("����4. \n");
	printf("%d * %d = %d\n", 4, 5, 4 * 5);
	printf("%d * %d = %d\n", 7, 9, 7 * 9);
	*/

	
	printf("\nPrintf_Ex\n\n");

	printf("���ڿ� ���:[%-20s]\n", "���ѹα�");
	printf("���ڿ� ���:[%20s]\n", "���ѹα�");
	printf("���� ���:[%10c]\n", 'a');
	printf("������ ����:[%10d]\n", 1234);
	printf("0 ����:[%010d]\n", 1234);
	printf("0 ����5:[%05d]\n", 1234);
	printf("0 ����7:[%07d]\n", 1234);
	printf("�����ǻ���:[%010d]\n", -1234);
	printf("�ε��Ҽ��� ���:[%8.2f]\n", 123.4567);
	printf("�ε��Ҽ��� ���:[%-8.2f]\n", 123.4567);
	printf("�ε��Ҽ��� ���:[%10.2f]\n", 0.0012345);
	printf("������� F ���:[%10.2F]\n", 0.0012345);
	//"%x.zf" ��� �Լ��� x�� ���� �ڸ���, z�� �Ҽ��� .���� �ڸ����� ��Ÿ����.
	printf("�ε��Ҽ��� ���:[%10.3e]\n", 0.0012345);
	printf("�ε��Ҽ��� ���:[%10.7g]\n", 0.00012345);
	printf("�׽�Ʈ g [%6.5g]\n"), 0.001234);
}
