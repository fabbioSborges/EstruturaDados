typedef struct TNo{
  int info;
	struct TNo *ant;
	struct TNo *prox;
}TNo;

typedef struct{
	TNo *prim;
	int tamanho;
}TListaDuplamente;

TListaDuplamente* CriarLista(); 
int InserirInicio(TListaDuplamente* lista, int informacao);
int InserirFim(TListaDuplamente* lista, int informacao);
int InserirMeio(TListaDuplamente* lista, int informacao, int posicao);
int RemoveInicio(TListaDuplamente* lista);
int RemoveFim(TListaDuplamente* lista);
void imprimi(TListaDuplamente* lista); 
int iverte(TListaDuplamente *lista1, TListaDuplamente *lista2);
TListaDuplamente *impar(TListaDuplamente *lista);