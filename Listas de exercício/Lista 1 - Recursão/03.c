#include <stdio.h>

int recPot(int a, int b){

if(b == 0)
 return 1;
else{

int result = a * recPot(a, b-1);
return result; 

}


}

int main(void){
int a,b,c;

printf("Insira os valores respectivos de BASE e EXPOENTE:\n");
scanf("%d%d", &a, &b);

c = recPot(a,b);
printf("\nResultado da potência: %d", c);

return 0;
