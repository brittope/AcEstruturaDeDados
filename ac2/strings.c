#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concatena(char* str1, char* str2) {
    char* res = malloc(strlen(str1) + strlen(str2) + 1);
    char* ptr = res;

    while (*str1 != '\0') {
        *ptr++ = *str1++;
    }

    while (*str2 != '\0') {
        *ptr++ = *str2++;
    }

    *ptr = '\0';

    return res;
}

int main() {
    char str1[100];
    char str2[100];
    printf("Digite a primeira string: ");
    scanf("%s", str1);
    printf("Digite a segunda string: ");
    scanf("%s", str2);
    char* res = concatena(str1, str2);
    printf("%s\n", res);
    free(res);

    return 0;
}