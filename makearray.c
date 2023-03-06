#include<stdio.h>

int* makearray()
{
   static int arr[]={1,2,3,4,5,6};
    return arr;






}

void main()
{
    int *p;
    p = makearray();

    for(int i = 0; i<6; i++)
    {
        printf("%d",p[i]);
    }
}