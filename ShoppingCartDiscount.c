#include <stdio.h>

int main() {
    int amt;
    printf("\nEnter your total amount:");
    scanf("%d", &amt);
    if (amt>0&&amt<1000)
    {
        printf("\nNo Discount");
    }
    else if (amt>=1000&&amt<=4999)
    {
        printf("\n5% Discount");
               printf("\nAmount after Discount:%.2f", amt-0.05*amt);
    }
    else if (amt>=5000&&amt<=9999)
    {
        printf("\n10% Discount");
                printf("\nAmount after Discount:%.2f", amt-0.10*amt);
    }
    else if (amt>=10000)
    {
        printf("\n20% Discount");
               printf("\nAmount after Discount:%.2f", amt-0.20*amt);    
    }
    else
    {
        printf("\nEnter valid shopping amount");
    }

}