#include <stdio.h>
#include <stdbool.h>
// "?"? "??"? ???? ????
int main()
{
    bool b1 = true;
    bool b2 = false;

    if (b1 && b1)
        printf("?\n");
    else
        printf("??\n");

    printf("%s\n", b2 || b2 ? "?" : "??");

    return 0;
}
