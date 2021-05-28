#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(void) {
  
  int op, num;
  TPilha *pilha = NULL;
  do{
    printf("1 - Criar Pilha\n");
    printf("2 - Pilha vazia\n");
    printf("3 - Adicionar Elemento\n");
    printf("4 - Remover\n");
    printf("5 - Tamanho Pilha\n");
    printf("6 - Pilha Cheia\n");
    printf("7 - Consultar Topo\n");
    printf("0 - Sair\n");
    printf("Digite uma opção: ");  
    scanf("%d", &op);
    switch (op)
    {
      case 1:
            system("clear");
            pilha = CriarPilha();
            printf("Pilha Criada com Sucesso\n\n");
      break;
      case 2:
            system("clear");
						if(pilhaVazia(pilha) == 1){
							printf("Pilha é vazia\n");
						}else{
							printf("Pilha não é vazia\n");
						}
			break;
      case 3:
            system("clear");
            printf("Digite um número para inserir na pilha: ");
	          scanf("%d", &num);
            if(Inserir(pilha, num) == 1){
						  printf("Elemento inserido com sucesso\n");
						}else{
							printf("não foi possivel inserir\n");
						}
      break;
      case 4:
            system("clear");
            if(Remover(pilha) == 1){
						  printf("Elemento removido com sucesso\n");
						}
      break;
      case 5:
            system("clear");
            printf("O tamanho da pilha é %d\n\n", tamanhoPilha(pilha));
      break;
      case 6:
            system("clear");
           	if(pilhaCheia(pilha) == 1){
							printf("Pilha está cheia\n");
						}else{
							printf("Pilha não está cheia\n");
						}
      break;
      case 7:
            system("clear");
           	if(consulta(pilha, &num)){
							printf("O topo da pilha é %d\n", num);
						}else{
							printf("Não foi possivel consultar o topo\n");
						}
      break;
    }


  }while(op != 0);


  
 
  return 0;
}