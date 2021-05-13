typedef struct no{
	int elem;
	struct no *prox;
}TNo;

typedef struct{
  int tamanho;
	TNo *prim;
}TListaCircular;  
// 5 - 6 - 7- 8 -9

TListaCircular* CriarLista();
int InserirInicio(TListaCircular *lista, int elemento);
void imprimi(TListaCircular *lista);