/*
#include <iostream>

using namespace std;

//class ����/���� - ��ü�� �ڷ��� �����

class Student
{
public:
	const char* name;
	int kor;
	int eng;

	void output()
	{
		cout << "name : "<<name << endl;
		cout << "kor : " << kor << endl;
		cout << "eng: " << eng;
	}
};


void main()
{
	cout << "Hello";

	Student stu;
	stu.name = "sam";
	stu.kor = 80;
	stu.eng = 70;
	//class �� ��ü�����ϱ�.

	Student stu2;
	stu2.name = "robin";
	stu2.kor = 70;
}
*/


/*
#include <iostream>

using namespace std;

class Student
{
public:
	const char* name;
	int kor;
	int eng;

public:
	//������ �Լ�: Constructor - ��ü ����(new)�� �� �ѹ� �ڵ�ȣ��
	Student(const char* name, int kor, int eng) 
		//������ �Լ����� void Ÿ���� ���� �ʴ´�!! ������ �Լ���!
		//void input() �� �Ȱ��� ������ ��
	{
		cout << "Student ��ü ����~!" << endl;
		this->name = name;
		this->kor = kor;
		this->eng = eng;
	}

public:
	void input(const char* name,int kor, int eng)
	{
		//�Ű������� ���� ������ ��������� �Űܼ� ����
		//���� , �� ��ü�� ��Ī�ϴ� ������ 'this'
		this->name = name; //this�� �������, ������ �Ű�����(��������
		this->kor = kor;
		this->eng = eng;
	}

public:
	void output()
	{
		cout << "name : " << name << endl;
		cout << "kor : " << kor << endl;
		cout << "eng: " << eng;
	}
};



	void output()
	{
		cout << "name : " << name << endl;
		cout << "kor : " << kor << endl;
		cout << "eng: " << eng;
	}

void main()
{
	//Heap �޸𸮿� ��ü ���� -Java�� ������ heap��
	//new Student; // Heap �޸𸮿��� �̸��� ���� �� ����. 
	//����, ����Ʈ�� ���� ����Ű�� �ؾ���.

	//Student* stu = new Student;

	//(*stu).name = "sam"; //(�����ͺ��� stu�� ����Ű�� ��) �ȿ��ִ� name ����
	//stu->kor = 80; //���� ���� ��ȣ
	//stu->eng = 90;

	//stu->input("sam", 80, 90);
	//stu->output();

	Student* stu1 = new Student("sma", 70, 60);

	Student* stu4 = new Student();
	cin >> stu4->name;

}
*/

#include <iostream>

using namespace std;

//�Ϲ� ȸ������ class ����

class Person

{
public:
	const char* name;
	int age;

	void show()
	{
		Person::show()
		cout << "name: " << name << endl;
		cout << "age: " << age << endl;
	}
};

class Student:public Person
{
public:
	const char* major;

	void show()
	{
		Person::show();
		cout << "major: " << major << endl;
	}
};


void main()
{
	Person* p = new Person();
	p->name = "sam";
	p->age = 20;
	p->show();

	Student* stu = new Student();
	

}