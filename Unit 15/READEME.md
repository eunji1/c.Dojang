# Unit 15. 나머지 연산하기

- a % b
```c
#include <stdio.h>

int main()
{
    printf("%d\n", 1 % 3);    // 1: 1을 3으로 나누면 몫은 0 나머지는 1
    printf("%d\n", 2 % 3);    // 2: 2를 3으로 나누면 몫은 0 나머지는 2
    printf("%d\n", 3 % 3);    // 0: 3을 3으로 나누면 몫은 1 나머지는 0
    printf("%d\n", 4 % 3);    // 1: 4를 3으로 나누면 몫은 1 나머지는 1
    printf("%d\n", 5 % 3);    // 2: 5를 3으로 나누면 몫은 1 나머지는 2
    printf("%d\n", 6 % 3);    // 0: 6을 3으로 나누면 몫은 2 나머지는 0

    return 0;
}
```
## 15.2 변수 하나에서 나머지 연산하기
- 변수1 = 변수1 % 값;
- 변수 %= 값
```c
#include <stdio.h>
 
int main()
{
    int num1 = 7;
 
    num1 %= 2;    // num1에 2를 나눈 뒤 나머지를 구하여 다시 num1에 저장
 
    printf("%d\n", num1);    // 1
 
    return 0;
}
```








