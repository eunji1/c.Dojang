# Unit 20. 비교 연산자와 삼향 연산자 사용하기

▼ 표 20‑2 C 언어 삼항 연산자
|연산자|설명|
|---|---|
|? :|조건부 연산자. 조건식이 참이면 : 앞의 값을 반환, 거짓이면 : 뒤의 값을 반환|

```
참고 | 단항, 이항, 삼항 연산자
연산자는 연산에 필요한 값(피연산자)이 몇 개인가에 따라 단항 연산자, 이항 연산자, 삼항 연산자로 구분됩니다. 예를 들어 a + b에서 +는 연산자, a와 b는 연산에 필요한 값입니다.

단항 연산자: 연산에 필요한 값이 한 개 입니다.
예)+x, -x (부호 붙이기)
예) ++x, x++
이항 연산자: 연산에 필요한 값이 두 개이며 사칙 연산이 대표적입니다.
예) a + b
예) a += b
예) a = b
예) a == b
삼항 연산자: 연산에 필요한 값이 세 개입니다.
예) x ? a : b
```

## 20.1 비교 연산자 사용하기
- a == b
- a != b
- a > b
- a < b
- a >= b
- a <= b
```c
#include <stdio.h>
 
int main()
{
    int num1 = 10;
 
    printf("%d\n", num1 == 10);    // 1: num1이 10과 같은지
    printf("%d\n", num1 != 5);     // 1: num1이 5와 다른지
 
    printf("%d\n", num1 > 10);     // 0: num1이 10보다 큰지
    printf("%d\n", num1 < 10);     // 0: num1이 10보다 작은지
 
    printf("%d\n", num1 >= 10);    // 1: num1이 10보다 크거나 같은지
    printf("%d\n", num1 <= 10);    // 1: num1이 10보다 작거나 같은지
 
    return 0;
}
```
C 언어에서는 비교 연산자가 참이면 1, 거짓이면 0이 나온다

## 20.2 삼항 연산자 사용하기
- 변수 ? 값1 : 값2
```c
#include <stdio.h> 

int main()
{
    int num1 = 5;
    int num2;
 
    num2 = num1 ? 100 : 200;    // num1이 참이면 num2에 100을 할당, 거짓이면 num2에 200을 할당
 
    printf("%d\n", num2);    // 100: num1이 5이므로 참. num2에는 100이 할당됨
 
    return 0;
}
```

<details>
<summary>[그림 20‑1] 삼항 연산자
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/202/mod_page/content/19/unit20-1.png)

</div>
</details>

## 20.4 함수 안에서 삼항 연산자 사용하기
```c
#include <stdio.h>

int main()
{
    int num1 = 5;

    // 함수 안에서 삼항 연산자 사용
    printf("%s\n", num1 == 10 ? "10입니다." : "10이 아닙니다."); // num1은 5이므로 "10이 아닙니다."
                                                                // 출력

    return 0;
}
```
이처럼 삼항 연산자는 참/거짓 판단을 하면서 결괏값을 함수에 전달할 때 유용


