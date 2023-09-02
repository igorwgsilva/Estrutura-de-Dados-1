#include <stdio.h>
#include <time.h>

int fat(int n){
  int r;
  if(n==1){
    printf(" * 1");
    return 1;
  }
  //printf(" * %d", n);
  r = n * fat(n-1);
  printf(" * %d ", n);
  return r;
}

int main(void) {
  int x, f1, f2;
  printf("Digite um número inteiro positivo: ");
  scanf("%d", &x);

  f2 = fat(x);
 
  printf("\n\nIterativo O %d-ésimo termo de fibonacci é %d\n", x, f2);

  return 0;
}
