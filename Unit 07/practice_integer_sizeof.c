#include <stdio.h>
// 다음 소스 코드를 완성하여 14가 출력되게 만드세요.
int main()
{
    short num1;
    long long num2;

    printf("%d\n", sizeof(num1) + sizeof(num2) + sizeof(int));

    return 0;
}

// 또는 unsigned short & unsigned long long
// sizeof 연산자로 변수의 자료형과 크기를 구한 뒤 모두 더하여 14가 나왔다.
// 1248 중 2-8 or 8-2
// short와 long long 또는 unsigned short와 unsigned long long