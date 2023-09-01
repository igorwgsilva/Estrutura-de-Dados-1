#include <stdio.h>

int recSigma(n){
  if(n==1) return 1;
  return n + recSigma(n - 1);
  
}

int main(void) {
  int n, x;
  printf("Insira um inteiro igual ou maior do que 1:\n");
  scanf("%d", &n);
  x = recSigma(n);

  printf("%d", x);
  
  return 0;
}
