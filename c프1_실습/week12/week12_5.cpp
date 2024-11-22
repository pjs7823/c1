#include<stdio.h>
int sum = 1; // 전역 변수 
int main(void)
{
	int sum = 0; // 지역 변수 
	printf("sum = %d\n", sum);
	return 0;
}