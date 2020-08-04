/*
#include <stdio.h>

void main()
{
	
	printf("\n\n");

	int num1;
	int num2;

	printf("오늘의 월을 입력하세요: ");
	scanf_s("%d", &num1);

	printf("\n\n");

	printf("오늘의 일을 입력하세요: ");
	scanf_s("%d", &num2);

	printf("\n\n");

	printf("좋은 하루 되세요! 오늘은 %d월 %d일입니다.\n", num1, num2);

}
*/

#include <stdio.h>

void main()
{
	printf("\n\n");

	printf("점수를 입력하면 학점을 계산해주는 프로그램입니다.\n\n");

	printf("\n\n");

	int score;

	printf("당신의 점수를 입력하세요:");
	scanf_s("%d", &score);

	printf("\n\n");

	//학점 계산

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

	//출력
	printf(" 당신의 학점은 %c 입니다.\n", grade);
}