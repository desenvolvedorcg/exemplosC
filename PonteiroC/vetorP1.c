#include <stdio.h>
#include <stdlib.h>

//Como usar array com ponteiros

int main(){
    int vet[5] = {1,2,3,4,5};
    int *p = vet;//o ponteiro vai apontar par a primeira posição do vetor.
    int i;
    for(i = 0; i < 5; i++){
        printf("%d\n", p[i]);//Forma de acessar os elementos do vetor.
    }

    return 0;
}