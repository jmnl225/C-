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

void play2();
void Control2();
void Drawmap2();

int n = 0;

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

char map2[10][15] = {
	{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5},
	{5,0,1,0,4,0,1,1,1,1,1,1,1,0,5},
	{5,0,1,0,3,0,0,0,0,0,3,0,1,0,5},
	{5,0,1,1,3,1,1,1,1,2,1,0,1,0,5},
	{5,0,1,0,0,0,0,0,2,2,2,0,1,0,5},
	{5,0,1,0,3,0,3,0,1,2,1,1,1,0,5},
	{5,0,1,1,1,1,1,0,0,0,0,1,1,0,5},
	{5,0,0,0,0,0,1,1,0,0,0,1,0,0,5},
	{5,0,0,0,0,0,0,1,1,1,1,1,0,0,5},
	{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}
};

//0=공백, 1=벽, 2=상자 놓는 곳, 3= 상자, 4= 마우스 커서 [6][6]/ 5=벽
//[1][5], [1][6]/ [1][7] / [1][11] -> 골지점

//맵2 골지점: [3][9] / [4][8]/ [4][9]/[4][10]/ [5][9]

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


			printf("\n다음 스테이지 도전? Y=1 / N=0\n");
			scanf_s("%d", &n);

			if (n == 1)
			{
				play2();
			}

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
	S = map1[posY + 1][posX];
	N = map1[posY - 1][posX];
	E = map1[posY][posX + 1];
	W = map1[posY][posX - 1];

	//상자 앞 벽을 못 뚫게 막는 방법??

	switch (key)
	{
	case UP:
		if (map1[posY - 1][posX] == 5 || map1[posY - 1][posX] == 1) break; //벽을 못 뚫게 막음
		posY--;
		map1[posY][posX] = 4;
		map1[posY + 1][posX] = 0; //기존의 자리를 0으로 만듦
		if (N == 3) map1[posY - 1][posX] = 3; //상자를 옮김
		break;
	case DOWN:
		if (map1[posY + 1][posX] == 5 || map1[posY + 1][posX] == 1) break;
		posY++;
		map1[posY][posX] = 4;
		map1[posY - 1][posX] = 0;
		if (S == 3) map1[posY + 1][posX] = 3;
		break;
	case LEFT:
		if (map1[posY][posX - 1] == 5 || map1[posY][posX - 1] == 1) break;
		posX--;
		map1[posY][posX] = 4;
		map1[posY][posX + 1] = 0;
		if (W == 3) map1[posY][posX - 1] = 3;
		break;
	case RIGHT:
		if (map1[posY][posX + 1] == 5 || map1[posY][posX + 1] == 1) break;
		posX++;
		map1[posY][posX] = 4;
		map1[posY][posX - 1] = 0;
		if (E == 3) map1[posY][posX + 1] = 3;
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


void play2()
{
	while (1)
	{
		printf("\nSTAGE 2\n");

		Drawmap2();

		Control2();

		system("cls");

		//if (clear())
		//{
		//	Drawmap();
		//	printf("\nSTAGE CLEAR!!!\n");
		//	break;
		//}
	}
}

void Drawmap2()
{
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 15; x++)
		{
			switch (map2[y][x])
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

int posA = 1;
int posB = 4;

void Control2()
{
	int key;
	key = _getch();

	if (key == 224 || key == 0) key = _getch();
	//printf("%d", key); _getch 작동 확인 테스트



		//사용자 주변에 상자가 있는 경우
	int S, W, E, N;
	S = map2[posA + 1][posB];
	N = map2[posA - 1][posB];
	E = map2[posA][posB + 1];
	W = map2[posA][posB - 1];

	//상자 앞 벽을 못 뚫게 막는 방법??

	switch (key)
	{
	case UP:
		if (map2[posA - 1][posB] == 5 || map2[posA - 1][posB] == 1) break; //벽을 못 뚫게 막음
		posA--;
		map2[posA][posB] = 4;
		map2[posA + 1][posB] = 0; //기존의 자리를 0으로 만듦
		if (N == 3) map2[posA - 1][posB] = 3; //상자를 옮김
		break;
	case DOWN:
		if (map2[posA + 1][posB] == 5 || map2[posA + 1][posB] == 1) break;
		posA++;
		map2[posA][posB] = 4;
		map2[posA - 1][posB] = 0;
		if (S == 3) map2[posA + 1][posB] = 3;
		break;
	case LEFT:
		if (map2[posA][posB - 1] == 5 || map2[posA][posB - 1] == 1) break;
		posB--;
		map2[posA][posB] = 4;
		map2[posA][posB + 1] = 0;
		if (W == 3) map2[posA][posB - 1] = 3;
		break;
	case RIGHT:
		if (map2[posA][posB + 1] == 5 || map2[posA][posB + 1] == 1) break;
		posB++;
		map2[posA][posB] = 4;
		map2[posA][posB - 1] = 0;
		if (E == 3) map2[posA][posB + 1] = 3;
		break;
	}

	if (map2[3][9] == 3) map2[3][9] = 3;
	if (map2[4][8] == 3) map2[4][8] = 3;
	if (map2[4][9] == 3) map2[4][9] = 3;
	if (map2[4][10] == 3) map2[4][10] = 3;
	if (map2[5][9] == 3) map2[5][9] = 3;

	//맵2 골지점 : [3] [9] / [4][8] / [4][9] / [4][10] / [5][9]
	//사용자(4)가 아닐경우 골지점(2)인걸 고정

	if ((map2[3][9] != 4) & (map2[3][9] != 3))
		map2[3][9] = 2;
	if ((map2[4][8] != 4) & (map2[4][8] != 3))
		map2[4][8] = 2;
	if ((map2[4][9] != 4) & (map2[4][9] != 3))
		map2[4][9] = 2;
	if ((map2[4][10] != 4) & (map2[4][10] != 3))
		map2[4][10] = 2;
	if ((map2[5][9] != 4) & (map2[5][9] != 3))
		map2[5][9] = 2;

}




/*

		//상자를 골에 넣었을때 바뀌지 않게 만들기

		if (map2[1][5] == 3) map2[1][5] = 3;
		if (map2[1][6] == 3) map2[1][6] = 3;
		if (map2[1][7] == 3) map2[1][7] = 3;
		if (map2[1][11] == 3) map2[1][11] = 3;


		//[1][5]/ [1][6]/ [1][7] / [1][11] 골지점(2)의 좌표
		//사용자(4)가 아닐경우 골지점(2)인걸 고정

		if ((map2[1][5] != 4) & (map2[1][5] != 3))
			map2[1][5] = 2;
		if ((map2[1][6] != 4) & (map2[1][6] != 3))
			map1[1][6] = 2;
		if ((map2[1][7] != 4) & (map2[1][7] != 3))
			map2[1][7] = 2;
		if ((map2[1][11] != 4) & (map2[1][11] != 3))
			map2[1][11] = 2;
*/