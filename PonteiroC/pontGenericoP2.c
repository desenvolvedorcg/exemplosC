#include <stdio.h>
#include <stdlib.h>

int main(){

    /*Antes de acessar o conteúdo é preciso converter o ponteiro
    genérico para o tipo de ponteiro com o qual se deseja 
    trabalhar */

    void * pp; //Ponteiro generico
    int p2 = 10;
    pp = &p2; //Endereço int

    //printf("Conteudo em pp: %d /n", *pp); //ERRO
    /*O comando acima vai dar erro porque pra eu imprimir o
    conteudo de um ponteiro generico, primeiro eu preciso dizer
    qual o tipo do ponteiro generico que eu quero imprimir.*/
    
    //O correto a fazer é como está descrito abaixo.
    printf("Conteúdo: %d \n", * (int *) pp);

    return 0;
}