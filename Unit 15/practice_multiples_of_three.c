#include <stdio.h>
// 0이 두번 출력되게 만드세요(1은 사용하지 않아야한다.)
int main()
{
    int num1 = 15;
    int num2 = 27;
    int num3 = 3;

    num1 %= num3;
    num2 %= num3;

    printf("%d\n", num1);
    printf("%d\n", num2);

    return 0;
}
// 15에 나머지 연산을 했을 때 0은 1, 3, 5, 15
// 27에 나머지 연산을 했을 때 0은 1, 3, 9, 27
