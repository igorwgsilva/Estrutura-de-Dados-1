#include <stdio.h>

int recMult(int x, int y){

if(x==0 || y==0)
  return 0;
else{
  int mult = x + recMult(x,y-1);
  return mult;
}
  

}

int main(void){
int a,b,c;

printf("Insira os números a serem multipĺicados:\n");
scanf("%d%d",&a, &b);

c = recMult(a,b);
printf("Produto : %d", c);

return 0;
}
