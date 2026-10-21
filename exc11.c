#include <stdio.h>

int main() {
    int horas;
    float valor_hora;
    printf("Digite o número de horas trabalhadas: ");
    scanf("%d", &horas);
    printf("Digite o valor por hora: ");
    scanf("%f", &valor_hora);

    float bruto = horas * valor_hora;
    float previdenciario = bruto * 0.11;
    float ir = bruto * 0.05;
    float liquido = bruto - previdenciario - ir;

    printf("Bruto: R$ %.2f, Previdenciario: R$ %.2f, IR: R$ %.2f, Liquido: R$ %.2f\n", bruto, previdenciario, ir, liquido);

    return 0;
}
