#include <stdlib.h>
#include <stdio.h>

struct cadastro{
    char nome[30], endereco[30];
    int idade;
};

int main(){
    FILE *arq;
    arq = fopen("struct.txt", "wb");
    if(arq == NULL){
        printf("Erro na abertura\n");
        exit(1);
    }

    struct cadastro cad = {"Adre", "Rua", 31};
    fwrite(&cad, sizeof(struct cadastro), 1, arq);
    fclose(arq);
    return 0;

}