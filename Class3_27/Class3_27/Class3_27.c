/*
#include <stdio.h>

void main()
{
	
	printf("\n\n");

	int num1;
	int num2;

	printf("������ ���� �Է��ϼ���: ");
	scanf_s("%d", &num1);

	printf("\n\n");

	printf("������ ���� �Է��ϼ���: ");
	scanf_s("%d", &num2);

	printf("\n\n");

	printf("���� �Ϸ� �Ǽ���! ������ %d�� %d���Դϴ�.\n", num1, num2);

}
*/

#include <stdio.h>

void main()
{
	printf("\n\n");

	printf("������ �Է��ϸ� ������ ������ִ� ���α׷��Դϴ�.\n\n");

	printf("\n\n");

	int score;

	printf("����� ������ �Է��ϼ���:");
	scanf_s("%d", &score);

	printf("\n\n");

	//���� ���

	/*
	char grade = (score >= 90 && score <= 100) ? 'A' :
		(score >= 80 && score < 90) ? 'B' :
		(score >= 70 && score < 80) ? 'C' :
		(score >= 60 && score < 70) ? 'D' : 'F';
		*/

	char grade = (score >= 90) ? 'A' :
		(score >= 80) ? 'B' :
		(score >= 70) ? 'C' :
		(score >= 60) ? 'D' : 'F';

	//���
	printf(" ����� ������ %c �Դϴ�.\n", grade);
}