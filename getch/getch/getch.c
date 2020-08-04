#include <stdio.h>
#include <conio.h> //consol input output -> _getch 가 포함된 문서

void main()
{
	//char key;
	/*
	scanf_s("%c", &key);
	printf("output: %d\n", key);
	*/

	while (1)
	{
		int key; //원래 캐릭인데 받는것이 int라서 int형으로 받아야함
		key = _getch(); //언더바 _는 2019 스튜디오버전
		printf("output: %d\n", key);
	}
	
}


//_getch 의 특징: 방향키를 눌러도 안보임 (입력받은 값이 안 뜸)