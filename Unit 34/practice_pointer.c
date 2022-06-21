#include <stdio.h>
// 10과 20이 각 줄에 출력되게 만드세요
int main()
{
    int *numPtr;
    int num1 = 10;
    int num2 = 20;

    numPtr = &num1;
    printf("%d\n", *numPtr);

    numPtr = &num2;
    printf("%d\n", *numPtr);

    return 0;
}
// 같은 포인터라 하더라도 어떤 메모리 주소가 들어 있느냐에 따라 접근하는 장소가 달라진다.