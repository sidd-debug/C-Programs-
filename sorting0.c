#include<stdio.h>

int main()
{
    int a[5],temp,j;
	printf("enter the numbers");
	
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
for(j=0;j<5;j++)
{
for (int i = 0; i < 5; i++)
{
    if (a[i]>a[i+1])
    {
      temp = a[i];
      a[i]=a[i+1];
      a[i+1] = temp;
    }
    // printf("\n%d",a[i]);
}
}
for(j=0;j<5;j++)
{
    printf("%d",a[j]);
}
   return 0;
}   

