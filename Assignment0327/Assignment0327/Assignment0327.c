#include <stdio.h>

void main()
{
	/*
	int i=0, j=0, k=0;

	printf("\n\n");

	printf("i= %d, j= %d, k=%d \n", i, j, k);

	i = 1;
	j = 5;
	k = 7;

	printf("i=%d, j-%d, k=%d \n", i, j, k);
	*/


/* 96p. 예제 5-3.
	int a, b;

	a = 6;
	b = 2;

	printf("덧셈 연산의 결과: %d \n", a + b);
	printf("뺄셈 연산의 결과: %d \n", a - b);
	printf("곱셈 연산의 결과: %d \n", a * b);
	printf("나누기 연산의 결과: %d \n", a / b);
	printf("나머지 연산의 결과: %d \n", a % b);

*/

	/* 
	98 p. 예제 5-4
	int num1, num2;

	num1 = 10 / 3;
	num2 = 10 % 3;

	printf("\n 몫: %d \n", num1);
	printf("나머지: %d \n", num2);
	*/

	printf("\n");

	/* 100 p. 예제 5-5
	int num1 = 1, num2 = 2, num3 = 3, num4 = 4, num5 = 5;

	num1 = num1 + num2;
	printf("복합 덧셈 연산 결과: num1의 최종값: %d \n", num1);

	num2 = num2 - 2;
	printf("복함 뺄셈 연산 결과: num2의 최종값: %d\n", num2);

	num3 = num3 * 2;
	printf("복합 곱셈 연산 결과: num3의 최종값: %d \n", num3);

	num4 = num4 / 2;
	printf("복합 나눗셈 연산 결과:num4의 최종값: %d \n", num4);

	num5 = num5 % 2;
	printf("복합 나머지 연산 결과:num5의 최종값: %d \n", num5);
	*/

	/* 예제 5-6
	int num1 = 10;
	printf("%d \n", num1);

	num1++;
	printf("%d \n", num1);

	++num1;
	printf("%d \n", num1);

	--num1;
	printf("%d \n", num1);

	num1--;
	printf("%d \n", num1);
	*/

	/* 예제 5-7
	int num1 = 10, num2 = 10;
	int a, b;

	a = ++num1;
	printf("%d, %d \n", a, num1);

	b = num2++;
	printf("%d, %d \n", a, num2);
	*/

	/* 예제 5-8
	int num1 = 10, num2 = 10;
	int a, b;

	num1 = num1 + 1;
	a = num1;

	printf("%d, %d \n", a, num1);
	
	b = num2;
	num2 = num2 + 1;
	printf("%d, %d \n", b, num2);
	*/

	/* 예제 5-9
	int num1 = 10, num2 = 10;

	printf("%d \n", ++num1);
	printf("%d \n", num1);

	printf("\n\n");

	printf("%d \n", num2++);
	printf("%d \n", num2);
	*/

	/* 예제 5-10
	int num1 = 2, num2 = 4;
	int result1, result2, result3, result4;

	result1 = (num1 > num2);
	result2 = (num1 <= num2);
	result3 = (num1 == num2);
	result4 = (num1 != num2);

	printf("result1에 저장된 값 %d \n", result1);
	printf("result2에 저장된 값 %d \n", result2);
	printf("result3에 저장된 값 %d \n", result3);
	printf("result4에 저장된 값 %d \n", result4);
	*/

	/* 예제 5-11
	int num1 = 2, num2 = 3, num3 = 1;
	int result1, result2, result3;

	result1 = (num1 > 0) && (num2 < 10);
	printf("result1에 저장된 값 %d \n", result1);

	result2 = (num2 <= 2) || (num3 > 5);
	printf("result2에 저장된 값 %d \n", result2);

	result3 = (!num3);
	printf("result3에 저장된 값 %d \n", result3);
	*/

/*예제 5-12
    int num1 = 2, num2 = 3;
    int result1;

    result1 = (num1 > num2) ? num1 : num2;
	printf("result1에 저장된 값 %d \n", result1);

*/

    //두 수를 입력 받아서 둘 중 작은 값을 구하여 출력하는 프로그램을 작성. 단, 두 수가 같으면 그 수를 출력하라. 
    //129P. 문제2.
/*
    int num1, num2;
	int result1;

	printf("임의의 수1 를 입력하세요. :");
	scanf_s("%d", &num1);

	printf("\n\n");

	printf("임의의 수2 를 입력하세요. :");
	scanf_s("%d", &num2);

	result1 = (num1 < num2) ? num1 :
		      (num1 == num2) ? num1 : num2;

	printf("\n\n");

	printf("결과값: %d \n", result1);
*/
	// 130p. #4
	// 사용자로부터 정수 세 개를 입력받아 정수형 변수 a,b,c에 저장, 조건 연산자를 사용하여 이들 중 가장 큰 값 출력.
/*
	int a, b, c;
	int result;

	printf("\n\n");

	printf("임의의 수1 입력:");
	scanf_s("%d", &a);

	printf("\n");

	printf("임의의 수2 입력:");
	scanf_s("%d", &b);

	printf("\n");

	printf("임의의 수3 입력:");
	scanf_s("%d", &c);

	printf("\n");

	result = (a > b && a > c) ? a :
		(b > c) ? b : c;

		printf("결과값: %d", result);
*/
		
        /* 5번
        int won;
		int dollar;

		printf("\n");

		printf("달러의 값:");
		scanf_s("%d", &dollar);

		printf("\n");

		won = dollar * 1213;

		printf("현재 달러 대비 원화 가치: %d 원", won);

		*/

        //8번
        /*
        printf("\n");

		printf("현재 시간을 초로 계산해주는 프로그램 \n");
		printf("\n");

		int housr, minute, second;
		int result;

		printf("몇시인가요? :");
		scanf_s("%d", &housr);

		printf("\n");

		printf("몇분인가요? :");
		scanf_s("%d", &minute);

		printf("\n");

		printf("몇초인가요? :");
		scanf_s("%d", &second);

		printf("\n\n");

		result = (housr * 3600) + (minute * 60) + second;
		printf("계산결과 현재시각 00시 00분 00초로부터 %d 초가 지났습니다.\n");
		*/


        //문제 9.

        /*
		double result;

        result = 150 * 0.45;

        printf("\n 밀가루 150파운드는 %.3lf kg 입니다.\n",result);

		printf("\n\n\n");


		//문제 10.

		double result2;

		result2 = 15000 * 30.45;
		result2 = result2 / 1000;

		printf("15000 피트 상공은 지상에서 %.4lf M 떨어져 있습니다. \n", result2);
		*/



		//으아아아아아아ㅏ앙앙ㄹ ㅠㅠㅠㅠㅠ 알미ㅏ;ㄴㄹ ~~~!!!
		//과제 시작합니다. 문제1.
		
		/*
		printf("\n\n\n");

		printf("문제1. 마일을 킬로미터로 변환하는 프로그램.");

		int num11;
		double result3;

		printf("\n\n");
		
		printf("마일을 입력하세요. :");
		scanf_s("%d", &num11);

		printf("\n\n");

		result3 = num11 * 1.609;

		printf("%d 마일은 %lf 킬로미터 입니다.\n", num11, result3);
		
		printf("\n\n");
		*/


        /*
		printf("문제2. 영수증의 받은 돈, 상품가격, 부가세, 잔돈 출력");

		int money, price, tax, change;

		printf("\n\n");

		printf("지불 금액:");
		scanf_s("%d", &money);

		printf("\n");

		printf("상품 가격:");
		scanf_s("%d", &price);

		printf("\n\n");

		tax = price * 0.1;
		printf("부가세: %d", tax);
		
		printf("\n\n");

		change = money - price;
		printf("잔돈: %d", change);

		printf("\n\n");

		*/

        /*
        printf("\n\n");

        printf("문제3. 사용자로부터 원의 반지름을 받아 면적 계산");

		printf("\n\n");

		int num22;
		double rad;
		
		printf("반지름의 값을 적어주세요:");
		scanf_s("%d", &num22);

		printf("\n\n");

		rad = (double)num22*(double)num22*3.14;

		printf("면적의 값: %.2lf", rad);

		printf("\n");
		*/

        printf("\n\n");

		printf("문제 4. 프로그램 사용자로부터 좌표를 받아 직사각형의 넓이 구하기 \n");

		printf("\n\n");

		int x1, y1, x2, y2, result4;

		printf("좌 상단의 x좌표:");
		scanf_s("%d", &x1);

		printf("\n");

		printf("좌 상단의 y좌표:");
		scanf_s("%d", &y1);

		printf("\n");

		printf("우 상단의 x좌표:");
		scanf_s("%d", &x2);

		printf("\n");

		printf("우 상단의 y좌표:");
		scanf_s("%d", &y2);

		printf("\n\n");

	result4=(x2 - x1)*(y2 - y1);

		printf("넓이의 값: %d ", result4);
}