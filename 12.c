#include <stdio.h>

int main() {
    float salario;
    scanf("%f", &salario);

    float reajuste;
    int percentual;

    if (salario <= 400.00) {
        percentual = 15;
    } else if (salario <= 800.00) {
        percentual = 12;
    } else if (salario <= 1200.00) {
        percentual = 10;
    } else if (salario <= 2000.00) {
        percentual = 7;
    } else {
        percentual = 4;
    }

    reajuste = salario * percentual / 100;
    float novo_salario = salario + reajuste;

    printf("Novo salario: %.2f\n", novo_salario);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %d %%\n", percentual);

    return 0;
}