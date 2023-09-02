/*
Condições:

Base de recursão:
Deve existir um caso base que não é recursivo.

Passo de recursão:
Deve existir pelo menos um caso em que a função ou algoritmo
está definido em função de si mesmo. (Passo)

Direção de recursão:
O passo de recursão deve caminhar na direção da base de recursão.

----------------------------------------------------------------------------------------------

Problema no fatorial de 17(corrigido):

  64 bits = 8 bytes.
  0000 0101 = 5
  0111 1010 = -5 (complemento de 1, não é mais usado)
  0111 0111 = -8

  Transtornos do uso do complemento de 1:
    subtração  de 8 e -5 em binario = 2

    0000 0000 = 0
    1111 1111 = -0 ???

  Por conta disto é ultilizado complemento de 2 (basta adicionar 1 ao cálculo)
  corrigindo os transtornos. Porém ainda persiste um transtorno, que é o caso do 17, neste caso 
  ao usar o bit á esquerda do byte, o definindo como 1, o número fica negativo. e 17 em bits é 
  proximo ao ultimo bit

  forma de corrigir: usar variavel de tipo unsigned long int

obs: no caso da sequ~encia de Fibonaci não convém ultilizar recursão, pois é chamada a função de fibonaci diversas vezes repetidamente, ou seja, se sobrepõe.

----------------------------------------------------------------------------------------------

- Ida da Recursão e Volta da recursão
exemplo:
fat(10) = >>>>>IDA>>>>> n*[(abre aba)[fat(9) = 9 * [fat(8)]]] <<<<<VOLTA<<<<<
*/


#include <stdio.h>

//Função fatorial com recursivade.
unsigned long int fat(unsigned long int x){
  if(x==1) return 1;
  return x*fat(x-1);
}

//Função fatorial que não ultiliza recursividade, iterativa.
unsigned long int fat2(unsigned long int x){
  int i;
  unsigned long int r = 1 ;
  for(i = 1; i <= x; i++) 
    r *= i;
  return r;
}


// fibonaci recursiva e nao recursiva, respectivamente
int fibRec (int x){
  if(x==1 || x==2) return 1;
  return fibRec(x-1) + fibRec(x-2);
}

int fibIt(int x){
  int i, f1 = 1, f2 = 1, ff;
  if(x==1) return f1;
  if(x==2) return f2;
  for(i = 3; i<=x; i++){
    ff = f1 + f2;
    f1=f2;
    f2=ff;
    
  }
  return ff;

}


int main(void) {
  unsigned long int x, f1, f2, w, z, aa;
  
  printf("Digite um número inteiro positivo: ");
  scanf("%lu", &x);
  f1 = fat(x);
  printf("O fatorial de %lu é %lu\n", x, f1);
  f2 = fat2(x);
  printf("O fatorial de %lu é %lu\n", x, f2);

  w=fibRec(x);
  printf("\nO fibonaci de %lu é %lu\n", x, w);

  z=fibIt(x);
  printf("O fibonaci de %lu é %lu\n", x, z);


  return 0;
}
