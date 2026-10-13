#include<stdio.h>
int main() {
    int units;
    printf("\nEnter you units consumed:");
    scanf("%d", &units);
    if(units>0&&units<=100)
    {
        printf("Low Consumption\n");
    }
    else if (units>=101&&units<=200)
    {
        printf("Medium Consumption\n");
    }
    else if(units>=201&&units<=300)
    {
        printf("High Consumption\n");
    }
    else if(units>300)
    {
        printf("Very High Consumption");
    }
    else
    {
        printf("\nEnter valid units");
    }
    return 0;
}