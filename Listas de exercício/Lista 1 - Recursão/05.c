#include <stdio.h>

int Somatorio(int n, int *v) {

  if (n == 0)
    return 0;

  return v[n - 1] + Somatorio(n - 1, v);
}

int main(void) {
  int n = 7, x, v[] = {1, 2, 3, 4, 5, 6, 7};

  x = Somatorio(n, v);

  printf("%d", x);
}
