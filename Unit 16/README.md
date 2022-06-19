# Unit 16. 자료형의 확장과 축소 알아보기

## 16.1 자료형의 확장 알아보기
```c
#include <stdio.h>
 
int main()
{
    int num1 = 11;
    float num2 = 4.4f;
 
    printf("%f\n", num1 + num2);    // 15.400000: 정수와 실수 덧셈. 정수는 실수로 변환됨
    printf("%f\n", num1 - num2);    // 6.600000: 정수와 실수 뺄셈. 정수는 실수로 변환됨
    printf("%f\n", num1 * num2);    // 48.400002: 정수와 실수 곱셈. 정수는 실수로 변환됨
    printf("%f\n", num1 / num2);    // 2.500000: 정수와 실수 나눗셈. 정수는 실수로 변환됨
 
    return 0;
}
```
C 언어에서는 자료형을 섞어서 쓰면 컴파일러에서 ```암시적 형 변환(implicit type conversion)```을 하게 되는데 자료형의 크기가 큰 쪽, 표현 범위가 넓은 쪽으로 자동 변환

```c
#include <stdio.h>
 
int main()
{
    long long num1 = 123456789000;
    int num2 = 10;
 
    // int보다 long long이 자료형 크기가 크므로 long long으로 변환됨
    printf("%lld\n", num1 + num2);    // 123456789010
    printf("%lld\n", num1 - num2);    // 123456788990
    printf("%lld\n", num1 * num2);    // 1234567890000
    printf("%lld\n", num1 / num2);    // 12345678900
 
    return 0;
}
```
## 16.2 자료형의 축소 알아보기
 실수에서 정수로 표현 범위가 좁은 쪽으로 변환하게 되면 값의 손실이 생김

```c
#include <stdio.h>
 
int main()
{
    float num1 = 11.0f;
    float num2 = 5.0f;
 
    int num3 = num1 / num2;    // 실수에서 실수를 나누어 2.2가 나왔지만 
                               // 정수 자료형에는 2만 저장되고 0.2는 버려짐
 
    printf("%d\n", num3);    // 2
 
    return 0;
}
```
자료형의 크기가 작은 쪽, 표현 범위가 좁은 쪽으로 변환 되는 것을 **형 축소(type demotion)**

형 축소가 일어나면 컴파일할 때 다음과 같이 값의 손실이 일어날 수 있다고 경고가 나옵니다. 
```
type_demotion_float_to_int.c(8): warning C4244: '초기화 중': 'float'에서 'int'(으)로 변환하면서 데이터가 손실될 수 있습니다.
```

```c
#include <stdio.h>
 
int main()
{
    char num1 = 28;
    int num2 = 1000000002;
 
    char num3 = num1 + num2;    // char보다 큰 숫자는 저장할 수 없음
                                // 28 + 2만 남고 앞 자릿수는 버려짐
 
    printf("%d\n", num3);    // 30
  
    return 0;
}
```

<details>
<summary>[그림 16‑2] 정수 자료형의 형 축소
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/163/mod_page/content/24/unit16-2.png)

![](https://dojang.io/pluginfile.php/163/mod_page/content/24/unit16-3.png)

</div>
</details>

