
//477P. 예제 1-1
/*
#include <stdio.h>

struct group
{
	int a;
	double b;
};

void main()
{
	struct group g1;

	g1.a = 10;
	g1.b = 1.1234;

	printf("g1.a의 값: %d \n", g1.a);
	printf("g1.b의 값: %lf \n", g1.b);
}
*/

//예제 1-2
/*
#include <stdio.h>

struct group
{
	int a;
	double b;
};

void main()
{
	struct group g1;

	scanf_s("%d %lf", &g1.a, &g1.b);

	printf("g1.a의 값: %d \n", g1.a);
	printf("g1.b의 값: %lf \n", g1.b);
}
*/

//예제 1-3
/*
#include <stdio.h>

struct point
{
	int x;
	int y;
};

void main()
{
	struct point p1 = { 10, 20 };

	printf("%d %d \n", p1.x, p1.y);
}
*/

//예제 1-4
/*
#include <stdio.h>

struct point
{
	int x;
	int y;
};

void main()
{
	struct point p1 = { 10,20 };
	struct point p2 = { 30,40 };
	struct point p3 = { 0,0 };

	p3.x = p2.x = p1.x;
	p3.y = p2.y - p1.y;

	printf("%d %d \n", p3.x, p3.y);
}
*/


//예제 1-5

/*
#include <stdio.h>

struct point
{
	int x;
	int y;
};

void main()
{
	struct point p1 = { 10,20 };
	struct point p2 = { 0,0 };

	p2 = p1;

	printf("%d %d \n", p1.x, p1.y);
	printf("%d %d \n", p2.x, p2.y);
}
*/

//예제 1-7 중첩 구조체
/*
#include <stdio.h>

struct score
{
	double math;
	double english;
	double total;
};

struct student
{
	int no;
	struct score s;
};

void main()
{
	struct student stu;

	stu.no = 20101323;
	stu.s.math = 90;
	stu.s.english = 80;
	stu.s.total = stu.s.math + stu.s.english;

	printf("학번: %d \n", stu.no);
	printf("총점: %lf \n", stu.s.total);

}
*/

//예제 1-8번
/*
#include <stdio.h>

struct score
{
	double math;
	double kor;
	double total;
};

struct student
{
	int no;
	struct score s;
};

void main()
{
	struct student stu = { 20101323,{90,80,9} };
	//struct student stu={20101323,90,80,0};

	stu.s.total = stu.s.math + stu.s.kor;
	printf("학번: %d \n", stu.no);
	printf("총점: %lf \n", stu.s.total);
}
*/


//예제 1-10 492P.

/*
#include <stdio.h>

struct student
{
	char no[10];
	char name[20];
	double math;
	double kor;
	double total;
};

void main()
{
	struct student stu1 = {"20101323","Park", 80,80,0};
	struct student stu2 = {"20101324", "Lee", 95,85,0};
	struct student stu3 = {"20101325", "Song", 100,90,0};

	stu1.total = stu1.math + stu1.kor;
	printf("학번: %s, 이름: %s \n", stu1.no, stu1.name);
	printf("총점: %lf \n", stu1.total);

	printf("\n");

	stu2.total = stu2.math + stu2.kor;
	printf("학번: %s, 이름: %s \n", stu2.no, stu2.name);
	printf("총점: %lf \n", stu2.total);

	printf("\n");

	stu3.total = stu3.math + stu3.kor;
	printf("학번: %s, 이름: %s \n", stu3.no, stu3.name);
	printf("총점: %lf \n", stu3.total);
}
*/

//구조체 변수로 배열 사용하기

//예제 1-11
/*
#include <Stdio.h>

struct student
{
	char no[10];
	char name[20];
	double math;
	double kor;
	double total;
};

void main()
{
	int i = 0;
	struct student stu[3] = {
		{"20101323", "Park", 80,80,0},
		{"20101324", "Lee", 95,85,0},
		{"20101325", "Song", 100,90,0}
	};

	for (i = 0; i < 3; i++)
	{
		stu[i].total = stu[1].math + stu[i].kor;
		printf("학번: %s, 이름: %s \n", stu[i].no, stu[i].name);
		printf("총점: %lf \n", stu[i].total);
		printf("\n");
	}
}
*/


//1-12

/*
#include <stdio.h>

struct student
{
	char no[10];
	char name[20];
	double total;
};

void main()
{

	struct student stu[3];
	int i = 0;

	for (i = 0; i < 3; i++)
	{
		printf("학번 이름 총점 순으로 입력: ");
		//scanf_s("%s %s %lf", stu[i].no, stu[i].name, &stu[i].total);
		scanf_s("%s", stu[i].no, 10);
		scanf_s("%s", stu[i].name, 20);
		scanf_s("%lf", &stu[i].total);

	}

	printf("\n");


	printf("학생 정보를 출력합니다. \n");
	for (i = 0; i < 3; i++)
	{
		printf("%s %s %lf", stu[i].no, stu[i].name, stu[i].total);
		printf("\n");
	}
}
*/

//500P. 예제 1-15

/*
#include <stdio.h>

struct point
{
	int* x;
	int* y;
};

void main()
{
	int num1 = 4;
	int num2 = 5;
	struct point p1;

	p1.x = &num1;
	p1.y = &num2;

	printf("%d %d \n", num1, num2);
	printf("%d %d \n", *p1.x, *p1.y);
}
*/

//503P. 예제 1-17
/*
#include <stdio.h>

struct point
{
	int x;
	int y;
};

void main()
{
	struct point p1 = { 20,30 };
	printf("구조체 변수 p1의 주소: %x \n", &p1);
	printf("멤버 변수 p1.x의 주소: %x \n", &p1.x);
}
*/

//예제 1-18

/*
#include <stdio.h>

struct student
{
	char no[10];
	char name[20];
	double total;
};

void main()
{
	struct student stu = { "20101323", "Park", 160 };
	struct student* p = NULL;

	p = &stu;
	printf("%s %s %lf \n", stu.no, stu.name, stu.total);
	printf("%s %s %lf \n", (*p).no, (*p).name, (*p).total);
	printf("%s %s %lf \m", p->no, p->name, p->total);

}
*/


//---------------------------------------------------------

//532P. 연습문제 1.

/*
#include <stdio.h>

struct student {
	int number;
	char blood[2];
	double eye;
	int weight;
};

void main()
{
	struct student info[5];

	printf("---학생 정보 입력 프로그램---\n");

	for (int i = 0; i < 5; i++)
	{
		printf("학번: ");
		scanf_s("%d", &info[i].number);
		
		printf("혈액형: ");
		scanf_s("%s", info[i].blood,2);

		printf("시력: ");
		scanf_s("%lf", &info[i].eye);

		printf("몸무게: ");
		scanf_s("%d", &info[i].weight);
	}

	printf("\n ----입력된 학생들의 정보입니다.---- \n");

	for (int i = 0; i < 5; i++)
	{
		printf("학생 %d의 학번: %d  /혈액형: %s  /시력:  %.1lf /몸무게: %d\n",
			i, info[i].number, info[i].blood, info[i].eye, info[i].weight);

	}

}
*/

// 535p. 문제 8번

#include <stdio.h>

struct EX {
	char name[5];
	int num;
	int* left;
	int* right;
};

void main()
{


	struct EX stu2 = { "Lee", 80, NULL,NULL };
	struct EX stu3 = { "Goo", 60, NULL,NULL };

	struct EX stu1 = { "Kim", 90, &stu2, &stu3 };

	printf("%d \n %d \n\n", (int)stu1.left, (int)stu1.right);
	printf("%d \n %d", (int)&stu2, (int)&stu3);

}