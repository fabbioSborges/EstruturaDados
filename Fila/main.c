#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(void) {
  
  int op, num;
  TFila *fila = NULL;
  do{
    printf("1 - Criar Fila\n");
    printf("2 - Adicionar Elemento\n");
    printf("4 - Remover\n");
    printf("6 - Tamanho Fila\n");
    printf("0 - Sair\n");
    printf("Digite uma opção: ");  
    scanf("%d", &op);
    switch (op)
    {
      case 1:
            system("clear");
            fila = CriarFila();
            printf("Fila Criada com Sucesso\n\n");
      break;
      case 2:
            printf("Digite um número para inserir na lista: ");
	          scanf("%d", &num);
            if(Inserir(fila, num) == 1){
						  printf("Elemento inserido com sucesso\n");
						}
      break;
      case 3:
            if(Remover(fila) == 1){
						  printf("Elemento removido com sucesso\n");
						}
      break;
      case 4:
            printf("O tamanho da fila é %d", tamanhoFila(fila));
      break;
    }


  }while(op != 0);


  
 
  return 0;
}