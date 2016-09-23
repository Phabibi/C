#include <stdio.h>

int main (void){
  int x;
  int y;
  int z;

  scanf("%d %d %d" , &x ,&y ,&z);
  for (int i=0; i < x ; i++) {
    printf("#");
  }
  printf("\n");
  for (int j = 0; j < (y-2); j++) {
    printf("#");
    for (int k = 0; k < (x-2) ; k++) {
      printf(".");
    }
    printf("#\n");

  }

  if (x == 1){
    return 0;
  }

  for ( int c = 0; c < x ; c++){
    printf("#");
  }
  printf("\n");
  return 0;
}
