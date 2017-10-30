#include <stdio.h>
#include <stdlib.h>

int main(){

    int vet[5] = {1,2,3,4,5};

    /*A notação de colchetes é apenas uma simplificação da 
    aritmética de ponteiros com acesso ao conteúdo.*/

    //Duas formas de imprimir um vetor
    printf("vet[2] = %d\n", vet[2]);
    printf("vet[2] = %d\n", *(vet + 2));

    return 0;
}