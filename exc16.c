#include <stdio.h>

int main() {
    int segundos;
    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    int horas = segundos / 3600;
    int minutos = (segundos % 3600) / 60;
    int seg = segundos % 60;

    printf("%02d:%02d:%02d\n", horas, minutos, seg);

    return 0;
}