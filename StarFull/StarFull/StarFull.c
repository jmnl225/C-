
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

//���� ���� ��ġ��

int posY = 1;
int posX = 1;

void main()
{
	while (1)
	{
		Drawmap();

	
		//����Ű �Է�
		controlKey();

		//scanf�� ����Ű�� �Է��� �� ��
		//%c ������ ��ɾ�: getch (get character)

	//����Ű �Է��� �������� ȭ�鿡 ������ 	Drawmap();

			//������ �ִ� �׸� �����
		//���������Ʈ-����(�ܼ�)â�� 'cls' ��ɾ ġ�� ��� ������
		system("cls"); //�ý��ۿ� ���� ��ɳ����� -> #include <windows.h>

		//Ȥ�� stage clrear �߳�?
		/*
		int a= clear(); //1�� ���ϵǸ� 0�� ���ٴ� ��.
		if (a == 1) 
		{
			printf("\nSTAGE CLEAR!!!\n");
			break;
		}
		*/
		if (clear()) //1�̵Ǹ� ��, 0�̵Ǹ� ����. 
		{
			printf("\nSTAGE CLEAR!!!\n");
			break;
		}
	}
	
}


//Stage clrear�� �˻��ϴ� ����Լ�

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



//����Ű �Է��� �޾� �迭�� ���� �����ϴ� ����Լ�
void controlKey()
{
	int key;
	key = _getch();
	if (key == 224 || key == 0) key = _getch(); //����Ű�ϰ�쿡�� �ѹ� �� �ޱ�. �׷��߸� �̵��� ����!

	switch (key)
	{
	//case 72:�̷��� � �ǹ����� ���ذ� ����� 
	// �׷��� define�� ���� �ɾ���
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

//�� �迭�� ���� �׷����� �Լ�
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
				printf("��");
				break;
			case 2:
				printf("��");
				break;
			}
		}
		printf("\n");
	}
}
