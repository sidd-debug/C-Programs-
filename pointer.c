#include<stdio.h>
void main()
{
    int *p;
    int **q;
    int ***r;
    int a = 10;
    p = &a;
    q = &p;
    r = &q;

    printf(" p = %x",p);
    printf("*p = %d",*p);
    printf(" &p = %x ",&p);

    printf("q = %x",q);
    printf("*q = %d",**q);
    printf("&q = %x ",&q);

    printf( " r = %x",r);
    printf( "***r = %d",***r);
    printf("&r = %x",&r);

}