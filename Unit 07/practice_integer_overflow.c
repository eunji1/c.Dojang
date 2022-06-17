#include <stdio.h>
// 다음 소스 코드를 완성하여 0 0 -9223372036854775808이 출력되게 만드세요.
//오버플로우
int main()
{
    unsigned char num1 = 256;
    unsigned short num2 = 65536;
    long long num3 = 9223372036854775808;

    printf("%u %u %lld\n", num1, num2, num3);

    return 0;
}
