# Unit 39. 문자열 사용하기
## 39.1 문자와 문자열 포인터 알아보기
문자열은 char 포인터 형식으로 사용
- char *변수이름 = "문자열";
```c
#include <stdio.h>

int main()
{
    char c1 = 'a';         // 변수에 문자 'a' 저장
    char *s1 = "Hello";    // 포인터에 문자열 "Hello"의 주소 저장

    printf("%c\n", c1);    // a: %c로 문자 출력
    printf("%s\n", s1);    // Hello: %s로 문자열 출력

    return 0;
}
-----------------------------------------------
실행 결과
a
Hello
```
문자열은 크기가 1바이트를 넘어서므로 char에 저장할 수 없습니다. 따라서 문자열은 변수에 직접 저장하지 않고 포인터를 이용해서 저장

## 39.2 문자열 포인터에서 인덱스로 문자에 접근하기
포인터도 ```[ ] (대괄호)```를 사용하여 인덱스로 접근

## 39.3 배열 형태로 문자열 선언하기
- char 배열이름[크기] = "문자열";
```c
#include <stdio.h>

int main()
{
    char s1[10] = "Hello";  // 크기가 10인 char형 배열을 선언하고 문자열 할당

    printf("%s\n", s1);     // Hello: %s로 문자열 출력

    return 0;
}
```

<details>
<summary>[그림 39-3] 문자열을 배열에 저장하기
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/394/mod_page/content/30/unit39-3.png)

</div>
</details>

배열을 선언할 때는 배열의 크기를 할당할 문자열보다 크게 지정해야 한다
문자열을 저장할 배열을 선언한다면 크기는 Hello 5글자에 NULL 하나를 더해 6이 되야 합니다.

<details>
<summary>[그림 39-4] 문자열을 배열에 저장할 때 배열의 최소 크기
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/394/mod_page/content/30/unit39-4.png)

</div>
</details>