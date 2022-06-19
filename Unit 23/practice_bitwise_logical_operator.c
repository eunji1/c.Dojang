#include <stdio.h>
// 5, 4, 1, 250이 각 줄에 출력되게 만드세요
int main()
{
    unsigned char num1 = 1;
    unsigned char num2 = 5;

    printf("%u\n", num1 | num2);
    printf("%u\n", num1 ^ num2);
    printf("%u\n", num1 & num2);

    num1 = ~num2;
    printf("%u\n", num1);

    return 0;
}
