# Unit 13. 증가, 감소 연산자 사용하기

## 13.0 증가, 감소 연산자 사용하기
C 언어에서는 ```++, --```라는 특별한 연산자를 제공
- ++는 값을 1 증가시키는 증가 연산자
- --는 값을 1 감소시키는 감소 연산자

## 13.1 변수의 값을 1 증가, 감소시키기
증가 연산은 ++ 연산자를 사용하며 변수 앞과 뒤에 붙일 수 있다.
- 변수++;
- ++변수;
```c
#include <stdio.h>

int main()
{
    int num1 = 1;

    num1++;    // 정수형 변수의 값을 1 증가시킴

    printf("%d\n", num1);    // 2

    return 0;
}
```

감소 연산은 --연산자를 사용하며 변수 앞과 뒤에 붙일 수 있다.

- 변수--;
- --변수;

## 13.2 실수 자료형에 증감 연산자 사용하기
```c
#include <stdio.h>

int main()
{
    float num1 = 2.1f;
    float num2 = 2.1f;

    num1++;    // 실수형 변수의 값을 1 증가시킴
    num2--;    // 실수형 변수의 값을 1 감소시킴

    printf("%f %f\n", num1, num2);    // 3.100000 1.100000

    return 0;
}
```

## 13.3 문자 자료형에 증감 연산자 사용하기
```c
#include <stdio.h>

int main()
{
    char c1 = 'b';
    char c2 = 'b';

    c1++;    // 문자 자료형 변수의 값을 1 증가시킴, 'c'로 바뀜
    c2--;    // 문자 자료형 변수의 값을 1 감소시킴, 'a'로 바뀜

    printf("%c %c\n", c1, c2);    // c a

    return 0;
}
```

## 13.4 증감 연산자의 위치에 따른 차이점 알아보기
증감 연산자는 변수 앞에 사용할 수도 있고 뒤에 사용할 수도 있습니다. 여기서 증감 연산자만 단독으로 사용했을 때는 큰 차이가 없지만, 연산자를 사용한 뒤 다른 변수에 할당할 때는 위치에 따라 큰 차이가 있습니다.

- 먼저 증감 연산자를 변수 뒤에 사용했을 때
```c
#include <stdio.h>

int main()
{
    int num1 = 2;
    int num2 = 2;
    int num3;
    int num4;

    num3 = num1++;    // num1의 값을 num3에 할당한 뒤 num1의 값을 1 증가시킴
    num4 = num2--;    // num2의 값을 num4에 할당한 뒤 num2의 값을 1 감소시킴

    printf("%d %d\n", num3, num4);    // 2 2

    return 0;
}
```
num3 = num1++;와 num4 = num2--;를 풀어서 쓰면 다음과 같습니다.


증감 연산자를 변수 뒤에 사용한 것을 ```후위(postfix) 연산자```라고 하며 다른 변수에 할당했을 때의 동작 순서는 다음과 같습니다.

<details>
<summary>[그림 13‑1] 후위 증가 연산자와 할당
</summary>
<div markdown="1">       

😎

1. 현재 변수의 값이 다른 변수에 할당
2. 증감 연산자가 수행되어 변수의 값이 1 증가(감소)
![](https://dojang.io/pluginfile.php/146/mod_page/content/29/unit13-1.png)

```후위 연산자```는 할당 이후에 연산을 하게 되므로 바뀌기 전의 값이 다른 변수에 할당됩니다. 즉, 증감 연산자가 변수 뒤에 쓰이면 연산을 나중에 처리한다는 뜻이 됩니다.

</div>
</details>



- 이번에는 ```증감 연산자```를 변수 앞에 사용
```c
#include <stdio.h>

int main()
{
    int num1 = 2;
    int num2 = 2;
    int num3;
    int num4;

    num3 = ++num1;    // num1의 값을 1 증가시킨 뒤 num3에 할당
    num4 = --num2;    // num2의 값을 1 감소시킨 뒤 num4에 할당

    printf("%d %d\n", num3, num4);    // 3 1

    return 0;
}
```

증감 연산자를 변수 앞에 사용한 것을 **전위(prefix) 연산자** 라고 하며 다른 변수에 할당했을 때의 동작 순서는 다음과 같다.

<details>
<summary>[그림 13‑2] 전위 증가 연산자와 할당
</summary>
<div markdown="1">       

😎

1. 증감 연산자가 수행되어 변수의 값이 1 증가(감소)
2. 변수의 바뀐 값이 다른 변수에 할당

![](https://dojang.io/pluginfile.php/146/mod_page/content/29/unit13-2.png)

```전위 연산자```는 할당 전에 연산을 하게 되므로 바뀐 값이 다른 변수에 할당됩니다. 즉, 증감 연산자가 변수 앞에 쓰이면 연산을 먼저 처리한다는 뜻이 됩니다.

</div>
</details>

