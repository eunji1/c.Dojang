#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 1과 103 사이의 숫자 중 3으로 끝나는 숫자만 출력되게 만드세요
int main()
{
    int i = 1;

    for (;;)
    {
        if (i % 10 != 3)
        {
            i++;
            continue;
        }

        if (i > 103)
            break;

        printf("%d ", i);
        i++;
    }

    return 0;
}

// 