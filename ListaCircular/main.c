#include <stdio.h>
#include <stdlib.h>
#include "listaCircular.h"

int main(void) {
  
  int op, num, posicao;
  TListaCircular *lista = NULL;
  do{
    printf("1 - Criar Lista\n");
    printf("2 - Adicionar Elemento no Inicio\n");
    printf("3 - Adicionar Elemento no Final\n");
    printf("4 - Remover no Inicio\n");
    printf("5 - Remover no Final\n");
    printf("6 - Imprimir Lista\n");
    printf("7 - Inserir no meio\n");
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
            system("clear");
            printf("Digite um número para inserir na lista: ");
	          scanf("%d", &num);
            if(InserirInicio(lista, num) == 1){
						  printf("Elemento inserido com sucesso\n");
						}
      break;
      case 3:
            system("clear");
            printf("Digite um número para inserir na lista: ");
	          scanf("%d", &num);
            /* if(InserirFim(lista, num) == 1){
						  printf("Elemento inserido com sucesso\n");
						} */
      break;
      case 4:
            system("clear");
            /* if(RemoveInicio(lista) == 1){
						  printf("Elemento removido com sucesso\n");
						} */
      break;
      case 5:
            system("clear");
            /* if(RemoveFim(lista) == 1){
						  printf("Elemento removido com sucesso");
						} */
      break;
      case 6:
            system("clear");
            imprimi(lista);
      break;
      case 7:
            system("clear");
            printf("Digite um número para inserir na lista: ");
	          scanf("%d", &num);
            printf("Digite a posição para  inserir : ");
	          scanf("%d", &posicao);
            /* if(InserirMeio(lista, num, posicao) == 1){
						  printf("Elemento inserido com sucesso\n");
						} */
      break;
    }


  }while(op != 0);


  
 
  return 0;
}