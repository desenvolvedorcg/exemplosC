#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE *file;
    file = fopen("string.txt", "r");

    if(file == NULL){
        printf("não foi possível ler o arquivo");
        exit(0);
    }

    char frase[200];

    while(fgets(frase, 200, file) != NULL){
        printf("%s", frase);
    }

    fclose(file);

    printf("\n");
    

    return 0;
}