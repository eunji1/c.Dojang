# Unit 12. 덧셈, 뺄셈하기

## 12.1 덧셈, 뺄셈하기
- a+b
- a-b
```c
#include <stdio.h>

int main()
{
    int num1;
    int num2;

    num1 = 1 + 2;    // 1에 2를 더해서 num1에 저장
    num2 = 1 - 2;    // 1에서 2를 빼서 num2에 저장

    printf("%d\n", num1);    //  3
    printf("%d\n", num2);    // -1

    return 0;
}
```
## 12.2 변수 하나에서 값을 더하거나 빼기
- 변수1 = 변수1 + 값;
- 변수1 = 변수1 - 값;
```c
#include <stdio.h>

int main()
{
    int num1 = 1;
    int num2 = 1;

    num1 = num1 + 2;    // num1에 2를 더한 뒤 다시 num1에 저장
    num2 = num2 - 2;    // num2에서 2를 뺀 뒤 다시 num2에 저장

    printf("%d\n", num1);    //  3
    printf("%d\n", num2);    // -1

    return 0;
}
------------------------------------------------------
실행 결과
3
-1
```

<details>
<summary>[그림 12‑1] 변수 하나에서 값을 더하기
</summary>
<div markdown="1">       

😎
![](https://dojang.io/pluginfile.php/138/mod_page/content/21/unit12-1.png)
</div>
</details>

c언어에서는 ```덧셈 후 할당 +=, 뺄셈 후 할당 -= 연산자``` 제공
- 변수 += 값
- 변수 -= 값
```c
#include <stdio.h>

int main()
{
    int num1 = 1;
    int num2 = 1;

    num1 += 2;    // num1에 2를 더한 뒤 다시 num1에 저장(2를 증가시킴)
    num2 -= 2;    // num2에서 2를 뺀 뒤 다시 num2에 저장(2를 감소시킴)

    printf("%d\n", num1);    //  3
    printf("%d\n", num2);    // -1

    return 0;
}
```


