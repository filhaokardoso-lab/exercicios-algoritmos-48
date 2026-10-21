#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    float peso;
    char genero;

    printf("Digite seu primeiro nome: ");
    scanf("%49s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite seu genero (M/F): ");
    scanf(" %c", &genero);

    printf("Nome: %s, Idade: %d, Peso: %.2f kg, Genero: %c\n", nome, idade, peso, genero);

    return 0;
}