#include <stdio.h>

int main() {
    float celsius;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    float kelvin = celsius + 273.15;

    printf("Fahrenheit: %.2f, Kelvin: %.2f\n", fahrenheit, kelvin);

    return 0;
}