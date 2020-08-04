#include <stdio.h>

void card();

void regi()
{
	char num[20] = { 0 };
	int i,j;

	scanf_s("%s", num, 19);

	for (i = 0; num[i] != 0; i++)
	{
	}
	//printf("%d", i); for i 자릿수 테스트


	for (j = 0; j < 20; j++)
	{
		if (num[j] >= 65)
		{
			printf("...개인정보가 아닙니다.\n");
			return;
		}
	}


		int check[14] = {2,3,4,5,6,7,8,9,2,3,4,5};
		char result[15] = { 0 };

		if (i == 13 || i == 14) //주민등록번호인경우
		{

			if (num[6] == 32||num[6]==45) //중간에 스페이스바 혹은 대쉬가 있는 경우 ?? 안됨. 왜안대냐고~~~~~~!
			{
				result[6] = num[6];

				for (int k = 0; k < 6; k++)
				{
					num[k] = num[k] - 48;
					result[k] = num[k] * check[k];
				}

				for (int k = 7; k < 15; k++)
				{
					num[k] = num[k] - 48;
					result[k] = num[k] * check[k-1];
				}
			
			}

			else
			{
				for (int k = 0; k < 14; k++) 
				{
					num[k] = num[k] - 48;
					result[k] = num[k] * check[k];
					printf("%d  ", result[k]); //숫자만 넣는 경우에는 됨.
				}
			}
			//num에 진짜 숫자 다 넣음
			//확인해봅시다

			int sum = 0;
			for (i = 0; i < 15; i++)
			{
				sum = result[i] + sum;
			}

			int fin = 0;
			fin = (11 - (sum % 11)) % 10;

			printf("\n%d\n", fin);//되긴되는데 숫자만 넣어야함 ㅠㅠㅠ

			if (fin == num[12])
				printf("...주민번호가 맞습니다.\n");
			else
				printf("...개인정보가 아닙니다.\n");
			

		}

		
		if (i < 13)
		{
			printf("...개인정보가 아닙니다.\n");
			return;
		}
		else
		{
			for (j = 0; j < 20; j++)
			{
				if (num[j] >= 65)
				{
					printf("...개인정보가 아닙니다.\n");
					return;
				}
			}
		}



		//if (i > 15) //카드번호인 경우
		//{
		//	int max;
		//	for (int j = 0; j < 20; j++)
		//	{
		//		max = num[0];
		//		if (max < num[j]) max = num[j];
		//		card(max);
		//	}

		//}

}



void card()
{
	/*
	if (max >= 65)
		printf("...개인정보가 아닙니다.");

	//이러면 숫자만 맞고 중간에 --가 들어가도 맞게됨 수정필요


	if (i > 15)
	{
		for (j = 0; j < 20; j++)
		{
			if (num[j] >= 65)
			{
				printf("...개인정보가 아닙니다.");
				break;
			}
			printf("...카드번호가 맞습니다.");
			return;
		}
	}
	printf("...카드번호가 맞습니다.");
	*/


}



void main()
{
	while (1)
	{
		printf("입력값: ");
		
		regi();

	}
	
}