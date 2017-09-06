// Filename:  myCp.c
//Description:   cope file
//by author:  wuxiaorong   2017/9/6

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv [])
{
    FILE *sourceFile, *destinationFile;
    int ch;
    
    if(argc != 3)
       {
           printf("Usage: %s source destination\n", argv[0]);
          // exit(1);
          EXIT_FAILURE;
       }
    if((sourceFile = fopen(argv[1], "r")) == 0  )
      {
          printf("can't open this file : %s !\n", argv[1]);
          exit(1);
      }
   if((destinationFile = fopen(argv[2], "w")) == NULL)
       {
          printf("can't create this file : %s !\n", argv[2]);
          exit(1);
         }
    while((ch = getc(sourceFile)) != EOF)
        {
            putc(ch, destinationFile);
}

if(fclose(sourceFile) != 0 || fclose(destinationFile) != 0)
         fprintf(stderr, "something wrong, can't close these files !");
return 0;
}
