#include "listaDuplamente.h"
#include <stdlib.h>
#include <stdio.h>


TListaDuplamente* CriarLista(){
  TListaDuplamente *novaLista = (TListaDuplamente*) malloc(sizeof(TListaDuplamente));
	if(novaLista == NULL){
		return NULL;
	}
	novaLista->prim = NULL;
	novaLista->tamanho = 0;
	return novaLista;
}


int InserirInicio(TListaDuplamente* lista, int informacao){
	if(lista == NULL){
		return 0;
	}
	TNo *novoNo = (TNo*) malloc(sizeof(TNo));
	novoNo->info = informacao;

	if(lista->prim == NULL){//verifica se a lista vazia
    lista->prim = novoNo;
	  novoNo->prox = NULL;
	  novoNo->ant = NULL;
		lista->tamanho++;
		return 1;
	}else{//lista não vazia
    novoNo->prox = lista->prim;
		lista->prim->ant = novoNo;
		lista->prim = novoNo;
		novoNo->ant = NULL;
		lista->tamanho++;
    return 1;
	}
  return 0;
}

void imprimri(TListaDuplamente* lista){
	TNo *aux = lista->prim;
	int cont = 0;
	while(aux != NULL){
		printf("Elemento[%d]: %d\n",cont, aux->info);
		cont++;
		aux = aux->prox;
	}
}

int InserirFim(TListaDuplamente* lista, int informacao){
	if(lista == NULL){
		return 0;
	}
	TNo *novoNo = (TNo*) malloc(sizeof(TNo));
	novoNo->info = informacao;
	if(lista->prim == NULL){//verifica se a lista vazia
    lista->prim = novoNo;
	  novoNo->prox = NULL;
	  novoNo->ant = NULL;
		lista->tamanho++;
		return 1;
	}else{
		TNo *aux = lista->prim;
		while(aux->prox != NULL){
			aux = aux->prox;
		}
    
		novoNo->ant = aux;
		//novoNo->prox = NULL;
		novoNo->prox = aux->prox;
		aux->prox = novoNo;
		lista->tamanho++;
		return 1;
	}

}

int InserirMeio(TListaDuplamente* lista, int informacao, int posicao){
	if(lista == NULL){ //lista foi criada
		return 0;
	}
  if(posicao >= lista->tamanho){// posição é maior que o tamanho da lista
		printf("posição maior que o tamanho da lista\n");
		return 0;
	}else{
		if(posicao == 0){
			InserirInicio(lista,  informacao);
		}else{
			TNo *novoNo = (TNo*) malloc(sizeof(TNo));
			novoNo->info = informacao;
			TNo *aux = lista->prim;
			int cont = 0;
			while(cont < posicao-1){
				aux = aux->prox;
				cont++;
			}
			novoNo->prox = aux->prox;
			novoNo->ant = aux;
			aux->prox->ant = novoNo;
			aux->prox = novoNo;
			lista->tamanho++;
			return 1;
		}
	}
return 0;
}

int RemoveInicio(TListaDuplamente* lista){
	if(lista == NULL){
		return 0;
	}
	if(lista->prim == NULL){
		return 0;
	}
	TNo *remove = lista->prim;
	lista->prim = remove->prox;
	if(remove->prox != NULL){
		remove->prox->ant = NULL;
	}
	free(remove);
	return 1;

}

int RemoveFim(TListaDuplamente* lista){
	if(lista == NULL){
		return 0;
	}
	if(lista->prim == NULL){
		return 0;
	}
	TNo *remove = lista->prim;
	while(remove->prox != NULL){
		remove = remove->prox;
	}
	if(remove->ant ==NULL){//REMOVER LISTA COM UNICO ELEMENTO
    lista->prim = remove->prox;
	}else{//remover lista com vários elementos
	  remove->ant->prox = remove->prox;
	}
	free(remove);
	return 1;
}