#include <stdio.h>

void main()
{
	/*
	printf("%3s\n", "*");
	printf("%4s\n", "***");
	printf("%5s\n", "*****");
	printf("%4s\n", "***");
	printf("%3s\n", "*");
	*/

	printf("  *\n");
	printf(" ***\n");
	printf("*****\n");
	printf(" ***\n");
	printf("  *\n");
	

	/*
	int a = 3;
	int b = 1;
	printf("\n연습예제2 p.53\n\n");

	printf("%d * %d = %2d\n", a, b, a * b);
	printf("%d * %d = %2d\n", a, 2, a * 2);
	printf("%d * %d = %2d\n", a, 3, a * 3);
	printf("%d * %d = %2d\n", a, 4, a * 4);
	printf("%d * %d = %2d\n", a, 5, a * 5);
	printf("%d * %d = %2d\n", a, 6, a * 6);
	printf("%d * %d = %2d\n", a, 7, a * 7);
	printf("%d * %d = %2d\n", a, 8, a * 8);
	printf("%d * %d = %2d\n", a, 9, a * 9);
	*/

	/*
	printf("\n2020-03-25 과제\n\n");
	printf("문제1.\n");
	printf("홍길동\n홍 길 동\n홍  길  동  \n홍\t길\t동\n\n\n");

	printf("문제2. \n");
	printf("이름: ㅇㅇㅇ\n");
	printf("주소: 사랑시 ㅇㅇ동\n");
	printf("전화번호: 000-1111-2222\n\n\n");


	printf("문제3. \n");
	printf("제 이름은 %s 입니다.\n", "홍길동");
	printf("제 나이는 %d 살 이고요.\n", 20);
	printf("제가 사는 곳의 번지수는 %d-%d 입니다.\n\n\n", 123, 456);

	printf("문제4. \n");
	printf("%d * %d = %d\n", 4, 5, 4 * 5);
	printf("%d * %d = %d\n", 7, 9, 7 * 9);
	*/

	
	printf("\nPrintf_Ex\n\n");

	printf("문자열 출력:[%-20s]\n", "대한민국");
	printf("문자열 출력:[%20s]\n", "대한민국");
	printf("문자 출력:[%10c]\n", 'a');
	printf("오른쪽 정렬:[%10d]\n", 1234);
	printf("0 삽입:[%010d]\n", 1234);
	printf("0 삽입5:[%05d]\n", 1234);
	printf("0 삽입7:[%07d]\n", 1234);
	printf("음수의삽입:[%010d]\n", -1234);
	printf("부동소수점 출력:[%8.2f]\n", 123.4567);
	printf("부동소수점 출력:[%-8.2f]\n", 123.4567);
	printf("부동소수점 출력:[%10.2f]\n", 0.0012345);
	printf("내맘대로 F 출력:[%10.2F]\n", 0.0012345);
	//"%x.zf" 라는 함수는 x는 앞의 자릿수, z는 소수점 .뒤의 자리수를 나타낸다.
	printf("부동소수점 출력:[%10.3e]\n", 0.0012345);
	printf("부동소수점 출력:[%10.7g]\n", 0.00012345);
	printf("테스트 g [%6.5g]\n"), 0.001234);
}
