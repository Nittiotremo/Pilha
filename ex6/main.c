#include <stdio.h>
#include <stdlib.h>
#define MAXIMO 20
int menu()
{
    int opcao;
    printf("1.Empilhar\n");
    printf("2.Desempilhar\n");
    printf("3.Mostrar\n");
    printf("4.Sair\n");
    printf("Sua opcao: \n");
    scanf("%d", &opcao);
    return opcao;
}

int main(void){
int pilha[MAXIMO], topo;
int opcao = menu();
switch(opcao){
case 1:
    //empílhar
break;
case 2:
    //desempilhar
break;
case 3:
    //mostrar
break;
case 4:
    printf("Adeus!\n");
break;
default:
    printf("Opcao invalida!");
}
while(opcao !=4){
return 0;
}
return 0;
}
