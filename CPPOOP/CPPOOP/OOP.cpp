/*
#include <iostream>

using namespace std;

//class 설계/정의 - 개체의 자료형 만들기

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
	//class 로 객체생성하기.

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
	//생성자 함수: Constructor - 객체 생성(new)할 때 한번 자동호출
	Student(const char* name, int kor, int eng) 
		//생성자 함수에는 void 타입을 쓰지 않는다!! 하지만 함수임!
		//void input() 과 똑같은 역할을 함
	{
		cout << "Student 객체 생성~!" << endl;
		this->name = name;
		this->kor = kor;
		this->eng = eng;
	}

public:
	void input(const char* name,int kor, int eng)
	{
		//매개변수로 받은 값들을 멤버변수로 옮겨서 저장
		//본인 , 이 객체를 지칭하는 포인터 'this'
		this->name = name; //this는 멤버변수, 없으면 매개변수(지역변수
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
	//Heap 메모리에 객체 생성 -Java는 무조건 heap에
	//new Student; // Heap 메모리에는 이름을 적을 수 없음. 
	//따라서, 포인트를 만들어서 가리키게 해야함.

	//Student* stu = new Student;

	//(*stu).name = "sam"; //(포인터변수 stu가 가리키는 곳) 안에있는 name 정의
	//stu->kor = 80; //위와 같은 기호
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

//일반 회원정보 class 설계

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