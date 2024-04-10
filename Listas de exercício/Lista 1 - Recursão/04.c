#include <stdio.h>

int menorVet(int n, int v[]){
  if(n == 1)
    return v[0];
  
  int menor = menorVet(n - 1, v);

  return (v[n-1] < menor ? v[n-1] : menor);


}

int main(){

  int n=4, v[] = {5,7,8,1}, x;

  x = menorVet(n, v);

  printf("%d", x);

  


  return 0;
}
