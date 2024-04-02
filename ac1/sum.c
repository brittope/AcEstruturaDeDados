#include <stdio.h>

int suc(int n) {
    return n + 1;
}

int pred(int n) {
    return n - 1;
}

int sum(int num1, int num2) {
    if (num2 != 0)
        return sum(suc(num1), pred(num2));
    else
        return num1;
}

int main() {
    int num1, num2, result;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    result = sum(num1, num2);
    printf("Sum = %d\n", result);

    return 0;
}