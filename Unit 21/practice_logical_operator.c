#include <stdio.h>
// if ???? printf? ?? "?"? ???? ????
int main()
{
    int num1 = 10;
    int num2 = 0;

    if (num1 && num1) // ?? ||
        printf("?\n");
    else
        printf("??\n");

    if (num1 || num2)
        printf("?\n");
    else
        printf("??\n");

    printf("%s\n", !num2 ? "?" : "??");

    return 0;
}
