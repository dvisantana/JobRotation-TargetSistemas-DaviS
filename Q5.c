// Questão 5
// Davi Santana

#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int i, j;
    char temp;

    printf("Informe a palavra: ");
    scanf("%s", palavra);

    j = strlen(palavra) - 1;

    for (i = 0; i < j; i++, j--) {
        temp = palavra[i];
        palavra[i] = palavra[j];
        palavra[j] = temp;
    }

    printf("Inversão: %s\n", palavra);

    return 0;
}

