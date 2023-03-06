#include<stdio.h>

int main()
{
    int n; 
    int marks[10];
    int sum = 0;
    float avg;
    printf("enter the number of elements:");
    scanf("%d",&n);

    for(int i = 0; i<3; i++)
    {
        printf("enter the numbers%d",i+1);
        scanf("%d",&marks[i]);

        sum = sum + marks[i]; 
    } 

    avg = sum/n;

    printf("avg = %0.2f",avg);

    return 0;
}