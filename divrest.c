#include <stdio.h>

int main() {
    int num, div, rest;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Digite um divisor: ");
    scanf("%d", &div);

    while (num >= div) {
        num -= div;
        rest++;
    }
    printf("Divisão: %d\nResto: %d", rest, num);

    return 0;
}
