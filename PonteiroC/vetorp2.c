#include <stdio.h>
#include <stdlib.h>

int main(){
    /*O nome do array é apenas um 
    ponteiro que aponta para o 
    primeiro elemento do array. */


    // *(p+2) = p[2]
    // *(p+7) = p[7]
    int vet[5] = {1,2,3,4,5};
    int *p = vet;
    int i;
    for(i = 0; i < 5; i++){
        printf("%d\n", *(p+i));
    }

    return 0;
}