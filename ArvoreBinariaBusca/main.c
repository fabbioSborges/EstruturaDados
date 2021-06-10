#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int main(void) {
  
  int op, num;
	TArvore *arvore;
  do{
    printf("1 - Criar Arvore\n");
    printf("2 - Arvore vazia\n");
    printf("3 - Adicionar Elemento\n");
    printf("4 - Remover Elemento\n");
    printf("0 - Sair\n");
    printf("Digite uma opção: ");  
    scanf("%d", &op);
    switch (op)
    {
      case 1:
            system("clear");
						arvore = Criar();
            printf("Arvore Criada com Sucesso\n\n");
      break;
      case 2:
            system("clear");
						if(ArvoreVazia(arvore))
							printf("Arvore vazia\n\n");
						else
							printf("Arvore nãão vazia\n\n");
			break;
      case 3:
            system("clear");
            printf("Digite um número para inserir na arvore: ");
	          scanf("%d", &num);
						if(Inserir(arvore, num)){
							printf("Elemento inserido com sucesso\n\n");
						}
      break;
      case 4:
            system("clear");
      break;
    }


  }while(op != 0);


  
 
  return 0;
}