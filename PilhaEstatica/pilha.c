#include <stdlib.h>
#include "pilha.h"


TPilha* CriarPilha(){
	TPilha *nova = (TPilha*) malloc(sizeof(TPilha));
	if(nova != NULL){
		nova->quant = 0;
	}
	return nova;
}

int pilhaVazia(TPilha *pilha){
	if(pilha == NULL){
		return -1;
	}
	if(pilha->quant == 0){
		return 1;
	}else{
		return 0;
	}
}

int pilhaCheia(TPilha *pilha){
	if(pilha == NULL){
		return -1;
	}
	if(pilha->quant == MAX){
		return 1;
	}else{
		return 0;
	}
}


int Inserir(TPilha *pilha, int num){
	if(pilha == NULL){
		return 0;
	}
	if(pilhaCheia(pilha)){
		return 0;
	}
	pilha->vetor[pilha->quant] = num;
	pilha->quant++;
	return 1;
}

int Remover(TPilha *pilha){
		if(pilha == NULL){
		return 0;
	}
	if(pilhaVazia(pilha)){
		return 0;
	}
	pilha->quant--;
	return 1;
}

int tamanhoPilha(TPilha *pilha){
	if(pilha == NULL){
		return -1;
	}else{
		return pilha->quant;
	}
}

int consulta(TPilha *pilha, int *num){
	if(pilha == NULL){
		return 0;
	}
	if(pilhaVazia(pilha)){
		return 0;
	}
	*num = pilha->vetor[pilha->quant-1];
	return 1;
}