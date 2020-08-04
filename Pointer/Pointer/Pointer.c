#include <stdio.h>

void output(int* p) //== void output(int p[])
{
	printf(" %d \n", *p);
	p++;
	printf(" %d \n", *p);
	printf(" %d \n", p[1]);
}

void main()
{
	int arr[3] = { 10,20,30 };
	output(arr);

}

/* 
#include <stdio.h>

int* output() //== void output(int p[])
{
	int arr[3] = { 10,20,30 };
	return arr;
}

void main()
{
	
	int* a=output();
	printf("%d", n[0]);

	int* a = output();
}
*/


#include <stdio.h>
#include <malloc.h>

/*
void main()
{
	int a;
	a = 10; // Code에 들어가있음

	int* p=malloc(4); //heap 메모리에 만들기. ()안에 들어가는 숫자의 크기byte만큼 할당됨. 
	//이름을 못 만듦 -> 함수이기때문에 return을 받는다. -> 주소를 return받음

	*p = 50;
	printf("%d", *p);
}
*/

/*
void main()
{
	char* names[3];

	names[0] = "Kim";
	names[1] = "Sam";
	names[2] = "Robin";


	int* p = NULL;
}
*/



//336P. 예제 3-4

/*
void main()
{
	int a = 0, b = 0, c = 0;

	int* ip = NULL;

	ip = &a;
	*ip = 10;
	printf("%d %d %d %d \n", a, b, c, *ip);


	ip = &b;
	*ip = 20;
	printf("%d %d %d %d \n", a, b, c, *ip);


	ip = &c;
	*ip = 30;
	printf("%d %d %d %d \n", a, b, c, *ip);
}
*/

//예제 3-6

/*
void main()
{
	int aa = 10;
	int bb = 0;

	int* ip = NULL;

	ip = &aa;

	bb = *ip + aa;

	printf("%d %d %d \n", *ip, aa, bb);
}
*/

//365P. 연습문제 1번

/*
void main()
{
	char c = 'B';
	int num = 10;

	char* cp = NULL;
	int* ip = NULL;

	cp = &c;
	ip = &num;

	*cp = 'A';
	*ip = 20;

	printf("%p %d \n", &num, num);
	printf("%x %d \n", ip, *ip);

	printf("%x %c \n", &c, c);
	printf("%x %c \n", cp, *cp);
}
*/

//연습문제 2번

/*
void main()
{
	int a = 10;
	int b = 20;
	int temp;

	int* p1 = NULL;
	int* p2 = NULL;

	p1 = &a;
	p2 = &b;

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	printf("%d %d \n", a, b);
}
*/

//371P. 예제 4-1
/*
void main()
{
	int array[3] = { 10,20,30 };

	printf("%x %x %x \n", array, array + 0, array[0]);
	printf("%x %x \n", array+1, &array[1]);
	printf("%x %x \n", array + 2, &array[2]);

	printf("%d %d %d \n", sizeof(array), sizeof(array + 0), sizeof(array[0]));
}
*/


//예제 4-4

/*
void main()
{
	int array[3] = { 10,20,30 };
	int* p = NULL;

	p = array;

	printf("%d %d %d \n", p, p + 0, &p[0]);
	printf("%x %x %x \n", p + 1, &p[1]);
	printf("%x %x \n", p + 2, &p[2]);
}
*/

//예제 4-8

/*
void main()
{
	int array[3] = { 10,20,30 };
	int* p = NULL;

	p = array;
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("%d %d %d \n", *p, *(p + 1), *(p + 2));

	p = array+1;
	printf("%d %d %d \n", p[-1], p[0], p[1]);
	printf("%d %d %d \n", *(p-1), *p, *(p + 1));
}
*/

//예제4-9

/*
void main()
{
	int array[3] = { 10,20,30 };
	int* p = NULL;

	p = array;
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("%d %d %d \n", *p, *(p + 1), *(p + 2));
	printf("----------------\n");

	p = p + 1;
	printf("%d %d %d \n", p[-1], p[0], p[1]);
	printf("%d %d %d \n", *(p - 1), *p, *(p + 1));
	printf("----------------\n");

	p = p + 1;
	printf("%d %d %d \n", p[-2], p[-1], p[0]);
	printf("%d %d %d \n", *(p - 2), *(p-1), *p);
	printf("----------------\n");
}
*/

//예제 4-10
/*
void main()
{
	int array[3];
	int* p = NULL;

	p = array;

	*p = 10;
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("-------------------\n");

	*(p + 1) = 20;
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("-------------------\n");

	*(p + 2) = 30;
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("-------------------\n");

	printf("%d %d %d \n", *p, *(p + 1), *(p + 2));
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("---------------------\n");
		
}
*/

//예제 4-11
/*
void main()
{
	int array[3];
	int* p = NULL;

	p = array;
	*p = 10;
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("---------------\n");

	p = p + 1;
	*p = 20;
	printf("%d %d %d \n", p[-1], p[0], p[1]);
	printf("---------------\n");

	p = p + 1;
	*p = 30;
	printf("%d %d %d \n", p[-2], p[-1], p[0]);
	printf("---------------\n");

	printf("%d %d %d \n", p[-2], p[-1], p[0]);
	printf("%d %d %d \n", *(p-2), *(p-1), *p);
	printf("---------------\n");
}
*/

//415P. 예제 4-25
/*
void main()
{
	char array[] = { 'A','B','C','D','\0' };

	//문자 출력

	printf("%c %c %c %c %c \n", array[0], array[1], array[2], array[3], array[4]);
	printf("%d %d %d %d %d \n", array[0], array[1], array[2], array[3], array[4]);
}
*/

//예제 4-26
/*
void main()
{
	char array[] = "ABCD";

	//문자열 출력
	printf("%s \n", array);
	printf("%s \n", array+1);
	printf("%s \n", array+2);
	printf("%s \n", array+3);
}
*/

//예제 4-27
/*
void main()
{
	char array1[] = { 'A','B','C','D','\0' };
	char array2[] = { 'a','b','c','d' };

	//문자열 출력
	printf("%s \n", array1);
	printf("%s \n", array2);
}
*/

//예제 4-28
/*
void main()
{
	char array[] = "ABCD";

	array[0] = 'X';
	printf("%s \n", array);

}
*/


// 예제 4-29
/*
void main()
{
	char* p = "ABCD";

	printf("%s \n", p);
	printf("%s \n", p+1);
	printf("%s \n", p+2);
	printf("%s \n", p+3);
}
*/

//예제 4-30
/*
void main()
{
	char array[5] = "ABCD";
	char* p = "ABCD";

	p[0] = 'X';
	array[0] = 'x';

	p = array;
	array++;
	printf("%s \n", p);
}
*/

//연습문제 1.
/*
void main()
{
	int array[] = { 10,30,40,30,20 };
	int* p=NULL;
	p = array;

	printf("%d %d %d %d %d \n", p[0], p[1],p[2],p[3],p[4]);

	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		sum=p[i]+sum; //??????????
		printf("%3d", sum);
	}

	printf("\n%d\n", sum);
}
*/

//연습문제 3
/*
void main()
{
	int a = 10, b = 20;
	int* array[2] = { &a,&b };

	printf("%x %x \n", &a, &b);
	printf("%x %x \n", array[0], array[1]);

	printf("%d %d \n", *&a, *&b);
	printf("%d %d \n", *array[0], *array[1]);
}
*/

// 연습문제 5
/*
void main()
{
	char* string[2] = { "I love C", "Hello World" };
	printf("%s ", string[0]);
	printf("%s\n", string[1]+5);
}
*/

//연습문제 6

/*
void main()
{
	char* array1 = "ABCD";
	printf("%s", array1);

	char array2 = "A";

	//*array1= "x";

	
	printf("%c", array2);
	//array2[0] = 'x';
}
*/