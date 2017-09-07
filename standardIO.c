//standardIO.c      using I/O

#include<stdio.h>
#include<stdlib.h>     //  exit()

int main(int argc, char * argv[])
{
    FILE *fp;
    int ch;
    long count = 0;
    if(argc != 2)
       {
         printf("Usage:    %s    filename\n", argv[0]);
          // exit(1);
            EXIT_FAILURE;
       }
    if((fp = fopen(argv[1], "r")) == NULL)
       {
          printf("can't open this file");
         //  exit(1); 
            EXIT_FAILURE;
          }
      while((ch = getc(fp)) != EOF)
         {   
              if(ch == '\n' || ch == ' ')
                       continue;
             //  putchar(ch);
               count++;
         }
     fclose(fp);
     printf("this file %s has %ld characters\n", argv[0], count);
      return 0;
}
