#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
// 2147483647 9223372036854775807이 출력되게 만드세요
int main()
{
    int *numPtr1 = malloc(sizeof(int));
    long long *numPtr2 = malloc(sizeof(long long));

    *numPtr1 = INT_MAX;
    *numPtr2 = LLONG_MAX;

    printf("%d %lld\n", *numPtr1, *numPtr2);

    free(numPtr1);
    free(numPtr2);

    return 0;
}

// 포인터에 역참조를 하여 값을 저장하려면 저장할 공간이 있어야함
// 포인터 numPtr1은 int 포인터이므로 malloc 함수에 sizeof(int) 또는 4
// numPtr2는 long long 포인터이므로 malloc 함수에 sizeof(long long) 또는 8