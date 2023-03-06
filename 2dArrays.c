#include<stdio.h>

int main()
{
    int a,j,i;
    int x[3][3]= {0,0,0};


    printf("enter array numbers");
  for (int i = 0; i < 3; i++)
    {
        for (j=0;j<2;j++)
        {
            scanf("%d\n",&x[i][j]);
        }
        
    }
    for(int i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",x[i][j]+x[i][j]);
        }

        printf("\n");
    }
        return 0;
}

