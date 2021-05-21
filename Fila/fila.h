typedef struct no{
  int info;
  struct no *prox;
}TNo;

typedef struct{
  TNo *prim;
  TNo *fim;
  int tamanho;
}TFila;

TFila* CriarFila();
int Inserir(TFila *fila, int infoEntrada);
int Remover(TFila *fila);
int tamanhoFila(TFila *fila);