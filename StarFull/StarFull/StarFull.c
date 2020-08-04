
#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

void Drawmap();
void controlKey();
int clear();

char map[10][10] = {
	{2,2,2,2,2,2,2,2,2,2},
	{2,1,0,0,2,2,0,0,0,2},
	{2,0,0,0,2,2,0,0,0,2},
	{2,0,0,0,2,2,0,0,0,2},
	{2,0,0,0,2,2,0,0,0,2},
	{2,0,0,0,0,0,0,0,2,2},
	{2,2,2,0,0,0,0,0,0,2},
	{2,2,2,0,0,0,0,0,0,2},
	{2,0,0,0,2,2,2,0,0,2},
	{2,2,2,2,2,2,2,2,2,2}
};

//현재 블럭의 위치값

int posY = 1;
int posX = 1;

void main()
{
	while (1)
	{
		Drawmap();

	
		//방향키 입력
		controlKey();

		//scanf는 방향키는 입력이 안 됨
		//%c 전용의 명령어: getch (get character)

	//방향키 입력이 끝났으니 화면에 보여줌 	Drawmap();

			//기존에 있던 그림 지우기
		//명령프롬프트-도스(콘솔)창에 'cls' 명령어만 치면 모두 지워짐
		system("cls"); //시스템에 직접 명령내리기 -> #include <windows.h>

		//혹시 stage clrear 했나?
		/*
		int a= clear(); //1이 리턴되면 0이 없다는 뜻.
		if (a == 1) 
		{
			printf("\nSTAGE CLEAR!!!\n");
			break;
		}
		*/
		if (clear()) //1이되면 참, 0이되면 거짓. 
		{
			printf("\nSTAGE CLEAR!!!\n");
			break;
		}
	}
	
}


//Stage clrear를 검사하는 기능함수

int clear()
{
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			if (map[y][x] == 0) return 0;
		}
	}
	return 1;
}



//방향키 입력을 받아 배열의 값을 변경하는 기능함수
void controlKey()
{
	int key;
	key = _getch();
	if (key == 224 || key == 0) key = _getch(); //방향키일경우에만 한번 더 받기. 그래야만 이동이 가능!

	switch (key)
	{
	//case 72:이러면 어떤 의미인지 이해가 어려움 
	// 그래서 define을 먼저 걸어줌
	case UP:
		if (map[posY - 1][posX] != 0) break;
		posY--;
		map[posY][posX] = 1;
		break;
	case DOWN:
		if (map[posY + 1][posX] != 0) break;
		posY++;
		map[posY][posX] = 1;
		break;
	case LEFT:
		if (map[posY][posX-1] != 0) break;
		posX--;
		map[posY][posX] = 1;
		break;
	case RIGHT:
		if (map[posY][posX+1] != 0) break;
		posX++;
		map[posY][posX] = 1;
		break;
	}
}

//맵 배열의 값을 그려내는 함수
void Drawmap()
{
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			switch (map[y][x])
			{
			case 0:
				printf("  ");
				break;
			case 1:
				printf("■");
				break;
			case 2:
				printf("□");
				break;
			}
		}
		printf("\n");
	}
}
