#include <iostream>

using namespace std;



//struct�� class

//struct ���� �����ִ� DATA�� ��� ����
//�̸����� ���� naming convention : struct, new, ����ü�� ���鶧 ù ���ڴ� �빮�ڷ�.
//������ ���鶧�� ī��ǥ��� or ������ũǥ���

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

	//����ü �ȿ� �Լ� �־ ���� �����ϰ� �����
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
	//����ü ����
	//student ��ü

	Student stu;
	stu.name = "Sam";
	stu.kor = 80;
	stu.eng = 50;

	output(stu); //��±�� �Լ�

	Student stu2;
	stu2.name = "robin";
	stu2.kor = 70;
	stu2.eng = 80;

	output(stu); //��±�� �Լ� ȣ��. �ٸ� ���� ���� ��.

	//struct ���� �ִ� �Ͱ� ���и� ���ֱ� ���ؼ�

	

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

	std::cout << "�Է¹��� ��: "<< a;

	char a[10];


}
*/