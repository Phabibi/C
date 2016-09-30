#include <stdio.h>
#include <string.h>

int main(void){
    unsigned long charcount = 0;
    unsigned long linecount = 0;
    unsigned long wordcount = 0;
    int flag ;

    char c;

    while( ( c = getchar() ) != EOF)
    {
      if( ('a' <= c && c <= 'z') || ('A' <=  c && c <= 'Z') || (c == '\'') )
      {
        flag = 1;
      }
      else
      {
        if ( c == '\n')
        {
          linecount+=1;
        }

        if ( flag == 1 )
        {
          wordcount += 1;
          flag = 0;
        }

        charcount+=1;
      }


  }
  printf("%lu %lu %lu\n" ,charcount , wordcount , linecount);

  return 0;
}
