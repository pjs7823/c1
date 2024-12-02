#include<stdio.h>
#include<math.h>
#define EPSILON 0.0001

// 함수 포인터를 매개변수로 사용하는 bisection 함수
void bisection(double (*fp)(double), double a, double b)
{
    if (fp(a) * fp(b) >= 0) {
        printf("적절한 a와 b가 아님\n");
        return;
    }
    double c = a;
    while ((b - a) >= EPSILON)
    {
        c = (a + b) / 2;
        if (fp(c) * fp(a) < 0) {
            b = c;
        }
        else {
            a = c;
        }
    }
    printf("최종 근 = %lf\n", c);
}

// 예시로 사용할 함수
double func(double x)
{
    return x * x * x - x * x + 2;
}

int main(void)
{
    double a = -200, b = 200;

    // bisection 함수에 func 함수 포인터를 넘겨서 호출
    bisection(func, a, b);

    return 0;
}
