#include <stdio.h>

int Fib(int n){
  int x, y=1, z=1;

  for(int i=0;i<=n;i++){
    x = y;
    y = z;
    z = x+y;
  }
  return z;

}

int main(void){

  int n = 5, x;

  x = Fib(n);

  printf("%d", n);

