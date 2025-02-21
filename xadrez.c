#include <stdio.h>
int main (){

    //Código para a movimentação Torre usando For.
    printf("*Movimento da Torre**\n");
    for( int i = 0; i < 5; i++){
    printf("direita\n");
    }
    printf("\n");


    //Código para a movimentação Bispo While.
    printf("**Movimento do Bispo**\n");
    int i = 0;

    while (i < 5)
    {
        printf("Direita-Cima\n");
        i++;
    }
    printf("\n");


    //Código para a movimentação Rainha usando Do While.
    printf("**Movimento da Rainha**\n");
    i = 0;

    do
    {
        printf("Esquerda\n");
        i++;
    } while (i < 8);

    return 0;
    //Nesta atividade eu decidi usar ""printf("\n")"" para poder da espaço entre os codigos e ficar mais organizado!
}
    