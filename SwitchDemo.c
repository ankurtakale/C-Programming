#include<stdio.h>

int main()
{
    int iStd = 0;

    printf("Enter your standard :\n");
    scanf("%d",&iStd);

    switch(iStd)
    {
        case 1:
        printf("Exam at 9 AM");
        break;
        case 2:
        printf("Exam at 10 AM");
        break;
        case 3:
        printf("Exam at 11 AM");
        break;
        case 4:
        printf("Exam at 12 PM");
        break;
        default:
        printf("Invalid standard");
        
    }
}