#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    if(a > 1000 || b > 1000)
    {
        printf("ERROR");
    }
    c = a;
    d = b;
    for (; a <= 999; a = a + c)
    {
        printf("%d", a);
        printf("\n");
    }

    for (; b <= 999; b = b + d)
    {
        printf("%d", b);
        printf("\n");
    }
    return 0;
}