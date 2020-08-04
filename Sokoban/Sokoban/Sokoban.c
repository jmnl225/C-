#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

void Drawmap();
void Control();
int clear();

char map1[10][15] = {
	{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5},
	{5,0,1,0,0,2,2,2,0,0,0,2,1,0,5},
	{5,0,1,0,0,0,1,0,0,0,1,1,1,0,5},
	{5,0,1,0,0,0,1,0,3,0,1,0,0,0,5},
	{5,0,1,0,0,3,3,3,0,0,1,0,0,0,5},
	{5,0,1,0,0,0,4,0,0,0,1,0,0,0,5},
	{5,0,1,0,0,0,0,0,0,0,1,0,0,0,5},
	{5,0,1,0,0,0,0,0,0,0,1,0,0,0,5},
	{5,0,1,0,0,0,0,0,0,0,1,0,0,0,5},
	{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}
};


//0=공백, 1=벽, 2=상자 놓는 곳, 3= 상자, 4= 마우스 커서 [6][6]/ 5=벽
//[1][5], [1][6]/ [1][7] / [1][11] -> 골지점


void main()
{
	while (1)
	{
		printf("\nSTAGE 1\n");

		Drawmap();

		Control();

		system("cls");

		if (clear())
		{
			Drawmap();
			printf("\nSTAGE CLEAR!!!\n");
			break;
		}

	}




}

int clear()
{
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 15; x++)
		{
			if (map1[y][x] == 2) return 0;
		}
	}
	return 1;
}

//현재 사용자의 위치
int posX = 6;
int posY = 5;

void Control()
{
	int key;
	key = _getch();

	if (key == 224 || key == 0) key = _getch();
	//printf("%d", key); _getch 작동 확인 테스트



		//사용자 주변에 상자가 있는 경우
	int S, W, E, N;
	S= map1[posY + 1][posX];
	N= map1[posY - 1][posX];
	E= map1[posY][posX + 1];
	W= map1[posY][posX - 1];

	//상자 앞 벽을 못 뚫게 막는 방법??

	switch (key)
	{
	case UP:
		if (map1[posY - 1][posX] == 5 || map1[posY - 1][posX] == 1) break; //벽을 못 뚫게 막음
		/*
		if (N == 3)
		{
			if (map1[posY - 2][posX] == 1 ||
				map1[posY - 2][posX] == 5) return;

			map1[posY - 1][posX] = 3; //상자를 옮김
		}
		*/
		posY--;
		map1[posY][posX] = 4;
		map1[posY+1][posX] = 0; //기존의 자리를 0으로 만듦
		break;
	case DOWN:
		if (map1[posY + 1][posX] == 5 || map1[posY + 1][posX] == 1) break;
		posY++;
		map1[posY][posX] = 4;
		map1[posY-1][posX] = 0;
		if (S == 3)	map1[posY + 1][posX] = 3; //상자를 옮김
		break;
	case LEFT:
		if (map1[posY][posX-1] == 5 || map1[posY][posX-1] == 1) break;
		posX--;
		map1[posY][posX] = 4;
		map1[posY][posX+1] = 0;
		if (W == 3)map1[posY][posX - 1] = 3; //상자를 옮김
		break;
	case RIGHT:
		if (map1[posY][posX+1] == 5 || map1[posY][posX+1] == 1) break;
		posX++;
		map1[posY][posX] = 4;
		map1[posY][posX-1] = 0;
		if (E == 3) map1[posY][posX + 1] = 3; //상자를 옮김
		break;
	}

	//상자를 골에 넣었을때 바뀌지 않게 만들기

	if (map1[1][5] == 3) map1[1][5] = 3;
	if (map1[1][6] == 3) map1[1][6] = 3;
	if (map1[1][7] == 3) map1[1][7] = 3;
	if (map1[1][11] == 3) map1[1][11] = 3;


	//[1][5]/ [1][6]/ [1][7] / [1][11] 골지점(2)의 좌표
	//사용자(4)가 아닐경우 골지점(2)인걸 고정

	if ((map1[1][5] != 4) & (map1[1][5] != 3))
		map1[1][5] = 2;
	if ((map1[1][6] != 4) & (map1[1][6] != 3))
		map1[1][6] = 2;
	if ((map1[1][7] != 4) & (map1[1][7] != 3))
		map1[1][7] = 2;
	if ((map1[1][11] != 4) & (map1[1][11] != 3))
		map1[1][11] = 2;
}

void Drawmap()
{
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 15; x++)
		{
			switch (map1[y][x])
			{
			case 0:
				printf("  ");
				break;
			case 1:
				printf("▒");
				break;
			case 2:
				printf("▣");
				break;
			case 3:
				printf("▨");
				break;
			case 4:
				printf("★");
				break;
			case 5:
				printf("※");
				break;
			}
		}
		printf("\n");
	}
}
