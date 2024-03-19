#include <stdio.h>

void div_and_rest(int num, int div, int *rest) {
    if (num < div) {
        *rest = num;
    } else {
        (*rest)++;
        div_and_rest(num - div, div, rest);
    }
}

int main() {
    int num, div, rest = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Digite um divisor: ");
    scanf("%d", &div);

    div_and_rest(num, div, &rest);
    printf("Divisão: %d\nResto: %d", rest, num - rest * div);

    return 0;
}