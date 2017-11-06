#include <stdio.h>
#include <stdlib.h>

int main(){

    /*Ponteiros que apontam para outros ponteiros*/
    int x = 10;
    int *p = &x;
    int **p2 = &p;

    //Endereço de p2
    printf("p2: %p\n", p2);//&p
    printf("Conferir %p\n", &p);
    //Conteúdo do endereço
    printf("*p2: %p\n", *p2);//&x
    //Conteudo do endereço do endereço
    printf("**p2: %d\n", **p2); //x

    return 0;
}