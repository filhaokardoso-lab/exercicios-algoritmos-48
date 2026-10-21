#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois numeros inteiros positivos: ");
    scanf("%d %d", &a, &b);

    printf("Soma: %d, Subtracao: %d, Multiplicacao: %d, Divisao inteira: %d, Resto: %d\n", a+b, a-b, a*b, a/b, a%b);

    return 0;
}