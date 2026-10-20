#include <stdio.h>
int checkScholarship(int marks, int attendence, int income)
{
    char a='a',b='b';
    if(marks>=80&&attendence>=80&&income>=800000)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int displayResult(char res)
    {
        if (res=='a')
        {
            printf("\n Scholarship Dedenge");
        }
        else
        {
            printf("\nScholarship NHi denge");
        }
    }
int main()
{
    int marks,attendence,income;
    char res;
    printf("\nEnter your marks:");
    scanf("%d", &marks);
    printf("\nEnter your attendence:");
    scanf("%d", &attendence);
    printf("\nEnter your income:");
    scanf("%d", &income);
    res=checkScholarship(marks,attendence,income);
    displayResult(res);
    return 0;
}