#include <stdio.h>

int main() {
    int a,b,c;
    char input;
    printf("\nEnter first side:");
    scanf("%d", &a);
    printf("\nEnter second side:");
    scanf("%d", &b);
    printf("\nEnter third side:");
    scanf("%d", &c);
    if(a+b>c&&b+c>a&&a+c>b)
    {
        printf("\nValid Triangle");
        if (a==b&&b==c)
        {
            input='A';
        }
        else if(a==b||b==c||a==c)
        {
            input='B';
        }
        else
        {
            input='C';
        }
    }
    else
    {
        printf("\nInvalid Triangle");
    }
    switch (input) {
        case 'A':
        printf("\nEquilateral Triangle");
        break;

        case 'B':
        printf("\nIsoceles Triangle");
        break;

        case 'C':
        printf("\nScalene Triangle");
        break;

        default:
        printf("\nEnter a valid Triangle");
        break; }
    return 0;
}