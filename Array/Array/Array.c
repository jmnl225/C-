/*
#include <stdio.h>

void main()
{
	int arr[3];

	arr[0] = 10;
	arr[2] = 20;
	arr[3] = 30;

	printf("", arr);
}
*/

/*
#include <stdio.h>

void main()
{
	int aaa[3] = { 10,20,30 };
	int bbb[3] = { 5,6,7 };

	int ccc[3];

	for (int i = 0; i < 3; i++)
	{
		ccc[i] = aaa[i] + bbb[2-i];
	}

	//히히 나 센스있어~!
}
*/

/*
#include <stdio.h>

void main()
{
	int arr[3];

	for (int i = 0; i < 3; i++)
	{
		printf("정수를 입력하세요: ");
		scanf_s("%d", &arr[i]);
	}

	for (int j = 0; j < 3; j++)
	{
		printf("\n %d\n", arr[j]);
	}

}
*/

/*
#include <stdio.h>

void main()
{
	int arr[5];
	int total = 0;

	for (int i = 0; i < 5; i++)
	{
		total = total + arr[i];

	}
}
*/


//가장 큰 수를 찾는 방법

/*
#include <stdio.h>

void main()
{
	int arr[5] = { 5,6,7,8,9 };
	int max;

	for (int i = 1; i < 5; i++)
	{
		max = arr[0];
		if (max < arr[i]) max = arr[i];
		// max=(arr[i]>max)?arr[i]:max;
	
	printf("가장 큰 값: %d\n", max);
}
*/

/*
#include <stdio.h>

void main() 
{
	char aaa[3];
	
	scanf_s("%c", &aaa[0]);
	scanf_s("%c", &aaa[1]);
	scanf_s("%c", &aaa[2]);

	print("\n------------------\n");

	printf ("%c\n", &aaa[0]);
	("%c\n", &aaa[1]);
	scanf_s("%c\n", &aaa[2]);
}
*/

#include <stdio.h>

void main()
{
	int [3][4] = { {1,2,3,4},{6,7,8,9},{11,12,13,14} };
	int total[3] = { 0 };



}