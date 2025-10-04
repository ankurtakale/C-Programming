#include<stdio.h>

int main()
{
    double Arr[] = {10.0,20.0,30.0,40.0};
    
    printf("Size od Arr : %d\n",sizeof(Arr));  //32

    Arr++;  //ERROR : Can't UPDATE/INCREMENT BASE ADDRESS OF ARRAY

    return 0;
}