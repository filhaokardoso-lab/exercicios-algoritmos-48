#include <stdio.h>

int main() {
    float base, altura;
    printf("Digite a base do retangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    float area = base * altura;
    float perimetro = 2 * (base + altura);

    printf("Area: %.2f m2, Perimetro: %.2f m\n", area, perimetro);

    return 0;
}