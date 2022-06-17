#include <stdio.h>

int main()
{
    char c1 = 2;
    char c2 = 5;

    printf("%c\n", c1 + 48);
    printf("%c\n", c2 + 48);

    return 0;
}

// ASCII 코드표에서 문자 '0'이 시작하는 위치의 정숫값은 48
// 2 + 48 = 50이므로 문자 '2'가 됨
// 5 + 48 = 53이므로 문자 '5'가 됨