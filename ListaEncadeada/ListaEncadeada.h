typedef struct no{
  int info;
  struct no *prox;
}TNo;

typedef struct{
  TNo *prim;
  TNo *fim;
  int tamanho;
}TLista;

TLista* CriarLista();
int InseriInicio(TLista *lista, int infoEntrada);
void imprimirLista(TLista *lista);
int RemoveInicio(TLista *lista);
int RemoveFinal(TLista *lista);
int InserirFinal(TLista *lista, int infoEntrada);