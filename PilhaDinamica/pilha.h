typedef struct no{
	int elem;
	struct no *prox;
}TNo;

typedef struct{
	TNo *topo;
	int quant;
}TPilha;

TPilha* CriarPilha();
int Inserir(TPilha *pilha, int num);
int Remover(TPilha *pilha);
int tamanhoPilha(TPilha *pilha);
int pilhaVazia(TPilha *pilha);
int consulta(TPilha *pilha, int *num);
TPilha* liberar(TPilha *pilha);