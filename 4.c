#include <stdio.h>

int main() {
    int segundos_total;
    scanf("%d", &segundos_total);

    int horas = segundos_total / 3600;
    int resto = segundos_total % 3600;
    int minutos = resto / 60;
    int segundos = resto % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}