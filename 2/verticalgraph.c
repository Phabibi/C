#include <stdio.h>

int main(void)
{
  int graph [80][80] = {0};
  int i;

  unsigned int j,k,num=0,cols=0,rows=0;

  while ((scanf("%d", &num)) != EOF )
  {
    if (rows < num)
    {
      rows = num;
    }
    for (i = 0 ;i < num ; i++) {
      graph[cols][79-i] = 1;

    }
    cols++;
  }
  for (j = 80  - rows; j < 80 ; j++)
  {
    for(k = 0; k < cols; k++)
    {
      if (graph [k][j] == 1)
      {
        printf("#");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}
