#include <stdio.h>
// 정수 2 5, 4 4, 8 3, 16 2, 32 1이 각 줄에 출력되게 만드세요
int main()
{
    for (int i = 2, j = 5; i <= 32 || j >= 1; i *= 2, j--)
    {
        printf("%d %d\n", i, j);
    }

    return 0;
}
