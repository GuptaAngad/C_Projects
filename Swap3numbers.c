#include <stdio.h>
int main() {
    int a, b, c, temp;
    a = 10;
    b = 20;
    c = 30;

    temp = a;
    a = c;
    c = b;
    b = temp;
    printf("a=%d\n b=%d\n c=%d\n", a, b, c);
    return 0;
}