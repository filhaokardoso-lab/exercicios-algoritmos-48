#include <stdio.h>

int main(){
    int requisicao = 15420;
    float consumo_ram = 73.5;
    char estado_operacional = 'A';
    char protocolo[10] = "TCP";
    
    printf("Servidor [Protocolo: %s] | Requisições: [%d] | RAM [%.1f%%] | Estado:[%c]", protocolo, requisicao, consumo_ram, estado_operacional);
    return 0;

}