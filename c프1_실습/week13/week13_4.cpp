#include<stdio.h>
// 함수원형정의
int add(int, int);
int sub(int, int);
int main(void)
{
	int result;
	int(*pf)(int, int); // 함수포인터정의
	pf = add; // 함수포인터에함수add()의주소대입
	result = pf(10, 20); // 함수포인터를통한함수add() 호출
	printf("10+20은%d\n", result);
	pf = sub; // 함수포인터에함수sub()의주소대입
	result = pf(10, 20); // 함수포인터를통한함수sub() 호출
	printf("10-20은%d\n", result);
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