#include <stdio.h>
#include <stdlib.h>

#define SIZE 200000

void ordena(int *vetor, int tamanho){
 int i = 0, j;
 int menor, aux;

 for(i = 0; i  < tamanho-1; i++){
  menor = i;
  for(j = i+1; j < tamanho; j++){
    if(vetor[j] < vetor[menor])
     menor = j;    
  }
  if(menor != i){
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
  
  printf("Normal\n");
  for(i = 0; i < SIZE; i++){
    vetor[i] = rand()%SIZE;
    printf("%d, ", vetor[i]);
  }
 
  ordena(vetor, SIZE); 

  printf("\nOrdenado\n");
  for(i = 0; i < SIZE; i++)
    printf("%d, ", vetor[i]);
  
  printf("\n");
  return 0;
}
