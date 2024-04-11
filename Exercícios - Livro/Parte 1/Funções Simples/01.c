#include <stdio.h>

int dentro_ret(int x0, int y0, int x1, int y1, int x, int y){
  if((x>=x0 && x<=x1)&&(y>=y0 && y<=y1))
    return 1;
  return 0;
}

int main(void){

  int x0 = 0, y0 = 0, x1 = 4, y1 = 7, x, y, w;

  printf("Determine x e y respectivamente:\n");
  scanf("%d%d", &x, &y);

  w = dentro_ret(x0, y0, x1, y1, x, y);
  if(w==1)
    printf("\nPonto determinado está contido no retângulo.");
  else
      printf("\nPonto determinado não está contido no retângulo.");


  return 0;
}
