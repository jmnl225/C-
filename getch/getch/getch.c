#include <stdio.h>
#include <conio.h> //consol input output -> _getch �� ���Ե� ����

void main()
{
	//char key;
	/*
	scanf_s("%c", &key);
	printf("output: %d\n", key);
	*/

	while (1)
	{
		int key; //���� ĳ���ε� �޴°��� int�� int������ �޾ƾ���
		key = _getch(); //����� _�� 2019 ��Ʃ�������
		printf("output: %d\n", key);
	}
	
}


//_getch �� Ư¡: ����Ű�� ������ �Ⱥ��� (�Է¹��� ���� �� ��)