# Unit 36. 배열 사용하기

## 36.1 배열을 선언하고 요소에 접근하기

배열은 변수 이름 뒤에 ```[](대괄호)```를 붙인 뒤 크기를 설정<br>
그리고 배열을 선언하면서 값을 초기화할 때는 ```{}(중괄호)```를 사용
- 자료형 배열이름[크기];
- 자료형 배열이름[크기] ={값, 값, 값};
```c
#include <stdio.h>

int main()
{
    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };    // 배열을 생성하고 값 할당

    printf("%d\n", numArr[0]);    // 11: 배열의 첫 번째(인덱스 0) 요소 출력
    printf("%d\n", numArr[5]);    // 66: 배열의 여섯 번째(인덱스 5) 요소 출력
    printf("%d\n", numArr[9]);    // 110: 배열의 열 번째(인덱스 9) 요소 출력

    return 0;
}
```
배열을 선언하면서 값을 초기화 할 때는 ```{ }``` 안의 값 개수는 배열의 크기보다 작아도 되지만 크면 안됨<br>
또한, ```{ }```를 사용하여 배열에 값을 할당하는 방법은 배열을 선언할 때만 사용할 수 있으며 이미 선언된 배열에는 사용할 수 없습니다.

배열에 값이 저장된 공간을 요소(element)라고 합니다. 배열에서 각 요소에 접근하려면 배열 뒤에 ```[ ] (대괄호)```를 사용하며 ```[ ]``` 안에 각 요소의 인덱스를 지정해주면 됩니다.

- 배열[인덱스]

<details>
<summary>[그림 36-1] 인덱스로 배열의 요소에 접근
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/356/mod_page/content/22/unit36-1.png)

</div>
</details>

## 36.2 배열을 0으로 초기화하기

- 자료형 배열이름[크기] = { 0, };
```c
#include <stdio.h>

int main()
{
    int numArr[10] = { 0, };      // 배열의 요소를 모두 0으로 초기화

    printf("%d\n", numArr[0]);    // 0: 배열의 첫 번째(인덱스 0) 요소 출력
    printf("%d\n", numArr[5]);    // 0: 배열의 여섯 번째(인덱스 5) 요소 출력
    printf("%d\n", numArr[9]);    // 0: 배열의 열 번째(인덱스 9) 요소 출력

    return 0;
}
```
## 36.3 배열의 요소에 값 할당하기
- 배열[인덱스] = 값;


## 36.4 배열의 크기 구하기
배열이 차지하는 전체 공간과 요소의 개수는 sizeof 연산자를 활용하면 간단하게 구할 수 있음
```c
#include <stdio.h>

int main()
{
    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };    // 크기가 10인 int형 배열

    printf("%d\n", sizeof(numArr));                  // 40: 4바이트 크기의 요소가 10개이므로 40
    printf("%d\n", sizeof(numArr) / sizeof(int));    // 10: 배열의 크기를 구할 때는
                                                     // 전체 공간을 요소의 크기로 나눠줌

    return 0;
}
```

## 36.5 반복문으로 배열의 요소를 모두 출력하기
```c
#include <stdio.h>

int main()
{
    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };    // 크기가 10인 int형 배열

    for (int i = 0; i < sizeof(numArr) / sizeof(int); i++)    // 배열의 요소 개수만큼 반복
    {
        printf("%d\n", numArr[i]);    // 배열의 인덱스에 반복문의 변수 i를 지정
    }

    return 0;
}
------------------------------------------------------------------------
실행결과
11
22
33
44
55
66
77
88
99
110
```

## 36.6 배열의 요소 합계 구하기
```c
#include <stdio.h>

int main()
{
    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };    // 크기가 10인 int형 배열
    int sum = 0;    // 합을 저장할 변수는 0으로 초기화

    for (int i = 0; i < sizeof(numArr) / sizeof(int); i++)    // 배열의 요소 개수만큼 반복
    {
        sum += numArr[i];    // sum과 배열의 요소를 더해서 다시 sum에 저장
    }

    printf("%d\n", sum);    // 605

    return 0;
}
```

## 36.8 배열을 포인터에 넣기

<details>
<summary>[그림 36-2] 배열과 주솟값
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/364/mod_page/content/17/unit36-2.png)

</div>
</details>

배열은 사실 첫번 째 요소의 주솟값만 담고 있다.<br>
즉, 배열은 주솟값이기 때문에 포인터에 넣을 수 있다.<br> 
따라서 다음과 같이 포인터에 배열을 넣은 뒤 포인터에서 인덱스로 요소에 접근 할 수 있음
```c
#include <stdio.h>

int main()
{
    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };    // 크기가 10인 int형 배열

    int *numPtr = numArr;       // 포인터에 int형 배열을 할당

    printf("%d\n", *numPtr);    // 11: 배열의 주소가 들어있는 포인터를 역참조하면 배열의 
                                // 첫 번째 요소에 접근

    printf("%d\n", *numArr);    // 11: 배열 자체를 역참조해도 배열의 첫 번째 요소에 접근

    printf("%d\n", numPtr[5]);  // 66: 배열의 주소가 들어있는 포인터는 인덱스로 접근할 수 있음

    printf("%d\n", sizeof(numArr));    // 40: sizeof로 배열의 크기를 구하면 배열이 메모리에 
                                       // 차지하는 공간이 출력됨

    printf("%d\n", sizeof(numPtr));    // 4 : sizeof로 배열의 주소가 들어있는 포인터의 크기를 
                                       // 구하면 포인터의 크기가 출력됨(64비트라면 8)

    return 0;
}
```
## 36.9 배열을 활용하여 10진수를 2진수로 변환하기

<details>
<summary>[그림 36-3] 10진수를 2진수로 변환하기
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/365/mod_page/content/18/unit36-3.png)

</div>
</details>

이 식을 코드로 표현
```c
#include <stdio.h>

int main()
{
    int decimal = 13;
    int binary[20] = { 0, };

    int position = 0;
    while (1)
    {
        binary[position] = decimal % 2;    // 2로 나누었을 때 나머지를 배열에 저장
        decimal = decimal / 2;             // 2로 나눈 몫을 저장

        position++;    // 자릿수 변경

        if (decimal == 0)    // 몫이 0이 되면 반복을 끝냄
            break;
    }

    // 배열의 요소를 역순으로 출력
    for (int i = position - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    printf("\n");

    return 0;
}
--------------------------------------------------------
실행 결과
1101
```


