#include <stdio.h>
int main() {
    int a, b, c;
    printf("\nEnter 3-digit no:");
    scanf ("%d", &a);
    b = a/100 + (a%100)/10 + (a%10);
    c = a/100 * (a%100)/10 * (a%10);
    printf("\nAddition: %d", b);
    printf("\nProduct: %d", c);

}