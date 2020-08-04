#include <stdio.h>
#include <conio.h>
#include <windows.h>

void main()
{
	while (1)
	{
		int key = 0;

		key = _getch;

		printf("%d", key);
		if (key == 224 || key == 0) key = _getch();


		else
			break;
	

	}

}