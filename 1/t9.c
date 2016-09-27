#include<stdio.h>
#include<math.h>

int main(void)
{
  int x;
  int y;
  int z;


  scanf("%d %d %d", &x, &y, &z);
  int numRows = z;
  for(int i = 0; i < z; i++)
  {
    printf("\n");
    char the_char;
    numRows--;
    int left = floor(numRows*(x/(2.0*z)));
    int right = ceil((x-1)+ -numRows*(x/(2.0*z)));
    if(i == 0 || i == z - 1)
    {
      for(int j = 0; j < x; j++)
      {
        if(j >= left && j <= right)
        {
          the_char = '#';
        }
        else
        {
          the_char = ' ';
        }

        printf("%c",the_char);
      }
    }
    else // for print rows second to seonce last
    {
      for(int j = 0; j < right+1; j++)
      {
        if (j == left)
        {
          the_char = '#';
        }
        else if(j == right)
        {
          the_char = '#';
        }
        else if(j > left && j < right)
        {
          the_char = '.';
        }
        else
        {

          the_char = ' ';
        }

        printf("%c",the_char);
    }

    }

  }
  printf("\n");
  return 0;
}
