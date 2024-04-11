#include <stdio.h>

void inversao(int *v, int inicio, int fim){

  if(inicio >= fim)
    return;
  
  //trecho pode ser uma função por si só.
  int temp;
  temp = v[inicio];
  v[inicio] = v[fim];
  v[fim] = temp;

  inversao(v, ++inicio , --fim);
}

void inverterRec(int n, int *v) {
  
  inversao(v, 0 , n - 1);
  
}

int main(void) {
  int n = 8, x, v[] = {1, 2, 3, 4, 5, 6, 7,8};

  inverterRec(n, v);

  for(int i=0; i<=7; i++)
    printf("%d\n", v[i]);

  

  return 0;
}
