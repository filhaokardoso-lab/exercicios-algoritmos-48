#include <stdio.h>

int main() {
    float distancia, combustivel, preco_combustivel;
    printf("Digite a distância percorrida (km): ");
    scanf("%f", &distancia);
    printf("Digite o combustível consumido (litros): ");
    scanf("%f", &combustivel);
    printf("Digite o preço do litro de combustível: ");
    scanf("%f", &preco_combustivel);

    float rendimento = distancia / combustivel;
    float custo_por_km = (combustivel * preco_combustivel) / distancia;

    printf("Rendimento: %.2f km/l, Custo por km: R$ %.2f\n", rendimento, custo_por_km);

    return 0;
}