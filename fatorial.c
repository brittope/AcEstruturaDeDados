#include <stdio.h>

int main() {
    int num;
    unsigned long long fat = 1;

    printf("Digite um número positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Erro! Fatorial de número negativo não existe.");
    } else {
        for (int i = 1; i <= num; i++) {
            fat *= i;
        }
        printf("Fatorial de %d = %llu", num, fat);
    }
}