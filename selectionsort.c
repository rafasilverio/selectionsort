#include <stdio.h>
#include <stdlib.h>

/**Define o tamanho de um vetor*/
#define SIZE 200000

/*Função que ordena o vetor selecionando o valor, conhecida como SelectionSort,
  em relação ao BubbleSort ela faz menos alterações pelo fato de não trocar todo valor que encontrar,
  pois é feito uma verificação antes da troca.*/
void ordena(int *vetor, int tamanho){
 int i = 0, j;
 int menor, aux;

 /*for para percorrer todos os dados do vetor*/
 for(i = 0; i  < tamanho-1; i++){
  menor = i; /*atribuição do menor valor*/
  for(j = i+1; j < tamanho; j++){ /*percorre do menor ao final do vetor comparando e guardando o menor valor*/
    if(vetor[j] < vetor[menor])
     menor = j;    
  }
  if(menor != i){ /*troca de posições*/
    aux = vetor[i];
    vetor[i] = vetor[menor];
    vetor[menor] = aux;
  }
 }
}

int main(){
  int vetor[SIZE];
  int i;

  srand(0);
  
  /*imprime o vetor de entrada*/
  printf("Normal\n");
  for(i = 0; i < SIZE; i++){
    vetor[i] = rand()%SIZE;
    printf("%d, ", vetor[i]);
  }
 
  ordena(vetor, SIZE); 

 /*imprime o vetor de ordenado*/
  printf("\nOrdenado\n");
  for(i = 0; i < SIZE; i++)
    printf("%d, ", vetor[i]);
  
  printf("\n");
  return 0;
}
