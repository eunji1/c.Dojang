#include <stdio.h>
// 정수 1, 2, 4, 8, 16, 32, 64, 128
int main()
{
    unsigned char i = 1;
    while (i != 0)
    {
        printf("%u\n", i);
        i <<= 1;
    }

    return 0;
}
/* i 1바이트(8비트)크기
1000 0000 = 128 
1을 한번만 왼쪽으로 더 이동시키면 0000 0000이 된다. */