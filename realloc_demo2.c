#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int *Arr = NULL;

    Arr = (int *)malloc(5 * sizeof(int));       //20
    
    Arr = (int *)realloc(Arr,3 * sizeof(int));  //12

    free(Arr);
    

    return 0;
}