#include <stdio.h>

float validaQuantidade(int qtdPecas , int pecas50) {
    float adicional = 0.0;

    if (qtdPecas > 50 && qtdPecas <= 80) {
        adicional = qtdPecas * 0.50;
    } else if (qtdPecas > 80) {
        adicional = (qtdPecas * 0.75)-20;
    }

    return adicional;
}

void mostraFinal(float salarioBase, float adicional) {
    printf("\nO salario final ficara : %.2f", salarioBase + adicional);
}

int main() {
    float salarioBase = 600, adicional, salarioFinal;
    int qtdPecas,pecas50, saida;

    do {
       

        printf("Digite a quantidade de peças fabricadas: ");
        scanf("%d", &qtdPecas);

        adicional = validaQuantidade(qtdPecas,pecas50);
        mostraFinal(salarioBase, adicional);

        printf("\nPróximo operário? (Sim - 1 / Não - 2): ");
        scanf("%d", &saida);

    } while (saida != 2);

    return 0;
}
