#include <stdio.h>

int main() {
    float distancia, consumo_total, consumo_medio;
    
    printf("Digite a distância percorrida (em km): ");
    scanf("%f", &distancia);
    
    printf("Digite o consumo total (em litros): ");
    scanf("%f", &consumo_total);
    
    consumo_medio = distancia / consumo_total;
    
    printf("O consumo médio é de: %3.f km/l\n", consumo_medio);
    
    return 0;
}