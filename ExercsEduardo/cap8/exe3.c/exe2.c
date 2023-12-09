#include <stdio.h>

int converterParaSegundos(int horas, int minutos, int segundos) {
    int totalSegundos = 0;
    
    totalSegundos += horas * 3600; // 1 hora = 3600 segundos
    totalSegundos += minutos * 60; // 1 minuto = 60 segundos
    totalSegundos += segundos;
    
    return totalSegundos;
}

int main() {
    int horas, minutos, segundos;
    
    printf("Digite as horas: ");
    scanf("%d", &horas);
    
    printf("Digite os minutos: ");
    scanf("%d", &minutos);
    
    printf("Digite os segundos: ");
    scanf("%d", &segundos);
    
    int totalSegundos = converterParaSegundos(horas, minutos, segundos);
    
    printf("O total de segundos é: %d\n", totalSegundos);
    
    return 0;
}
