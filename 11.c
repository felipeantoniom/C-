#include <stdio.h>

int main() {
    int horaInicio, minutoInicio, horaFim, minutoFim;
    scanf("%d %d %d %d", &horaInicio, &minutoInicio, &horaFim, &minutoFim);

    int inicioEmMinutos = horaInicio * 60 + minutoInicio;
    int fimEmMinutos = horaFim * 60 + minutoFim;

    int duracaoEmMinutos;
    if (fimEmMinutos > inicioEmMinutos) {
        duracaoEmMinutos = fimEmMinutos - inicioEmMinutos;
    } else {
        duracaoEmMinutos = (24 * 60 - inicioEmMinutos) + fimEmMinutos;
    }

    int horas = duracaoEmMinutos / 60;
    int minutos = duracaoEmMinutos % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
    return 0;
}