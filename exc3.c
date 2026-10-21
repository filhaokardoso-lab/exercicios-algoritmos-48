#include <stdio.h>

int main() {
    float latitude = -23.5505;
    float longitude = -46.6333;
    char quadrante = 'S';
    int cod_estacao = 42;

    printf("Latitude: %.4f | Longitude: %.4f | Quadrante: %c | Codigo da Estacao: %d \n", latitude, longitude, quadrante, cod_estacao);
    return 0;
}