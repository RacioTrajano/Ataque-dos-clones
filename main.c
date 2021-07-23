#include <stdio.h>
#include <stdlib.h>

int main () {

int tam;
int soma=0;
int reducao=0;
int N=0;
int V=0;
int *qtd = &N;
int *valor = &V;


scanf("%d %d", &tam, &reducao);

while(soma<tam){

scanf("%d %d", qtd, valor);
soma = soma + N;

for (int i=0; i<reducao; i++)
{
  if(N ==1)
  break;

  else if (N %2 != 0){
    N =N -1;
  }

  N = N/2;
}

for (int i=0; i< N; i++){
  printf("%d ", V);
}
}


  
  
  return 0;
}