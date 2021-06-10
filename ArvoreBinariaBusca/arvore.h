typedef struct no{
	int elem;
	struct no *esq;
	struct no *dir;
}TNo;

typedef struct{
	TNo *raiz;
}TArvore;

TArvore* Criar();
int ArvoreVazia(TArvore *arvore);
int Inserir(TArvore *arvore, int num);