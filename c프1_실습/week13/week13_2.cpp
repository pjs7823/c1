#include <stdio.h>
void set_pointer(const char** q);
int main(void)
{
    const char* p;
    set_pointer(&p);
    printf("오늘의 격언: %s \n", p);
    return 0;
}
void set_pointer(const char** q)
{
    *q = "All that glisters is not gold.";
}
