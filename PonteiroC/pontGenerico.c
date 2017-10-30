#include <stdlib.h>
#include <stdio.h>

int main(){

    //Como trabalhar com ponteiros genericos
    //É possível alocar endereço de qualquer tipo em um ponteiros generico.
    void *pp;
    int *p1, p2 = 10;
    p1 =  &p2;
    pp = &p2; //Alocando um endereço de int em um ponteiro generico

    printf("Endereço em pp: %p \n", pp);

    pp = &p1;//alocando o endereço de int * ou endereço de p1
    printf("Endereço em pp: %p \n", pp);
    printf("Edereço de p2: %p \n", &p2);

    pp = p1; //Endereço de int ou endereço que p1 aponta
    printf("Endereço em pp: %p \n", pp);




    return 0;
}