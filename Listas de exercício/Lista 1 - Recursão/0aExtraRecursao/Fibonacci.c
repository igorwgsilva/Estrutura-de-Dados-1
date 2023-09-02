#include <stdio.h>
#include <time.h>

int fibIt(int n){
  int i, f1 = 1, f2 = 1, ff;
  if(n==1) return f1;
  if(n==2) return f2;
  for(i = 3; i<=n; i++){
    ff = f1 + f2;
    f1 = f2;
    f2 = ff;
  }
  return ff;
}

int fibRec(int n){
  if(n==1) return 1;
  if(n==2) return 1;
  return fibRec(n-1) + fibRec(n-2);
}

int main(void) {
  clock_t inicio, fim;
  int x, f1, f2;
  printf("Digite um número inteiro positivo: ");
  scanf("%d", &x);
  inicio = clock();
  f2 = fibIt(x);
  fim = clock();
  printf("Iterativo %f - O %d-ésimo termo de fibonacci é %d\n", (double) (fim - inicio) / CLOCKS_PER_SEC,x, f2);
  inicio = clock();
  f1 = fibRec(x);
  fim = clock();
  printf("Recursivo %f - O %d-ésimo termo de fibonacci é %d\n",  (double) (fim - inicio) / CLOCKS_PER_SEC, x, f1);

  return 0;
}
