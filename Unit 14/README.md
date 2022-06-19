# Unit 14. 곱셈, 나눗셈하기

## 14.1 곱셈, 나눗셈하기
- a * b
- a / b

```c
#include <stdio.h>

int main()
{
    int num1;
    int num2;

    num1 = 2 * 3;    // 2에 3를 곱해서 num1에 저장
    num2 = 7 / 2;    // 7에서 2를 나누어서 num2에 저장

    printf("%d\n", num1);    // 6
    printf("%d\n", num2);    // 3: 소수점을 사용하지 않고 최대한 나눌 수 있는 값이 3

    return 0;
}
```

## 14.2 변수 하나에서 값을 곱하거나 나누기
- 변수1 = 변수1 * 값;
- 변수1 = 변수1 / 값;
- 변수 *= 값
- 변수 /= 값
```c
#include <stdio.h>

int main()
{
    int num1 = 2;
    int num2 = 7;

    num1 *= 3;    // num1에 3을 곱한 뒤 다시 num1에 저장
    num2 /= 2;    // num2에서 2를 나눈 뒤 다시 num2에 저장

    printf("%d\n", num1);    // 6
    printf("%d\n", num2);    // 3

    return 0;
}
```


