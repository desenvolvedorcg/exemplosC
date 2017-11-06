#include <stdio.h>
#include <stdlib.h>

int main(){

    /*Cada elemento do array pode apontar para um endereço de memória, seja ele de uma variável ou de um array*/

    int * pvet[2]; 
    int x = 10, y[2] = {20, 30};
    pvet[0] = &x;
    pvet[1] = y;

    return 0;
}