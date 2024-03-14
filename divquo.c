#include <stdio.h>

int main() {
    int num, div, quo, rest;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Digite um divisor: ");
    scanf("%d", &div);

    while (num >= div) {
        num -= div;
        quo++;
    }
    printf("Quociente: %d\nResto: %d", quo);

    return 0;
}