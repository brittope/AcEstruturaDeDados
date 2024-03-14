#include <stdio.h>

int suc(int n) {
    return n + 1;
}

int pred(int n) {
    return n - 1;
}

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    while (num2 != 0) {
        num1 = suc(num1);
        num2 = pred(num2);
    }

    printf("Sum = %d\n", num1);

    return 0;
}