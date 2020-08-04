#include <stdio.h>

//새로운 자료형 설계 = struct

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

	struct Person* ptr; //포인터를 만들때 자료형을 먼저 적음

	ptr = &per;

	printf(" %s \n"), (*ptr).name);
	printf(" %d \n"), ptr->age);

	printf(" %s \n"), (*ptr).name);




	//struct Person p[3]; //자료형=Person의 변수 p.
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
	//h=k; 이건 에러. AAA와 BBB 자료형이 다르기 때문에 대입이 안 됨.
	//안에 있는 상자의 자료형이 같아도 안 됨! AAA!=BBB
}
*/


/*
void main()
{

	struct student
	{
		//char name[10];
		//문자열을 받는방법3. 포인터
		char* name;
		int kor;
		int eng;
		double ave;
	};

	struct student s; //만들면서 문자열을 넣을 수 밖에 없음.{ "sam", 70, 80,75.5 }; 
	
	//scanf_s("%s", s.name, 10); //문자열을 넣는 방법 2. scanf로 받음
	//문자열을 받는 방법3.
	s.name = "robin"; //포인터를 이용해 나중에 값을 입력. 'robin'이라는 책이 
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

void output(struct student s, struct student s2); //struct student 자료형이 선언된 뒤에 프로토타입 선언.

void main()
{

	struct student s;
	s.name = 'A';
	s.kor = 80;
	s.eng = 75;
	s.math = 70;
	s.ave = 75.0;

	output(s); //21byte가 모두 보내짐!


	
	struct student s2;
	s2 = s; //가능하다
	//s2.name = 'B';
	//s2.kor = 80;
	//s2.eng = 70;
	//s2.math = 60;
	//s2.ave = (double)(s2.kor + s2.eng + s.math) / 3;

	output(s2);


	
	struct student s3;
	//printf("이름을 입력하세요: "); 
	scanf_s(" %c ", &s3.name);
	//printf("국어성적을 입력하세요: "); 
	scanf_s(" %d ", &s3.kor);
	//printf("영어성적을 입력하세요: "); 
	scanf_s(" %d ", &s3.eng);
	//printf("수학성적을 입력하세요: "); 
	scanf_s(" %d ", &s3.math);

	printf(" %.1lf \n\n", s3.ave);

	struct student s4 = { 'D',50,30,20,28.3 };

	printf(" %c ", s4.name);
	printf(" %d ", s4.kor);
	printf(" %d ", s4.eng);
	printf(" %d \n", s4.math);
	printf(" %.1lf \n\n", s4.ave);



}


//구조체 변수의 값들을 출력해주는 기능함수
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





