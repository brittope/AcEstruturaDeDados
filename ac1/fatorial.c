#include <stdio.h>

unsigned long long factorial(int num) {
    if (num == 0)
        return 1;
    else
        return num * factorial(num - 1);
}

int main() {
    int num;
    unsigned long long fat;

    printf("Digite um número positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Erro! Fatorial de número negativo não existe.");
    } else {
        fat = factorial(num);
        printf("Fatorial de %d = %llu", num, fat);
    }

    return 0;
}