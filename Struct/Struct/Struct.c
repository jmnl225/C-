#include <stdio.h>

//���ο� �ڷ��� ���� = struct

struct Person
{
	char* name;
	int age;

};

void main()
{
	struct Person* p;
	p=malloc(8); //p=malloc(sizeof(struct Person));

	p->name = "sam"; //(*p) == p->
	p->age = 20;

	printf("name: %s \n", p->name);
	printf("age: %d \n", p->age);
}

/*
void main()
{

	int a = 10;
	int* p;
	p = &a;
	printf("%d \n", *p);

	struct Person per = { "sam",20 };

	struct Person* ptr; //�����͸� ���鶧 �ڷ����� ���� ����

	ptr = &per;

	printf(" %s \n"), (*ptr).name);
	printf(" %d \n"), ptr->age);

	printf(" %s \n"), (*ptr).name);




	//struct Person p[3]; //�ڷ���=Person�� ���� p.
	//p[0].name = "sam";
	//p[0].age = 20;

	//p[1].name="robin";

	//for (int i = 0; i < 3; i++)
	//{
	//	printf(" %s %d", p[i].name, p[i].age);
	//}
}
*/







/*
struct Student
{
	int a;
	int b;
};

struct BBB
{
	double c;
	double d;
	struct Student stu; //
};

void main()
{
	struct Student k = {10,20};
	struct BBB h;
	//h=k; �̰� ����. AAA�� BBB �ڷ����� �ٸ��� ������ ������ �� ��.
	//�ȿ� �ִ� ������ �ڷ����� ���Ƶ� �� ��! AAA!=BBB
}
*/


/*
void main()
{

	struct student
	{
		//char name[10];
		//���ڿ��� �޴¹��3. ������
		char* name;
		int kor;
		int eng;
		double ave;
	};

	struct student s; //����鼭 ���ڿ��� ���� �� �ۿ� ����.{ "sam", 70, 80,75.5 }; 
	
	//scanf_s("%s", s.name, 10); //���ڿ��� �ִ� ��� 2. scanf�� ����
	//���ڿ��� �޴� ���3.
	s.name = "robin"; //�����͸� �̿��� ���߿� ���� �Է�. 'robin'�̶�� å�� 
	scanf_s("%d", &s.kor);
}

*/

/*
struct student
{
	char name;
	int kor;
	int eng;
	int math;
	double ave;
};

void output(struct student s, struct student s2); //struct student �ڷ����� ����� �ڿ� ������Ÿ�� ����.

void main()
{

	struct student s;
	s.name = 'A';
	s.kor = 80;
	s.eng = 75;
	s.math = 70;
	s.ave = 75.0;

	output(s); //21byte�� ��� ������!


	
	struct student s2;
	s2 = s; //�����ϴ�
	//s2.name = 'B';
	//s2.kor = 80;
	//s2.eng = 70;
	//s2.math = 60;
	//s2.ave = (double)(s2.kor + s2.eng + s.math) / 3;

	output(s2);


	
	struct student s3;
	//printf("�̸��� �Է��ϼ���: "); 
	scanf_s(" %c ", &s3.name);
	//printf("������� �Է��ϼ���: "); 
	scanf_s(" %d ", &s3.kor);
	//printf("������� �Է��ϼ���: "); 
	scanf_s(" %d ", &s3.eng);
	//printf("���м����� �Է��ϼ���: "); 
	scanf_s(" %d ", &s3.math);

	printf(" %.1lf \n\n", s3.ave);

	struct student s4 = { 'D',50,30,20,28.3 };

	printf(" %c ", s4.name);
	printf(" %d ", s4.kor);
	printf(" %d ", s4.eng);
	printf(" %d \n", s4.math);
	printf(" %.1lf \n\n", s4.ave);



}


//����ü ������ ������ ������ִ� ����Լ�
void output(struct student s, struct student s2)
{

	printf(" %c ", s.name);
	printf(" %d ", s.kor);
	printf(" %d ", s.eng);
	printf(" %d \n", s.math);
	printf(" %.1lf \n\n", s.ave);


	printf(" %c ", s2.name);
	printf(" %d ", s2.kor);
	printf(" %d ", s2.eng);
	printf(" %d \n", s2.math);
	printf(" %.1lf \n\n", s2.ave);


}

*/





