#include <stdlib.h>
#include <stdio.h>
#include "ListaEncadeada.h"

TLista* CriarLista(){
 TLista *novaLista = (TLista*) malloc(sizeof(TLista));
 if(novaLista == NULL){
   printf("Lista não foi criada");
   return NULL;
 }
 novaLista->tamanho = 0;
 novaLista->prim = NULL;
 novaLista->fim = NULL;

 return novaLista;

}

int InseriInicio(TLista *lista, int infoEntrada){
  if(lista == NULL){
		printf("Lista não foi criada, impossivel inserir");
    return 0;
  }
  TNo *novoNo = (TNo*) malloc(sizeof(TNo));
  if(novoNo == NULL){
	  printf("Novo elemento não foi criado!");
		return 0;
  }
  novoNo->info = infoEntrada;
  //if(lista->tamanho == 0){
  if(lista->prim == NULL){ //lista vazia
    lista->prim = novoNo;
    lista->fim = novoNo;
    lista->tamanho = lista->tamanho + 1;
    novoNo->prox = NULL;
    return 1;
  }
  else{ // lista com elementos
    novoNo->prox = lista->prim;
    lista->prim = novoNo;
    return 1;
  }
}

void imprimirLista(TLista *lista){
  TNo *aux = lista->prim;
  int i = 0;
  while( aux != NULL){
    printf("Elemento %d: %d\n",i, aux->info);
    aux = aux->prox;
    i++;
  }

}


int RemoveInicio(TLista *lista){
  if (lista == NULL){
    printf("lista não foi criada\n");
    return 0;
  }
  if(lista->prim == NULL){
    printf("impossivel remover em uma lista vazia\n");
    return 0;
  }
  TNo *NoRemove = lista->prim;
  //lista->prim = lista->prim->prox;
  lista->prim = NoRemove->prox;
  free(NoRemove);
  return 1;
}

int RemoveFinal(TLista *lista){
  if (lista == NULL){
    printf("lista não foi criada\n");
    return 0;
  }
  if(lista->prim == NULL){
    printf("impossivel remover em uma lista vazia\n");
    return 0;
  }
  TNo *remove = lista->prim;
  TNo *ant;
  while(remove->prox != NULL){
    ant = remove;
    remove = remove->prox;
  }
  if(remove == lista->prim){//remover de uma lista que tem somente um elemento
    lista->prim = remove->prox;
    lista->fim = remove->prox;
    free(remove);
    return 1;
  }
  ant->prox = remove->prox;
  lista->fim = ant;
  free(remove);

  return 1;
}

int InserirFinal(TLista *lista, int infoEntrada){
  if(lista == NULL){
		printf("Lista não foi criada, impossivel inserir\n");
    return 0;
  }
  TNo *novoNo = (TNo*) malloc(sizeof(TNo));
  if(novoNo == NULL){
	  printf("Novo elemento não foi criado!\n");
		return 0;
  }
	
  novoNo->info = infoEntrada;
  
  if(lista->prim == NULL){ //lista vazia
    lista->prim = novoNo;
    lista->fim = novoNo;
    lista->tamanho = lista->tamanho + 1;
    novoNo->prox = NULL;
    return 1;
  }else{
    lista->fim->prox = novoNo;
    novoNo->prox = NULL;
    lista->fim = novoNo;
    return 1;
  }

}