#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1,*f2;
  char filename[100];
  char c;

 f1= fopen("C:\\my c programming\\my program1.txt","r");  

  if (f1== NULL) 
  {
    printf("cannot open file");
    exit (0);
  }
 
 f2= fopen("C:\\my c programming\\my program2.txt","w");  

  if (f2== NULL)
  {
    printf("cannot open file");
    exit (0);

  }
  c = fgetc(f1);

  while(c!= EOF)
  {
    fputc (c,f2);
    c = fgetc(f1);
  }
  
  fclose(f1);
  fclose(f2);

 return 0;
}

	