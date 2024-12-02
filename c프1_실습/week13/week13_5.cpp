// 함수포인터배열
#include<stdio.h>
 // 함수원형정의
void menu(void);
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);
void menu(void)
{
	printf("=====================\n");
	printf("0. 덧셈\n");
	printf("1. 뺄셈\n");
	printf("2. 곱셈\n");
	printf("3. 나눗셈\n");
	printf("4. 종료\n");
	printf("=====================\n");
}
int main(void)
{
	int choice, result, x, y;
	// 함수포인터배열을선언하고초기화한다.
	int(*pf[4])(int, int) = { add, sub, mul, div };
	while (1)
	{
		menu();
		printf("메뉴를선택하시오:");
		scanf_s("%d", &choice);
		if (choice < 0 || choice >= 4)
			break;
		printf("2개의정수를입력하시오:");
		scanf_s("%d %d", &x, &y);
		result = pf[choice](x, y); // 함수포인터를이용한함수호출
		printf("연산결과= %d\n", result);
	}
	return 0;
}
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}