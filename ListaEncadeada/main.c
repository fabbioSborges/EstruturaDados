#include <stdio.h>
#include <stdlib.h>
#include "ListaEncadeada.h"

int main(void) {
  
  TLista *lista01 = CriarLista();
  TLista *lista02 = CriarLista();

  InseriInicio(lista01, 9);
  InseriInicio(lista01, 8);
  InseriInicio(lista01, 3);
  InseriInicio(lista01, 6);
  imprimirLista(lista01);


  // 6 -> 3 -> 8 -> 9
  if(RemoveFinal(lista01) == 1){
    printf("Elemento do Final removido com sucesso\n");
    imprimirLista(lista01);
  }
   if(RemoveFinal(lista01) == 1){
    printf("Elemento do Final removido com sucesso\n");
    imprimirLista(lista01);
  }

   if(RemoveFinal(lista01) == 1){
    printf("Elemento do Final removido com sucesso\n");
    imprimirLista(lista01);
  }

  if(RemoveFinal(lista01) == 1){
    printf("Elemento do Final removido com sucesso\n");
    imprimirLista(lista01);
  }



  InseriInicio(lista01, 6000);
  imprimirLista(lista01);
 
  return 0;
}