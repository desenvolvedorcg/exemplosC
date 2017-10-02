#include <stdio.h>

int main(void){
    
    FILE *file;
    file = fopen("teste.txt", "w");
    fprintf(file, "estou escrevendo pela primeira vez");
    fclose(file);

    return 0;

}