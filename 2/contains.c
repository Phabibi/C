#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main ( int argc, char* argv[])
{
  int len_1 = strlen( argv[1]);
  int len_2 = strlen(argv[2]);
  int count = 0;

  if (len_1 < len_2)
  {
    printf("false\n");
    return 0;
  }

  for (int i = 0; i < len_2; i++)
    {
      for(int j = 0; j <  len_1 ; j++){
        if (argv[2][i] == argv[1][j])
        {
          count+=1;
          break;
        }
    }
  }
  if(count == len_2){
    printf("true\n");
  }
  else
  {
    printf("false\n" );
  }
  return 0;
}
