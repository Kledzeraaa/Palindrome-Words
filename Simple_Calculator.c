#include <stdio.h>
#include <stdlib.h>

//Esse códgio trás como problema a criação de uma calculadora simples de apenas 2 setenças | This codingback brings as a problem the creation of a simple calculator of only 2 sevens

float equacaomatematica(float x, float  y, char aux){
    switch (aux)
    {
    case '+'://soma | sum 
        return printf("%2.f\n",x+y);
        break;

    case '-'://subtração | subtraction 
        return printf("%2.f\n",x-y);
        break;

    case '*'://multiplicação | multiplication
        return printf("%2.f\n",x*y);
        break;

    case 'x'://multiplicação2 | multiplication2
        return printf("%2.f\n",x*y);
        break;

    case '/'://divisão | division
        return printf("%2.f\n",x/y);
        break;
    }
}


int main(){
    float x,y;
    char aux;
    int check = 1;
    do{

    printf("Deseja fazer uma conta?\n");
    printf("1.Sim\n2.Nao\n");//Resposta == 1 ou 2 | Answer == 1 or 2
    scanf("%d",&check);

    if(check == 1)
    {

    printf("|=============================================|\n");
    printf("|                  CALCULADORA                |\n"); // == calculator
    printf("|---------------------------------------------|\n");
    printf("|       |    1   ||    2   ||    3   |        |\n");
    printf("|---------------------------------------------|\n");
    printf("|       |    4   ||    5   ||    6   |        |\n");
    printf("|---------------------------------------------|\n");
    printf("|       |    7   ||    8   ||    9   |        |\n");
    printf("|---------------------------------------------|\n");
    printf("|       |    -   ||    0   ||    +   |        |\n");
    printf("|---------------------------------------------|\n");
    printf("|       |    /   ||    *   ||    =   |        |\n");
    printf("|---------------------------------------------|\n");
    printf("|=============================================|\n");
    printf("Digite a conta matemática: "); // == Enter the math account
    scanf("%f %c %f", &x, &aux,&y);

    printf("\n");

    equacaomatematica(x,y,aux);

    }else{
        check = 0;
    }
    }while(check != 0);

    return 0;
}