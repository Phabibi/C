#include <stdio.h>

int main(void)
{
  char c;
  int i,letter,count=0 ,len = 26;    //len must be 26 (26 letters)
  float freq;
  int arr[26];

  for (i = 0 ; i < len; i++)
  {
    arr[i] = 0;
  }

  while ((c = getchar()) != EOF )
  {
    c = tolower(c);     // converts c to lower case
    if(('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') )
    {
      count += 1;
      arr[c - 'a']++;
    }
  }
  for(i = 0 ; i < len ; i++)
  {
    if (arr[i] != 0)
    {

      letter = i + 'a';
      freq = (float)arr[i]/count;
      printf( "%c %.4f\n", letter, freq);
    }
  }

  return 0;
}
