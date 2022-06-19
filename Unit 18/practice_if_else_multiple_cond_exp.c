#include <stdio.h>
// 필기점수가 80점 이상이면서 토익이 850점 이상이어야 합격
int main()
{
    int writtenTest = 78;
    int toeic = 870;

    if (writtenTest >= 80 && toeic >= 850)
        printf("합격\n");
    else
        printf("불합격\n");

    return 0;
}
