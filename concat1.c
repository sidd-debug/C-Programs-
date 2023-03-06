#include<stdio.h>
int main()
{
    int i;
    int j;
    int k;
    char s1[20]="times";
    char s2[20]="new";
    char s3[30];
   
    
   for(i=0;s1[i]!='\0';i++)
   {
       s3[i]=s1[i];
   }
   s3[i] = ' ';
   for(j=0;s2[j]!='\0';j++)
   {
       s3[i+j+1]=s2[j];
   }
   

   printf("%s",s3);

   return 0;


}