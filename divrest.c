#include <stdio.h>

#include <stdio.h>

void div_and_rest(int num, int div, int *quo, int *rest) {
    if (num < div) {
        *rest = num;
    } else {
        (*quo)++;
        div_and_rest(num - div, div, quo, rest);
    }
}

int main() {
    int num, div, quo = 0, rest = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Digite um divisor: ");
    scanf("%d", &div);

    div_and_rest(num, div, &quo, &rest);
    printf("Divisão: %d\nResto: %d", quo, rest);

    return 0;
}