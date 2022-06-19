#include <stdio.h>
// 10 3.200000 t가 출력
int main()
{
    const unsigned long long con1 = 10ULL;
    const float con2 = 3.2f; // 또는 double con2 = 3.2;
    const char con3 = 't';

    printf("%llu %f %c\n", con1, con2, con3);

    return 0;
}
// %llu: unsigned long long 크기
// %f: float 또는 double 크기
// %c: char 크기
