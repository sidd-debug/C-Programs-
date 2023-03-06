#include<stdio.h>

struct employee
{
    int empid;
    char name[20];
    float salary;
    int age;
};
//struct employee e[50];


void main()
{
   struct employee a[2];
     
   int i;
   for ( i = 0; i < 2; i++)
   {
    printf("\nEnter details :\n");
    printf("Name ?:");
    scanf("%s",a[i].name);  
    printf("ID ?:"); 
    scanf("%d",&a[i].empid);
    printf("Salary ?:");
    scanf("%f",&a[i].salary);
   }


    for(i = 0; i<2; i++)
    {
    printf("\nEntered detail is:");
    printf("Name: %s"   ,a[i].name);
    printf("Id: %d"     ,a[i].empid);
    printf("Salary: %f\n",a[i].salary);
    } 
   
    
     
   
   
   
    
}
