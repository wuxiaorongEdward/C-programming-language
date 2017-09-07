//an improvement of standardIO, count the characters of a file
// Filename:  countCharacter.c
//auther: wuxiaorong    2017/9/7

#include<stdio.h>
#include<stdlib.h>

int main()
{
   char ch;
   FILE * fp;
   char name[41];
   long count = 0;
  printf("Enter the file :" );
  scanf("%s", name);
 if((fp = fopen(name, "r")) == NULL)
     {
       printf("can't open this file !\n");
       EXIT_FAILURE;
}
 while((ch = getc(fp)) != EOF)
     {
          if(ch == '\n' || ch == ' ')
               continue;
           count++;
}

if(fclose(fp) != 0 )
   {
      fprintf(stderr, "something wrong !");
      EXIT_FAILURE;
}

printf("this file has %ld characters !\n", count);
    return 0;
}
