#include <stdio.h>

#include <stdio.h>

int multiply(int num1, int num2) {
    if (num2 != 0)
        return (num1 + multiply(num1, num2 - 1));
    else
        return 0;
}

int main() {
    int num1, num2, prod;

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite outro número: ");
    scanf("%d", &num2);

    prod = multiply(num1, num2);
    printf("Produto: %d", prod);

    return 0;
}