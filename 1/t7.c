#include <stdio.h>
int main (void){
  int a;
  int i;

  while ( (scanf("%d", &a) != EOF )) {
    for (i=0;i<a;i++){
      printf("#");
    }
    printf("\n");
  }
  return 0;
}
