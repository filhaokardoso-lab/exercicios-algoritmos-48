#include <stdio.h>

int main() {
    float n1, n2, n3;
    printf("Digite as tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    float media = ((n1 * 2.0) + (n2 * 3.0) + (n3 * 5.0)) / 10.0;

    printf("Media ponderada: %.2f\n", media);

    return 0;
}