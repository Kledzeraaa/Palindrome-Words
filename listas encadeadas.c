#include <stdio.h>
#include <stdlib.h>

struct ponteiro
{
    int valor;
    struct ponteiro*prox;
};

typedef struct ponteiro lista;

struct lista*totiltado;

lista* criarLista(void){
    return NULL;
}

lista* insere(lista* l, int i){
    lista*novo = (lista*) malloc(sizeof(lista));
    novo->prox = l;
    novo->valor = i;
    return novo;
}

int listaVazia(lista* l){
    if(l == NULL){
        return 1;
    }else{
        return 0;
    }
}

lista* imprimirLista(lista* l){
    if(!listaVazia(l)){
        lista*aux;
        for(aux=l; aux!=NULL; aux=aux->prox){
            printf("%d\n", aux->valor);
        }
    }else{
        printf("A lista não possue nenhum valor\n");
    }
}

lista* buscarValor(lista*l, int i){
    if(!listaVazia(l)){
        lista*aux;
        int a=1;
        for(aux=l; aux!=NULL; aux=aux->prox){
            if(aux->valor == i){
                printf("Valor encontrado: %d\n", aux->valor);
                a=1;
                break;
            }else{
                a=0;
            }               
        }
    if(a=0){
         printf("Valor solicitado não existe\n");
    }
        return NULL;
    }else{
        printf("A lista não possue nenhum valor\n");
        return NULL;
    }
}

int comprimentoLista(lista* l){
    if(!listaVazia(l)){
        int i=0;
        lista*aux;
        for(aux=l; aux!=NULL; aux=aux->prox){
            i++;
        }
        printf("Compimento da Lista:%d\n", i);
    }else{
        printf("A lista não possue nenhum valor\n");
    }
}

int retornarUltimo(lista* l){
    lista*aux;
    if(!listaVazia(l)){
        for(aux=l; aux==NULL; aux=aux->prox){
        }
        printf("Ultimo valor da lista: %d\n", aux->valor);
    }
}

lista* concatenarLista(lista* l1, lista* l2){
    if(!listaVazia(l1)){
        lista*aux;
        lista* p;
        for(aux = l1; aux!=NULL; aux=aux->prox){
            p=l1;
            l1=l1->prox;
        }
           p->prox=l2;
    }else{
        printf("A lista não possue nenhum valor");
    }  
}

int main(){

    lista*l1 = criarLista();
    lista*l2 = criarLista();

    l1 = insere(l1, 5);
    l1 = insere(l1, 3);
    l2 = insere(l2, 7);
    l2 = insere(l2, 8);

    printf("Lista 01:\n");
    imprimirLista(l1);
    printf("====================================\n");
    printf("Lista 02:\n");
    imprimirLista(l2);
    printf("====================================\n");
    buscarValor(l1, 3);
    printf("====================================\n");  
    retornarUltimo(l1);
    printf("====================================\n");
    comprimentoLista(l1);
    printf("====================================\n");
    printf("Lista 01+02:\n");
    concatenarLista(l1, l2);
    imprimirLista(l1);
    printf("====================================\n");

    return 0;
}