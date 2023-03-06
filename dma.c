#include<stdio.h>
#include<stdlib.h> 

int main()
{
    int n;
    int *p;
    int i;

    printf("enter the size of the array");
    scanf("%d",&n);
    p = (int*) malloc (n*sizeof(int));

    printf("enter array elemnts");

    for(i=0; i<n; i++)
    {
        scanf("%d",&p[i]);
    }

    printf("printing array elements");

    for (i = 0; i < n; i++)
    {
        printf("p=[%d]",i,p[i]); 
    }
    
}