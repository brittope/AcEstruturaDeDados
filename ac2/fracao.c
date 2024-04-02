#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* fracaoString(char* origem, int tamanho) {
    if (tamanho > (int)strlen(origem)) {
        printf("Erro: o tamanho especificado é maior que o tamanho da string original.\n");
        return NULL;
    }

    char* novaString = malloc((tamanho + 1) * sizeof(char));
    strncpy(novaString, origem, tamanho);
    novaString[tamanho] = '\0';

    return novaString;
}

int main() {
    char* origem = "Hello, World!";
    int tamanho;
    printf("Digite o tamanho da nova string: ");
    scanf("%d", &tamanho);
    char* novaString = fracaoString(origem, tamanho);
    if (novaString != NULL) {
        printf("%s\n", novaString);
        free(novaString);
    }

    return 0;
}