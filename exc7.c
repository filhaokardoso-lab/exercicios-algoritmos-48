#include <stdio.h>

int main() {
    char nome[50] = "Circuito Integrado";
    float tensao = 5.0;
    int lote = 1000;
    char classe = 'A';

    printf("Nome: %s, Tencao: %.1f V, Lote: %d, Classe: %c\n", nome, tensao, lote, classe);

    return 0;
}