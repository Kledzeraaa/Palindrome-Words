#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 50

struct Pilhasestaticas{
    int valor[MAX];
    int topo;
};

typedef struct Pilhasestaticas Pilha;

void iniciarPilha(Pilha*p){
    p->topo = -1;
}

int tamanhoPilha(Pilha*p){
    return p->topo+1;
}

int pilhaCheia(Pilha*p){
    if(p->topo == MAX-1){
        return 1;
    }else{
        return 0;
    }
}

int pilhaVazia(Pilha*p){
    if(p->topo == -1){
        return 1;
    }else{
        return 0;
    }
}

void imprimirPilha(Pilha*p){
    int i;
    int aux=0;
    if(!pilhaVazia(p)){
        printf("VALORES DA PILHA:\n"); //STACK VALUES
        for(i=p->topo; i>0; i--){
            printf("Valor: %d\n", p->valor[i]);

        } 
    }else{
        printf("Pilha está vazia\n"); //Stack is empty
    }
}

void inserirValor(Pilha*p){
    if(!pilhaCheia(p)){
        int x;
        printf("Informe o valor que deseja adicionar\n"); //Enter the amount you want to add
        scanf("%d", &x);
        p->topo++;
        p->valor[p->topo] = x;
    }else{
        printf("A pilha está cheia\n"); //The stack is full
    }
}

int excluirValor(Pilha*p){
    if(!pilhaVazia(p)){
        int aux;
        aux = p->valor[p->topo];
        p->topo--;
        return aux;
    }else{
        printf("A pilha está vazia\n"); //Stack is empty
    }
}

int resetarPilha(Pilha*p){
    free(p);
    iniciarPilha(p);
}

void escolha(Pilha*p,int check){
    switch (check)
    {
    case 1:
        inserirValor(p);
        break;
    
    case 2:
        imprimirPilha(p);
        break;

    case 3:
        excluirValor(p);
        break;

    case 4:
        resetarPilha(p);
        break;
    
    default:
        break;
    }
}

void menu(Pilha*p){
    int check;
    do
    {  
        printf("----------------------------------MENU----------------------------------\n");
        printf("1. Inserir valor\n"); // Enter value
        printf("2. Listar Valores\n"); // List Values
        printf("3. Excluir Valor\n"); // Delete Value
        printf("4. Reiniciar Pilha\n"); // Restart Stack
        printf("5. Sair\n"); // Exit
        printf("Opcao: "); //Option
        scanf("%d", &check);
        printf("------------------------------------------------------------------------\n");
        if(check == 5){
            break;
        }else{
            escolha(p,check);
        }
    }while(check < 5);
}

int main(){ 
    Pilha*p1=(Pilha*)malloc(sizeof(Pilha));
    menu(p1);
    return 0;
}