//Listde.h///////////////////////////////////////////////////
#include <stdbool.h>

typedef int Tdata;//tipo de dado de armazenamento

typedef struct Tnode{//def do tipo do nó
  Tdata info;//dado armazenado
  struct Tnode *prev;//ponteiro para o nó anterior
  struct Tnode *next;//ponteiro para o nó posterior
} Tnode;
//def do tipo listaDE

typedef struct TListDE{
  Tnode *first;
  Tnode *last;
  int len;
} TListDe;

//funçao de incialização da lista
void initList (TListDE *L);

void deleteList (TListDE *L);

void printList(TListDE L, bool dir);

void insertLeft(Tdata x, TListDE *L);

void insertRight(Tdata x, TListDE *L);

//listde.c////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "ListDE.h"

void initList(TListDe *L){
  L->first = NULL;
  L->last = NULL;
  L->len = 0;
}

void deletlist(TListDe *L){
  Tnode *aux = L -> first;
  while (aux){
    L->first = L->first->next;
    free(aux);
    aux=L->first;
  }
  L->len = 0;
}

void printList(TListDe L, bool dir){
  Tnode *aux;

  if(!dir){
    printf("First ->");
    aux = L.first;
    while(aux){
      printf("[%d]->", aux->info);
      aux = aux -> next;
    }
    printf("[NULL]");
  }else{
    printf("Last ->");
    aux = L.last;
    while(aux){
      printf("[%d]->", aux->info);
      aux = aux -> prev;
    }
    printf("[NULL]");
  }
  return;
}

int insetLeft(Tdata x, TListDe *L){
  Tnode *aux;
  aux = (Tnode*)malloc(sizeof(Tnode));
  if (aux == NULL)//falha na alocação
    return 1;//sinaliza com erro, deixando a lista original intacta 
  else{
    aux->info = x;        //atribui x para a informação
    aux->next = L->first;
    aux->prev = NULL;
    if(L->first != NULL)
      L->first->prev = aux;
    L->first = aux;
    if(L->last==NULL)
      L->last =aux;
    L->len++;
    return 0;
  }
}

int insetRight(Tdata x, TListDe *L){
  Tnode *aux =(Tnode*)malloc(sizeof(Tnode));
  if (aux == NULL)//falha na alocação
    return 1;//sinaliza com erro, deixando a lista original intacta 
  else{
    aux->info = x;        //atribui x para a informação
    aux->next = NULL;
    aux->prev = L->last;
    if(L->first == NULL)
      L->first = L->last = aux;
    else{  
    L->last->next = aux;
    L->last = aux;

    }
    L->len++;    
    return 0;
  }
}

//main.c///////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>
#include "ListDE.h"

int main(){
  
TListDe L;
int erro = 0;
  
initList(&L);
  
  for (int i=0; i<5; i++){
    erro = insertLeft(i, &L);
    if(erro){
      printf("memoria insulficiente");
    }
  printList(L, false);
  puts("\n");
  }
  
  for (int i=0; i<5; i++){
    erro = insertRight(i, &L);
    if(erro){
      printf("memoria insulficiente");
    }
  printList(L, false);
  puts("\n");
  }


  deleteList(&L);
  printList(L, false);
}
