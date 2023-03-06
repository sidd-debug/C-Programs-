#include<stdio.h>
 
struct book
{
    int bno;
    char bookname[10];
    float price;
};

struct book b1,b2;
void main()
{
    printf("enter bno, bookname and price");
    scanf("%d%s%f",b1.bno,b1.bookname,&b1.price);
    printf("enter bno, bookname and price");
    scanf("%d%s%f",b2.bno,b2.bookname,&b2.price);


    printf("bno=%d",b1.bno);
    printf("bname=%s",b1.bookname);
    printf("price=%f",b1.price);
    
    printf("bno=%d",b2.bno);
    printf("bname=%s",b2.bookname);
    printf("price=%f",b2.price); 





    
}