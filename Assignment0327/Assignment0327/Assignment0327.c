#include <stdio.h>

void main()
{
	/*
	int i=0, j=0, k=0;

	printf("\n\n");

	printf("i= %d, j= %d, k=%d \n", i, j, k);

	i = 1;
	j = 5;
	k = 7;

	printf("i=%d, j-%d, k=%d \n", i, j, k);
	*/


/* 96p. ���� 5-3.
	int a, b;

	a = 6;
	b = 2;

	printf("���� ������ ���: %d \n", a + b);
	printf("���� ������ ���: %d \n", a - b);
	printf("���� ������ ���: %d \n", a * b);
	printf("������ ������ ���: %d \n", a / b);
	printf("������ ������ ���: %d \n", a % b);

*/

	/* 
	98 p. ���� 5-4
	int num1, num2;

	num1 = 10 / 3;
	num2 = 10 % 3;

	printf("\n ��: %d \n", num1);
	printf("������: %d \n", num2);
	*/

	printf("\n");

	/* 100 p. ���� 5-5
	int num1 = 1, num2 = 2, num3 = 3, num4 = 4, num5 = 5;

	num1 = num1 + num2;
	printf("���� ���� ���� ���: num1�� ������: %d \n", num1);

	num2 = num2 - 2;
	printf("���� ���� ���� ���: num2�� ������: %d\n", num2);

	num3 = num3 * 2;
	printf("���� ���� ���� ���: num3�� ������: %d \n", num3);

	num4 = num4 / 2;
	printf("���� ������ ���� ���:num4�� ������: %d \n", num4);

	num5 = num5 % 2;
	printf("���� ������ ���� ���:num5�� ������: %d \n", num5);
	*/

	/* ���� 5-6
	int num1 = 10;
	printf("%d \n", num1);

	num1++;
	printf("%d \n", num1);

	++num1;
	printf("%d \n", num1);

	--num1;
	printf("%d \n", num1);

	num1--;
	printf("%d \n", num1);
	*/

	/* ���� 5-7
	int num1 = 10, num2 = 10;
	int a, b;

	a = ++num1;
	printf("%d, %d \n", a, num1);

	b = num2++;
	printf("%d, %d \n", a, num2);
	*/

	/* ���� 5-8
	int num1 = 10, num2 = 10;
	int a, b;

	num1 = num1 + 1;
	a = num1;

	printf("%d, %d \n", a, num1);
	
	b = num2;
	num2 = num2 + 1;
	printf("%d, %d \n", b, num2);
	*/

	/* ���� 5-9
	int num1 = 10, num2 = 10;

	printf("%d \n", ++num1);
	printf("%d \n", num1);

	printf("\n\n");

	printf("%d \n", num2++);
	printf("%d \n", num2);
	*/

	/* ���� 5-10
	int num1 = 2, num2 = 4;
	int result1, result2, result3, result4;

	result1 = (num1 > num2);
	result2 = (num1 <= num2);
	result3 = (num1 == num2);
	result4 = (num1 != num2);

	printf("result1�� ����� �� %d \n", result1);
	printf("result2�� ����� �� %d \n", result2);
	printf("result3�� ����� �� %d \n", result3);
	printf("result4�� ����� �� %d \n", result4);
	*/

	/* ���� 5-11
	int num1 = 2, num2 = 3, num3 = 1;
	int result1, result2, result3;

	result1 = (num1 > 0) && (num2 < 10);
	printf("result1�� ����� �� %d \n", result1);

	result2 = (num2 <= 2) || (num3 > 5);
	printf("result2�� ����� �� %d \n", result2);

	result3 = (!num3);
	printf("result3�� ����� �� %d \n", result3);
	*/

/*���� 5-12
    int num1 = 2, num2 = 3;
    int result1;

    result1 = (num1 > num2) ? num1 : num2;
	printf("result1�� ����� �� %d \n", result1);

*/

    //�� ���� �Է� �޾Ƽ� �� �� ���� ���� ���Ͽ� ����ϴ� ���α׷��� �ۼ�. ��, �� ���� ������ �� ���� ����϶�. 
    //129P. ����2.
/*
    int num1, num2;
	int result1;

	printf("������ ��1 �� �Է��ϼ���. :");
	scanf_s("%d", &num1);

	printf("\n\n");

	printf("������ ��2 �� �Է��ϼ���. :");
	scanf_s("%d", &num2);

	result1 = (num1 < num2) ? num1 :
		      (num1 == num2) ? num1 : num2;

	printf("\n\n");

	printf("�����: %d \n", result1);
*/
	// 130p. #4
	// ����ڷκ��� ���� �� ���� �Է¹޾� ������ ���� a,b,c�� ����, ���� �����ڸ� ����Ͽ� �̵� �� ���� ū �� ���.
/*
	int a, b, c;
	int result;

	printf("\n\n");

	printf("������ ��1 �Է�:");
	scanf_s("%d", &a);

	printf("\n");

	printf("������ ��2 �Է�:");
	scanf_s("%d", &b);

	printf("\n");

	printf("������ ��3 �Է�:");
	scanf_s("%d", &c);

	printf("\n");

	result = (a > b && a > c) ? a :
		(b > c) ? b : c;

		printf("�����: %d", result);
*/
		
        /* 5��
        int won;
		int dollar;

		printf("\n");

		printf("�޷��� ��:");
		scanf_s("%d", &dollar);

		printf("\n");

		won = dollar * 1213;

		printf("���� �޷� ��� ��ȭ ��ġ: %d ��", won);

		*/

        //8��
        /*
        printf("\n");

		printf("���� �ð��� �ʷ� ������ִ� ���α׷� \n");
		printf("\n");

		int housr, minute, second;
		int result;

		printf("����ΰ���? :");
		scanf_s("%d", &housr);

		printf("\n");

		printf("����ΰ���? :");
		scanf_s("%d", &minute);

		printf("\n");

		printf("�����ΰ���? :");
		scanf_s("%d", &second);

		printf("\n\n");

		result = (housr * 3600) + (minute * 60) + second;
		printf("����� ����ð� 00�� 00�� 00�ʷκ��� %d �ʰ� �������ϴ�.\n");
		*/


        //���� 9.

        /*
		double result;

        result = 150 * 0.45;

        printf("\n �а��� 150�Ŀ��� %.3lf kg �Դϴ�.\n",result);

		printf("\n\n\n");


		//���� 10.

		double result2;

		result2 = 15000 * 30.45;
		result2 = result2 / 1000;

		printf("15000 ��Ʈ ����� ���󿡼� %.4lf M ������ �ֽ��ϴ�. \n", result2);
		*/



		//���ƾƾƾƾƾƤ��ӾӤ� �ФФФФ� �˹̤�;���� ~~~!!!
		//���� �����մϴ�. ����1.
		
		/*
		printf("\n\n\n");

		printf("����1. ������ ų�ι��ͷ� ��ȯ�ϴ� ���α׷�.");

		int num11;
		double result3;

		printf("\n\n");
		
		printf("������ �Է��ϼ���. :");
		scanf_s("%d", &num11);

		printf("\n\n");

		result3 = num11 * 1.609;

		printf("%d ������ %lf ų�ι��� �Դϴ�.\n", num11, result3);
		
		printf("\n\n");
		*/


        /*
		printf("����2. �������� ���� ��, ��ǰ����, �ΰ���, �ܵ� ���");

		int money, price, tax, change;

		printf("\n\n");

		printf("���� �ݾ�:");
		scanf_s("%d", &money);

		printf("\n");

		printf("��ǰ ����:");
		scanf_s("%d", &price);

		printf("\n\n");

		tax = price * 0.1;
		printf("�ΰ���: %d", tax);
		
		printf("\n\n");

		change = money - price;
		printf("�ܵ�: %d", change);

		printf("\n\n");

		*/

        /*
        printf("\n\n");

        printf("����3. ����ڷκ��� ���� �������� �޾� ���� ���");

		printf("\n\n");

		int num22;
		double rad;
		
		printf("�������� ���� �����ּ���:");
		scanf_s("%d", &num22);

		printf("\n\n");

		rad = (double)num22*(double)num22*3.14;

		printf("������ ��: %.2lf", rad);

		printf("\n");
		*/

        printf("\n\n");

		printf("���� 4. ���α׷� ����ڷκ��� ��ǥ�� �޾� ���簢���� ���� ���ϱ� \n");

		printf("\n\n");

		int x1, y1, x2, y2, result4;

		printf("�� ����� x��ǥ:");
		scanf_s("%d", &x1);

		printf("\n");

		printf("�� ����� y��ǥ:");
		scanf_s("%d", &y1);

		printf("\n");

		printf("�� ����� x��ǥ:");
		scanf_s("%d", &x2);

		printf("\n");

		printf("�� ����� y��ǥ:");
		scanf_s("%d", &y2);

		printf("\n\n");

	result4=(x2 - x1)*(y2 - y1);

		printf("������ ��: %d ", result4);
}