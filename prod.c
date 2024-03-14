#include <stdio.h>

int main() {
    int num1, num2, prod = 0;

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite outro número: ");
    scanf("%d", &num2);

    for (int i = 0; i < num2; i++) {
        prod += num1;
    }
    printf("Produto: %d", prod);

    return 0;
}