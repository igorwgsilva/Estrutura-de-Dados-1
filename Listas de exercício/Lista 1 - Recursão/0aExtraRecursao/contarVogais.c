#include <stdio.h>
#include <string.h>
#include <ctype.h>

int recCont(char *palavra, int y){
  if(palavra[y] == '\0') return 0;
  
  char v = tolower(palavra[y]);
  if(v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u')
    
    return 1 + recCont(palavra, y +1);
  else{
    return recCont(palavra, y +1);
  }
  
}

int main(void){
  int i, x, w;
  char palavra[21];
  printf("Insira uma palavra de até 20 caracteres:\n");
  scanf("%20s", palavra);

  x = recCont(palavra, 0);
  printf("%d", x);

  return 0;
}
