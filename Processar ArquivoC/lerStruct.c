#include <stdlib.h>
#include <stdio.h>

struct cadastro{
    char nome[30], endereco[30];
    int idade;
};

int main(){
    FILE *arq;
    arq = fopen("struct.txt", "rb");
    if(arq == NULL){
        printf("Não consegue abrir o arquivo\n");
    }

    struct cadastro cad2;
    fread(&cad2, sizeof(struct cadastro), 1, arq);
    printf("nome do cliente %s\n", cad2.endereco);
    fclose(arq);
    return 0;

}