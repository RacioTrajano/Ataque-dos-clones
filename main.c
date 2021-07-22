#include <stdio.h>
#include<stdlib.h>


int main () {
  int tam_codigo;
  int compressao;
  int qtd_leituras=0;

  int num_aparicao;
  int valor;

  int *N =&num_aparicao;
  int *V =&valor;


  scanf("%d %d", &tam_codigo, &compressao);

  while (qtd_leituras != tam_codigo){


    scanf("%d %d", N,V);
    qtd_leituras= qtd_leituras + num_aparicao;
    for(int i=0; i< num_aparicao - compressao;i++){
      printf("%d ", valor);
    }

  }



  return 0;
}