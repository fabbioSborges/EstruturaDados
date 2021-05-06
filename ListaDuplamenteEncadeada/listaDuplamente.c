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
	while(aux != NULL){
		printf("Elemento: %d\n", aux->info);
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
	
}