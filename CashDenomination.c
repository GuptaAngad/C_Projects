#include <stdio.h>
int main()
{
    int a = 4780;
    int b = a/2000;
    printf("\n2000 Rs notes: %d", b);
    a %= 2000;
    b = a/500;
    printf("\n 500 Rs notes: %d", b);
    a %= 500;
    b = a/200;
    printf("\n 200 Rs notes: %d", b);
    a %= 200;
    b = a/50;
    printf("\n 50 Rs notes: %d", b);
    a %= 50;
    b = a/10;
    printf("\n 10 Rs notes: %d", b);
    return 0;
}