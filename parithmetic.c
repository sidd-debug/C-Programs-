#include <stdio.h>

int main()
{
    int a = 22;
    int *p = &a;
    printf("p = %x\n", p); 
    p++;
    printf("p++ = %x\n", p);
    p--;
    printf("p-- = %x\n", p);
 
    int b = 22;
    int *q = &b;
    printf("q = %x\n", q);  
    q++;
    printf("q++ = %x\n", q); 
    q--;
    printf("q-- = %x\n", q); 
 
    char c = 'a';
    char *r = &c;
    printf("r = %x\n", r); 
    r++;
    printf("r++ = %x\n", r);   
    r--;
    printf("r-- = %x\n", r); 
 
    return 0;
}