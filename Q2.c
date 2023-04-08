// Questão 2
// Davi Santana

#include <stdio.h>
#include <stdbool.h>

//Função para "criar" a sequencia ate o numero informado
void fibonacci(int n, int *fib, int *size) {
    int a = 0, b = 1;
    *size = 0;
    while (b <= n) {
        fib[*size] = b;
        (*size)++;
        int temp = b;
        b += a;
        a = temp;
    }
}

//Função para comparar se o numero informado está presente na sequencia
bool comparar(int size, int *fib, int n){
    for (int i = 0; i < size; i++) {
        if (fib[i] == n) {
            return true;
            break;
        }
    }
    return false;
}

int main() {
    int n;
    printf("Informe o número: ");
    scanf("%d", &n);
    
    int fib[100], size = 0;
    fibonacci(n, fib, &size);
    
    bool teste = comparar(size,fib,n);
    
    if (teste) {
        printf("O número %d pertence  \nSequência de Fibonacci: ", n);
        for (int i = 0; i < size; i++) {
            printf("%d ", fib[i]);
        }
        printf("\n");
    } else {
        printf("O número %d NÃO pertence \nSequência de Fibonacci: ", n);
        for (int i = 0; i < size; i++) {
            printf("%d ", fib[i]);
        }
        printf("\n");
    }
    
    return 0;
}


