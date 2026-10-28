#include <stdio.h>
int main() {
    int num = 5837;
    int a, b, c, d;
    int sum, product, reverse;

    a = num/1000;
    b = (num%1000)/100;
    c = (num%100)/10;
    d = num%10;
    sum = a+b+c+d;
    product = a*b*c*d;
    reverse = d*1000 + c*100 + b*10 + a;
    printf("\nSum: %d", sum);
    printf("\nProduct: %d", product);
    printf("\nReverse: %d", reverse);
}