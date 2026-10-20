#include <stdio.h>
int avg(int n, int s)
{
    float average;
    average= s/n;
    return average;
}

int main() {
    int n,i,s,t=0;
    float avg_saving;
    printf("\nEnter the number of months:");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
        {
            printf("\nEnter savings:");
            scanf("%d", &s);
            if (s>=5000)
            {
                printf("\nNo of month where savings is greater than or equal to 5000 Rs:%d",i);
            }
            else
            {
                printf("\n");
            }
            t=t+s;
        }
    printf("\nTotal Savings:%d", t);
    avg_saving= avg(n,t);
    printf("\nAverage Savings:%.2f",avg_saving);
    if (avg_saving<2000)
    {
        printf("\nLow Savings");
    }
    else if (avg_saving>=2000&&avg_saving<=4999)
    {
        printf("\nModerate Savings");
    }
    else if (avg_saving>=5000&&avg_saving<=7999)
    {
        printf("\nGood Savings");
    }
    else
    {
        printf("\nExcellent Savings");
    }
    return 0;
}