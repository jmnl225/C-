/*
#include <stdio.h>

void aaa();
void haha();

void main()
{
	printf("Good morning!\n");
	aaa(); //aaa���� ȣ�� (����)
}

void aaa()
{
	printf("Hello!\n");
	haha();
}

void haha(void)
{
	printf("wanna go home\n");

}
*/

/*
#include <stdio.h>

void output(int x, int y);

void main()
{
	int a;
	int b = 20;
	a=input();
	output(a, b); // ���� ����
}


int input()
{
	int n;
	printf("input:");
	scanf_s("%d", &n);

	return n;

}


void output(int x, int y)
{
	printf("output: %d",x);
	printf("output: %d", y);
}
*/

// 1,2,3,4 ���� �Լ�


/*
#include <stdio.h>


void display()
{
	printf("�� ���� �Է� �޾� �����ϴ� ���α׷�\n\n");
}

int input()
{
	int n;
	printf("input: ");
	scanf_s("%d", &n);
	return n;
}

int add(int x, int y)
{
	return x + y; 
}

void output(int a, int b, int c)
{
	printf("%d + %d = %d\n", a, b, c);
}

void main()
{
	int a, b;
	display();

	a = input();
	b = input();

	int c;
	c = add(a, b);

	output(a, b, c);
}
*/


/*
#include <stdio.h>

int g = 100;

void aaa();

void main()
{
	int a = 10;

	printf(" %d\n", a);
	printf("%d\n", g);

	aaa();
}

void aaa()
{
	int a = 11;
	printf("%d\n", a);
	printf(" %d \n" g);
}
*/

/*

#include <stdio.h>

int a = 100;

void aaa();

void main()
{
	int a = 10; 
	printf("%d\n", a);

	aaa();
}

void aaa()
{
	printf("%d\n", a);
}
*/


/*
#include <stdio.h>

void aaa()
{
	static int cnt = 0;
	cnt++;
	printf("aaa %d ��° \n", cnt);
}

void bbb()
{
	static int cnt = 0;
	cnt++;
	printf("bbb %d ��° \n", cnt);
}

void main()
{
	aaa();
	bbb();
	aaa();
	aaa();
	aaa();
	bbb();
	aaa();
	bbb();
	aaa();
}
*/

/*
#include <stdio.h>

void bb();

void aa(int n)
{
	if (n == 0) return;
	printf("aa\n");
	aa(n-1);
	printf("%d �� ����\n", n);
}

void bb()
{
	printf("bb\n");
}

void main()
{
	aa(5);
	printf("���α׷� ����.");
}
*/