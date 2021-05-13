#include <stdio.h>
#include <stdlib.h>
#include "listaCircular.h"

TListaCircular *CriarLista(){
	TListaCircular *nova = (TListaCircular*) malloc(sizeof(TListaCircular));
	if( nova != NULL){
		nova->prim = NULL;
		nova->tamanho = 0;
	}else{
		printf("Nãão foi possivel criar a lista");
	}

	return nova;
}

int InserirInicio(TListaCircular *lista, int elemento){
	if(lista == NULL){
		printf("Lista nãão foi criada");
		return 0;
	}
	TNo *novoNo = (TNo*) malloc(sizeof(TNo));
	novoNo->elem = elemento;
	if(lista->prim == NULL){//lista vazia
		lista->prim = novoNo;
		novoNo->prox = novoNo;
		return 1;
	}else{
    TNo *aux = lista->prim;
		while(aux->prox != lista->prim){
			aux = aux->prox;
		}
		aux->prox = novoNo;
		novoNo->prox = lista->prim;
		lista->prim = novoNo;
		return 1;
	}
	return 1;
}

void imprimi(TListaCircular *lista){
	TNo *aux = lista->prim;
	int i = 0;
	while(aux->prox != lista->prim){
		printf("Elemento[%d] : %d\n",i,  aux->elem);
		aux = aux->prox;
		i++;
	}
	printf("Elemento[%d] : %d\n", i, aux->elem);
	

}