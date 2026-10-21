#include <stdio.h>

int agencia = 1234567;
int conta = 7654321;
float valor = 190.45;
char tipo = 'p';

int main() {
    printf("Agencia: %d\n", agencia);
    printf("Conta: %d\n", conta);
    printf("Valor: %.2f\n", valor);
    printf("Tipo: %c (Presencial)\n", tipo);

    return 0;
}