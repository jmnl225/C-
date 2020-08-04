#include <iostream>

using namespace std;



//struct와 class

//struct 서로 연관있는 DATA를 묶어서 저장
//이름짓는 관습 naming convention : struct, new, 구조체를 만들때 첫 글자는 대문자로.
//변수를 만들때는 카멜표기법 or 스네이크표기법

class Student
{
public:
	const char* name;
	int kor;
	int eng;

	void output()
	{
		cout << "name: " << name << endl;
		cout << "kor: " << kor << endl;
		cout << "eng: " << endl;
		cout << endl;
	}

	//구조체 안에 함수 넣어서 직접 실행하게 만들기
};

void output(Student s);

class Person
{
	char* name;
	int age;

	void say(){}
	void eat(){}
	void sleep(){}
};

void main()
{
	//구조체 변수
	//student 객체

	Student stu;
	stu.name = "Sam";
	stu.kor = 80;
	stu.eng = 50;

	output(stu); //출력기능 함수

	Student stu2;
	stu2.name = "robin";
	stu2.kor = 70;
	stu2.eng = 80;

	output(stu); //출력기능 함수 호출. 다른 값을 넣을 뿐.

	//struct 원래 있던 것과 구분만 해주기 위해서

	

}

void output(Student s)
{
	cout << "name: " << s.name << endl;
	cout << "kor: " << s.kor << endl;
	cout << "eng: " << s.eng << endl;
	cout << endl;
}

/*
void main()
{
	int* p = new int;
	*p = 50;
	delete p;

	new double;
	double*p2 = new double;
	*p2 = 3.14;

	char* p3 = new char;
	*p3 = 'G';

	cout << *p2 << endl << *p3;

	int* p4 = new int[3];
	double* p5 = new double[5]; 
}
*/


/*

void main()
{
	std::cout << "Hello world\n";
	std::cout << 10 << "\n";
	std::cout << 20 << std::endl << 30<< std::endl;

	int a;
	std::cin >> a;

	std::cout << "입력받은 값: "<< a;

	char a[10];


}
*/