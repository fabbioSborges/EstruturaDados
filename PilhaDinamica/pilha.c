#include <stdlib.h>
#include "pilha.h"


TPilha* CriarPilha(){
	TPilha *nova = (TPilha*) malloc(sizeof(TPilha));
	if(nova != NULL){
		nova->topo = NULL;
		nova->quant = 0;
	}
	return nova;
}

int pilhaVazia(TPilha *pilha){
	if(pilha == NULL){
		return -1;
	}
	//if(pilha->quant == 0){
	if(pilha->topo == NULL){
		return 1;
	}else{
		return 0;
	}
}

int Inserir(TPilha *pilha, int num){
	
 	if(pilha == NULL){
		return 0;
	}
	TNo *novo = (TNo*) malloc(sizeof(TNo));
	novo->elem = num;
	novo->prox = pilha->topo;
	pilha->topo = novo;
	return 1; 
}

int Remover(TPilha *pilha){
	if(pilha == NULL){
		return 0;
	}
	if(pilhaVazia(pilha)){
		return 0;
	}
	TNo *remove = pilha->topo;
	//pilha->topo = pilha->topo->prox;
	pilha->topo = remove->prox;
	free(remove);
	return 1; 
}

int tamanhoPilha(TPilha *pilha){
 	//OPÇÃO 1
/*	if(pilha == NULL){
 		return -1;
	}else{
		return pilha->quant;
	}  */
	
	//OPÇÃO 1
	int cont = 0;
	TNo *aux = pilha->topo;
	while(aux != NULL){
		cont++;
		aux = aux->prox;
	}

	return cont;
}

int consulta(TPilha *pilha, int *num){
 	if(pilha == NULL){
		return 0;
	}
	if(pilhaVazia(pilha)){
		return 0;
	}
	*num = pilha->topo->elem;
	return 1;
}

TPilha* liberar(TPilha *pilha){
 	if(pilha != NULL){
		 TNo *aux;
		 while(pilha->topo != NULL){
			 aux = pilha->topo;
			 pilha->topo = pilha->topo->prox;
			 free(aux);
		 }
		 free(pilha);
	}
		 return NULL;
}