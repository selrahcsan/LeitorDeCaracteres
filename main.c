#include "stdio.h"
#include <string.h>

int main(void){
  int contador;
  char minhaFrase[100]; //limita ao tamanho de 100 caracteres o vetor

  printf("Digite a sua Frase: ");
  scanf  ("%99[^\n]", minhaFrase);

  for (contador = 0; contador < strlen(minhaFrase); contador++){
    printf("%d->[%c]->" , contador, minhaFrase[contador]);
  }
  printf("\n");
}
