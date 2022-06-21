# Unit 34. 포인터 사용하기

지금까지 값을 저장할 때 변수를 사용함 그럼 변수는 어디에 생기는 것일까?<br>
다음과 같이 변수는 컴퓨터의 메모리에 생성된다.<br>
즉, 메모리에 일정한 공간을 확보해두고 원하는 값을 저장하거나 가져오는 방식


<details>
<summary>[그림 34‑1] 메모리와 변수
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/337/mod_page/content/21/unit34-1.png)

</div>
</details>

보통 변수는 num1과 같이 이름으로 사용하지만 메모리의 특정 장소에 위치하고 있으므로 메모리 주소로도 표현할 수 있다.<br>


변수의 메모리 주소 구해보기
- &변수
```c
#include <stdio.h>

int main()
{
    int num1 = 10;

    printf("%p\n", &num1);    // 008AF7FC: num1의 메모리 주소를 출력
                              // 컴퓨터마다, 실행할 때마다 달라짐

    return 0;
}
```
변수의 메모리 주소를 구할 때는 변수 앞에 ```&(주소 연산자)```를 붙이면 된다.<br>
메모리 주소는 008AF7FC과 같이 16진수 형태이며 printf에서 서식 지정자 %p를 사용하여 출력한다.<br>
이때 메모리 주소는 고정된 것이 아니라 컴퓨터마다, 실행할 때마다 달라짐

<details>
<summary>[그림 34‑2] 변수의 메모리 주소
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/337/mod_page/content/21/unit34-2.png)

</div>
</details>

포인터 어려워~~~!

## 34.1 포인터 변수 선언하기
변수의 메모리 주소는 어디에 저장해야 할까요?? C언어에서 메모리 주소는 포인터 변수에 저장

포인터 변수는 ```*```를 사용하여 선언한다.
- 자료형*포인터이름;
- 포인터=&변수;
```c
#include <stdio.h>

int main()
{
    int *numPtr;      // 포인터 변수 선언
    int num1 = 10;    // int형 변수를 선언하고 10 저장

    numPtr = &num1;   // num1의 메모리 주소를 포인터 변수에 저장

    printf("%p\n", numPtr);    // 0055FC24: 포인터 변수 numPtr의 값 출력
                               // 컴퓨터마다, 실행할 때마다 달라짐
    printf("%p\n", &num1);     // 0055FC24: 변수 num1의 메모리 주소 출력
                               // 컴퓨터마다, 실행할 때마다 달라짐

    return 0;
}
```

<details>
<summary>[그림 34‑3] int 포인터
</summary>
<div markdown="1">       

😎

포인터 변수를 선언할 때는 자료형을 알려주고 *를 붙이는 방식을 사용합니다. 만약 변수가 int형이면 이 변수의 메모리 주소를 저장하는 포인터는 ```int *```라야 한다.

여기서 int *는 영어로 pointer to int라고 읽는데 int형 공간을 가리키는 포인터라는 뜻이다.

![](https://dojang.io/pluginfile.php/338/mod_page/content/23/unit34-3.png)

즉, 다음과 같이 포인터는 메모리의 특정 위치를 가리킬 때 사용한다.

[그림 34-4] 포인터와 메모리

![](https://dojang.io/pluginfile.php/338/mod_page/content/23/unit34-4.png)

이제 다음 코드를 그림으로 표현해보겠습니다.
```
int *numPtr;     // 포인터 변수 선언
int num1 = 10;

numPtr = &num1;   // num1의 메모리 주소를 포인터 변수에 저장
```
numPtr은 10이 저장된 메모리 공간을 가리킵니다. 즉, 변수 num1이 있는 공간을 가리키게 되는 것이죠.

[그림 34-5] 포인터에 변수의 메모리 주소 할당

![](https://dojang.io/pluginfile.php/338/mod_page/content/23/unit34-5.png)

</div>
</details>

## 34.2 역참조 연산자 사용하기
포인터 변수에는 메모리 주소가 저장되어있다.<br>
이때 메모리 주소가 있는 곳으로 이동해서 값을 가져오고 싶다면 ```역참조 연산자 *```를 사용
- *포인터
```c
#include <stdio.h>

int main()
{
    int *numPtr;      // 포인터 변수 선언
    int num1 = 10;    // 정수형 변수를 선언하고 10 저장

    numPtr = &num1;   // num1의 메모리 주소를 포인터 변수에 저장

    printf("%d\n", *numPtr);    // 10: 역참조 연산자로 num1의 메모리 주소에 접근하여 값을 가져옴

    return 0;
}
```
역참조 연산자 *는 포인터 앞에 붙인다. <br>
다음과 같이 numPtr 앞에 *를 붙이면 numPtr에 저장된 메모리 주소로 가서 값을 가져온다<br>
여기서는 numPtr이 num1의 메모리 주소를 저장하고 있으므로 num1의 값인 10이 출력된다.

즉, 포인터는 변수의 주소만 가리키며 역참조는 주소에 접근하여 값을 가져온다.

<details>
<summary>[그림 34‑6] 역참조 연산자를 사용하여 메모리 주소의 값을 가져옴
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/339/mod_page/content/30/unit34-6.png)

</div>
</details>

포인터 변수에 역참조 연산자를 사용한 뒤 값을 저장(할당)하기
- *포인터 = 값;
```c
#include <stdio.h>

int main()
{
    int *numPtr;      // 포인터 변수 선언
    int num1 = 10;    // 정수형 변수를 선언하고 10 저장

    numPtr = &num1;   // num1의 메모리 주소를 포인터 변수에 저장

    *numPtr = 20;     // 역참조 연산자로 메모리 주소에 접근하여 20을 저장

    printf("%d\n", *numPtr);    // 20: 역참조 연산자로 메모리 주소에 접근하여 값을 가져옴
    printf("%d\n", num1);       // 20: 실제 num1의 값도 바뀜

    return 0;
}
```
역참조 연산자는 값을 가져올 수도 있고 값을 저장할 수도 있다.


<details>
<summary>[그림 34‑7] 역참조 연산자를 사용하여 메모리 주소에 값 저장
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/339/mod_page/content/30/unit34-7.png)

</div>
</details>

역참조 연산자는 자료형을 바꾸는 효과를 낸다. <br>
즉, int *numPtr;에서 *numPtr처럼 역참조하면 pointer to int에서 pointer to를 제거하여 그냥 int로 만듭니다.(int 포인터 -> int)


여기서 int *의 간접 참조 수준이 int와 다르다고 나오는 것은 numPtr과 num1이 서로 자료형이 다르기 때문입니다.<br>
따라서 *numPtr = num1;과 같이 int 포인터를 역참조하면 int와 자료형이 같아지므로 컴파일 경고가 발생하지 않는다.


<details>
<summary>[그림 34‑8] 포인터 자료형
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/339/mod_page/content/30/unit34-8.png)

</div>
</details>

변수, 주소 연산자, 역참조 연산자, 포인터의 차이

<details>
<summary>[그림 34-9] 변수, 주소 연산자, 역참조 연산자, 포인터의 차이
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/339/mod_page/content/30/unit34-9.png)

</div>
</details>

## 34.4 다양한 자료형의 포인터 선언하기

```c
#include <stdio.h>

int main()
{
    long long *numPtr1;    // long long형 포인터 선언
    float *numPtr2;        // float형 포인터 선언
    char *cPtr1;           // char형 포인터 선언

    long long num1 = 10;
    float num2 = 3.5f;
    char c1 = 'a';

    numPtr1 = &num1;    // num1의 메모리 주소 저장
    numPtr2 = &num2;    // num2의 메모리 주소 저장
    cPtr1 = &c1;        // c1의 메모리 주소 저장

    printf("%lld\n", *numPtr1);    // 10
    printf("%f\n", *numPtr2);      // 3.500000
    printf("%c\n", *cPtr1);        // a

    return 0;
}
```
C 언어에서 사용할 수 있는 모든 자료형은 포인터로 만들 수 있습니다. 그런데 그냥 포인터 자료형이라고 따로 만들면 간단할 텐데 왜 자료형마다 포인터를 선언하도록 만들었을까요?

포인터에 저장되는 메모리 주솟값은 정수형으로 동일하지만 선언하는 자료형에 따라 메모리에 접근하는 방법이 달라집니다. 즉, 다음과 같이 포인터를 역참조하면 선언한 자료형의 크기에 맞춰서 값을 가져오거나 저장하게 됩니다.


<details>
<summary>[그림 34-23] 포인터의 자료형과 역참조 크기
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/340/mod_page/content/22/unit34-23.png)

</div>
</details>

## 34.5 void 포인터 선언하기
C 언어에서는 자료형이 정해지지 않은 포인터도 있습니다. void 포인터라는 포인터인데 다음과 같이 ```void``` 키워드와 ```*```로 선언합니다.

- void *포인터이름;
```c
#include <stdio.h>

int main()
{
    int num1 = 10;
    char c1 = 'a';
    int *numPtr1 = &num1;
    char *cPtr1 = &c1;

    void *ptr;        // void 포인터 선언

    // 포인터 자료형이 달라도 컴파일 경고가 발생하지 않음
    ptr = numPtr1;    // void 포인터에 int 포인터 저장
    ptr = cPtr1;      // void 포인터에 char 포인터 저장

    // 포인터 자료형이 달라도 컴파일 경고가 발생하지 않음
    numPtr1 = ptr;    // int 포인터에 void 포인터 저장
    cPtr1 = ptr;      // char 포인터에 void 포인터 저장

    return 0;
}
```
기본적으로 C언어는 자료형이 다른 포인터끼리 메모리 주소를 저장하면 컴파일 경고가 발생한다. 하지만 void 포인터는 자료형이 정해지지 않은 특성 때문에 어떤 자료형으로 된 포인터든 모든 저장할 수 있음<br>
즉, 직접 자료형을 변환하지 않아도 암시적으로 자료형이 변환되는 방식이다.

<details>
<summary>[그림 34-24] void 포인터
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/341/mod_page/content/22/unit34-24.png)

</div>
</details>

단, void 포인터는 자료형이 정해지지 않았으므로 값을 가져오거나 저장할 크기도 정해지지 않음. 따라서 void 포인터는 역참조를 할 수 없음

## 34.6 이중 포인터 사용하기

이번에는 포인터의 메모리 주소를 저장하는 포인터의 포인터를 선언해 볼것<br>
포인터를 선언할 때 *를 두 번 사용하면 포인터의 포인터(이중 포인터)를 선언한다.
- 자료형 **포인터이름;
```c
#include <stdio.h>

int main()
{
    int *numPtr1;     // 단일 포인터 선언
    int **numPtr2;    // 이중 포인터 선언
    int num1 = 10;

    numPtr1 = &num1;    // num1의 메모리 주소 저장 

    numPtr2 = &numPtr1; // numPtr1의 메모리 주소 저장

    printf("%d\n", **numPtr2);    // 20: 포인터를 두 번 역참조하여 num1의 메모리 주소에 접근

    return 0;
}
--------------------------------------------------------
실행 결과
10
```
포인터도 실제로는 변수이기 때문에 메모리 주소를 구할 수 있습니다. 하지만 포인터의 메모리 주소는 일반 포인터에 저장할 수 없고, ```int **numPtr2;```처럼 이중 포인터에 저장해야 합니다. ```int **numPtr2;```를 영어로 읽으면 pointer to pointer to int가 됩니다(numPtr2 → numPtr1 → num1).

여기서 이중 포인터 numPtr2를 끝까지 따라가서 실제 값을 가져오려면 ```**numPtr2```처럼 변수 앞에 역참조 연산자를 두 번 사용하면 됩니다. 즉, 역참조를 두 번 하므로 numPtr2 ← numPtr1 ← num1과 같은 모양이 되고 num1의 값을 가져올 수 있습니다.

<details>
<summary>[그림 34-25] 이중 포인터의 역참조
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/342/mod_page/content/18/unit34-25.png)

</div>
</details>
