#include <stdio.h>

void divquo(int num, int div, int *quo) {
    if (num < div) {
        return;
    } else {
        (*quo)++;
        divquo(num - div, div, quo);
    }
}

int main() {
    int num, div, quo = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Digite um divisor: ");
    scanf("%d", &div);

    divquo(num, div, &quo);
    printf("Quociente: %d\nResto: %d", quo, num - quo * div);

    return 0;