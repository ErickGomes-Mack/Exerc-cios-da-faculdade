#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    printf("Informe o troco: ");
    scanf("%d", &valor);

    troco(valor);

    return 0;
}

void troco(int valor)
{
    enum
    {
        n100,
        n50,
        n25,
        n10,
        n1
    };

    int num_de_notas[5];

    num_de_notas[n100] = (int)valor / 100;
    valor = valor - (num_de_notas[n100] * 100);

    num_de_notas[n50] = (int)valor / 50;
    valor = valor - (num_de_notas[n50] * 50);

    num_de_notas[n25] = (int)valor / 25;
    valor = valor - (num_de_notas[n25] * 25);

    num_de_notas[n10] = (int)valor / 10;
    valor = valor - (num_de_notas[n10] * 10);

    num_de_notas[n1] = (int)valor / 1;
    valor = valor - (num_de_notas[n10] * 1);

    printf("\nNotas de 100: ");
    printf("%d", num_de_notas[n100]);

    printf("\nNotas de 50: ");
    printf("%d", num_de_notas[n50]);

    printf("\nNotas de 25: ");
    printf("%d", num_de_notas[n25]);

    printf("\nNotas de 10: ");
    printf("%d", num_de_notas[n10]);

    printf("\nNotas de 1: ");
    printf("%d", num_de_notas[n1]);
}
