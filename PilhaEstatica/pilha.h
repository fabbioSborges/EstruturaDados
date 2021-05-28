#define MAX 10 

typedef struct{
	int vetor[MAX];
	int quant;
}TPilha;

TPilha* CriarPilha();
int Inserir(TPilha *pilha, int num);
int Remover(TPilha *pilha);
int tamanhoPilha(TPilha *pilha);
int pilhaVazia(TPilha *pilha);
int pilhaCheia(TPilha *pilha);
int consulta(TPilha *pilha, int *num);