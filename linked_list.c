#include <stdio.h>
#include <stdlib.h>

struct ponteiro
{
    int valor;
    struct ponteiro*prox;
};

typedef struct ponteiro lista;

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

void imprimirLista(lista* l){
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

lista* juntarLista(lista *l, lista* l2){
    lista*aux;
    lista*aux2;
    if(!listaVazia(l) && !listaVazia(l2)){
        lista*aux;
        
    } 
}

lista* concatenarListas(lista *l, lista* outra){
    lista *aux = l;
    if(!listaVazia(l)){
        while(aux->prox != NULL){
        aux = aux->prox;
    }
        aux->prox = outra; 
        return l;
    }else{
        return outra;
    } 
}

lista* apagarLista(lista* l){
    if(!listaVazia(l)){
        lista*proxno;
        lista*atualno;

        atualno = l->prox;
        while(atualno!=NULL){
            proxno=atualno->prox;
            free(atualno);
            atualno=proxno;
        }
        free(l);
        l = criarLista();
        return l;
    }else{
        printf("A lista esta vazia\n");
    }
}

int main(){

    lista*l1 = criarLista();
    lista*l2 = criarLista();

    l1 = insere(l1, 5);
    l1 = insere(l1, 3);
    l1 = insere(l1, 9);
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
    concatenarListas(l1, l2);
    imprimirLista(l1);
    printf("====================================\n");
    l2 = apagarLista(l2);
    imprimirLista(l2);
    printf("====================================\n");
    return 0;
}