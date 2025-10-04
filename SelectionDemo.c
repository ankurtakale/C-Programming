#include<stdio.h>

int main()
{
    int iStd = 0;

    printf("Enter your standard :\n");
    scanf("%d",&iStd);

    if(iStd == 1)
    {
        printf("Exam at 9 AM");
    }
    else if(iStd == 2)
    {
        printf("Exam at 10 AM");
    }
    else if(iStd == 3)
    {
        printf("Exam at 11 AM");
    }
    else if(iStd == 4)
    {
        printf("Exam at 12 PM");
    }
    else
    {
        printf("Invalid standard");
    }

    return 0;
}