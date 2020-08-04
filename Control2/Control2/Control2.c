#include <stdio.h>

//입사시험문제

/*
void main()
{

	int a, b;
	a =2;

	while (a < 10)
	{
		
		
		b = 1;

		while (b < 10)
		{
			printf(" %d * %d = %d\n", a, b, a*b);
			b++;
		}

		printf("\n");

		a++;

		// a= a+2 와 같은 뜻 a += 2;

	}

}

*/


/*
void main()
{

	int dan, i;

	printf("단수 입력:");
	scanf_s("%d", &dan);


	for (i = 1; i < 10; i++) <여기에 절대 세미콜론 찍지 말기~!!
	{
		printf("%d * %d = %d\n", dan, i, dan * i);
	}

	printf("종료\n");

}
*/

void main()
{
	printf("%d", sizeof(int));
}
