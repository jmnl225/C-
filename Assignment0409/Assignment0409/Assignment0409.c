
//477P. ���� 1-1
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

	printf("g1.a�� ��: %d \n", g1.a);
	printf("g1.b�� ��: %lf \n", g1.b);
}
*/

//���� 1-2
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

	printf("g1.a�� ��: %d \n", g1.a);
	printf("g1.b�� ��: %lf \n", g1.b);
}
*/

//���� 1-3
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

//���� 1-4
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


//���� 1-5

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

//���� 1-7 ��ø ����ü
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

	printf("�й�: %d \n", stu.no);
	printf("����: %lf \n", stu.s.total);

}
*/

//���� 1-8��
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
	printf("�й�: %d \n", stu.no);
	printf("����: %lf \n", stu.s.total);
}
*/


//���� 1-10 492P.

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
	printf("�й�: %s, �̸�: %s \n", stu1.no, stu1.name);
	printf("����: %lf \n", stu1.total);

	printf("\n");

	stu2.total = stu2.math + stu2.kor;
	printf("�й�: %s, �̸�: %s \n", stu2.no, stu2.name);
	printf("����: %lf \n", stu2.total);

	printf("\n");

	stu3.total = stu3.math + stu3.kor;
	printf("�й�: %s, �̸�: %s \n", stu3.no, stu3.name);
	printf("����: %lf \n", stu3.total);
}
*/

//����ü ������ �迭 ����ϱ�

//���� 1-11
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
		printf("�й�: %s, �̸�: %s \n", stu[i].no, stu[i].name);
		printf("����: %lf \n", stu[i].total);
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
		printf("�й� �̸� ���� ������ �Է�: ");
		//scanf_s("%s %s %lf", stu[i].no, stu[i].name, &stu[i].total);
		scanf_s("%s", stu[i].no, 10);
		scanf_s("%s", stu[i].name, 20);
		scanf_s("%lf", &stu[i].total);

	}

	printf("\n");


	printf("�л� ������ ����մϴ�. \n");
	for (i = 0; i < 3; i++)
	{
		printf("%s %s %lf", stu[i].no, stu[i].name, stu[i].total);
		printf("\n");
	}
}
*/

//500P. ���� 1-15

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

//503P. ���� 1-17
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
	printf("����ü ���� p1�� �ּ�: %x \n", &p1);
	printf("��� ���� p1.x�� �ּ�: %x \n", &p1.x);
}
*/

//���� 1-18

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

//532P. �������� 1.

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

	printf("---�л� ���� �Է� ���α׷�---\n");

	for (int i = 0; i < 5; i++)
	{
		printf("�й�: ");
		scanf_s("%d", &info[i].number);
		
		printf("������: ");
		scanf_s("%s", info[i].blood,2);

		printf("�÷�: ");
		scanf_s("%lf", &info[i].eye);

		printf("������: ");
		scanf_s("%d", &info[i].weight);
	}

	printf("\n ----�Էµ� �л����� �����Դϴ�.---- \n");

	for (int i = 0; i < 5; i++)
	{
		printf("�л� %d�� �й�: %d  /������: %s  /�÷�:  %.1lf /������: %d\n",
			i, info[i].number, info[i].blood, info[i].eye, info[i].weight);

	}

}
*/

// 535p. ���� 8��

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