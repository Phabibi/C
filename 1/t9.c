#include<stdio.h>
#include<math.h>

int main(void)
{
  int x,y,z;

  scanf("%d %d %d", &x, &y, &z);
  int numRows = z;
  for(int i = 0; i < z; i++)
  {
    printf("\n");
    char t_char;
    numRows--;
    int left = floor(numRows*(x/(2.0*z)));
    int right = ceil((x-1)+ -numRows*(x/(2.0*z)));
  for (int j = 0 ; j < right + 1 ; j++)
  {
    if(j < left || j > right)
    {
      t_char = ' ';
    }
    else
    {
      if (i == 0 || i == z-1)
      {
        t_char = '#';
      }

      else
      {
        if(j > left && j < right)
        {
          t_char = '.';

        }
        else{
        t_char = '#';
        }
      }
    }
  printf("%c",t_char );
}
printf("\n");
}
  return 0;
}
