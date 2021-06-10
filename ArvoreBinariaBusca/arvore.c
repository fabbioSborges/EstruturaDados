#include <stdlib.h>
#include "arvore.h"

TArvore* Criar(){
	TArvore *nova = (TArvore*) malloc(sizeof(TArvore));
	if(nova != NULL){
		nova->raiz = NULL;
	} 
	return nova;
}


int ArvoreVazia(TArvore *arvore){
	if(arvore->raiz == NULL){
		return 1;
	}else{
		return 0;
	}
}

int Inserir(TArvore *arvore, int num){
	if(arvore == NULL){
		return 0;
	}
	TNo *novoNo = (TNo*) malloc(sizeof(TNo));
	novoNo->esq = NULL;
	novoNo->dir = NULL;
	novoNo->elem = num;
	if(ArvoreVazia(arvore)){
		arvore->raiz = novoNo;
		return 1;
	}else{
		TNo *atual = arvore->raiz;
		TNo *ant = NULL;
		while(atual != NULL){
			ant = atual;
			if(num == atual->elem){
				return 0;
			} 
			if(num > atual->elem){
				atual = atual->dir;
			} else{
				atual = atual->esq;
			}
			/* if(num == atual->elem){
				return 0;
			}   */
		}
		if(num > ant->elem){
			ant->dir = novoNo;
		}else{
			ant->esq = novoNo;
		}
	}
	return 1;
}