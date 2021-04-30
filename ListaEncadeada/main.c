#include <stdio.h>
#include <stdlib.h>
#include "ListaEncadeada.h"

int main(void) {
  
  int op, num;
  TLista *lista = NULL;
  do{
    printf("1 - Criar Lista\n");
    printf("2 - Adicionar Elemento no Inicio\n");
    printf("3 - Adicionar Elemento no Final\n");
    printf("4 - Remover no Inicio\n");
    printf("5 - Remover no Final\n");
    printf("6 - Imprimir Lista\n");
    printf("0 - Sair\n");
    printf("Digite uma opção: ");  
    scanf("%d", &op);
    switch (op)
    {
      case 1:
            system("clear");
            lista = CriarLista();
            printf("Lista Criada com Sucesso\n\n");
      break;
      case 2:
            printf("Digite um número para inserir na lista: ");
	          scanf("%d", &num);
            if(InseriInicio(lista, num) == 1){
						  printf("Elemento inserido com sucesso\n");
						}
      break;
      case 3:
            printf("Digite um número para inserir na lista: ");
	          scanf("%d", &num);
            if(InserirFinal(lista, num) == 1){
						  printf("Elemento inserido com sucesso\n");
						}
      break;
      case 4:
            if(RemoveInicio(lista) == 1){
						  printf("Elemento removido com sucesso\n");
						}
      break;
      case 5:
            if(RemoveFinal(lista) == 1){
						  printf("Elemento removido com sucesso");
						}
      break;
      case 6:
            imprimirLista(lista);
      break;
    }


  }while(op != 0);


  
 
  return 0;
}