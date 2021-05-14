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

		lista->tamanho++;
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

int RemoveInicio(TListaCircular *lista){
	if(lista->prim == NULL){
		return 0;
	}
	if(lista->prim->prox == lista->prim){
		free(lista->prim);
		lista->prim = NULL;
		lista->tamanho--;
		return 1;
	}else{
		TNo *aux = lista->prim;
		while(aux->prox != lista->prim){
   		aux = aux->prox;
		}
		TNo *remove = lista->prim;
		aux->prox = remove->prox;
		lista->prim = remove->prox;
		free(remove);
		return 1;
	}

}

int RemoveFim(TListaCircular *lista){
	if(lista->prim == NULL){
		return 0;
	}
	if(lista->prim->prox == lista->prim){
		free(lista->prim);
		lista->prim = NULL;
		lista->tamanho--;
		return 1;
	}else{
		TNo *remove = lista->prim;
		TNo *anterior;
		while(remove->prox != lista->prim){
			anterior = remove;
   		remove = remove->prox;
		}
		anterior->prox = remove->prox;
		free(remove);
		return 1;
	}

}