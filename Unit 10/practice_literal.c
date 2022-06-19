#include <stdio.h>
// Hello, world! 8 4.900000e-302를 출력
int main()
{
    printf("H%cllo, %s %d %Le\n", 'e', "world!", 8, 4.9e-302L);

    return 0;
}
// %c가 문자이므로 리터럴 'e'
// %s는 문자열이므로 리터럴 "world!"
// %d는 10진 정수이므로 리터럴 8
//%Le는 지수 표기법에 long double 크기이므로 리터럴 4.9e-302L