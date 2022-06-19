# Unit 19. else if 를 사용하여 여러 방향으로 분기하기
```c
if (조건식)
{
    코드1
}
else if (조건식)
{
    코드2
}
```
```c
#include <stdio.h>

int main()
{
    int num1 = 20;

    if (num1 == 10)
        printf("10입니다.\n");
    else if (num1 == 20)    // else인 상태에서 조건식 지정
        printf("20입니다.\n");

    return 0;
}
```
if, else와 마찬가지로 else if도 끝에 세미콜론을 붙이면 안 됨

## 19.2 if, else if, else를 모두 사용하기
```c
if (조건식)
{
    코드1
}
else if (조건식)
{
    코드2
}
else
{
    코드3
}
```






