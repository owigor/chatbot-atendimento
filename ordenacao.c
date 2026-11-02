#include <stdio.h>

int main() {
    // Vetor de 10 posicoes com precos de supermercado
    float precos[10] = {15.50, 8.90, 22.00, 10.00, 5.75, 30.20, 12.40, 18.00, 9.99, 25.50};
    float temp;
    int i, j;

    // 1. Exibindo os dados originais
    printf("=========================================\n");
    printf("     PRECOS ORIGINAIS (DESORDENADOS)\n");
    printf("=========================================\n");
    for (i = 0; i < 10; i++) {
        printf("Produto %d: R$ %.2f\n", i + 1, precos[i]);
    }

    // 2. Ordenacao CRESCENTE com Bubble Sort
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (precos[j] > precos[j + 1]) {
                temp = precos[j];
                precos[j] = precos[j + 1];
                precos[j + 1] = temp;
            }
        }
    }

    // Exibindo os dados em ordem crescente
    printf("\n=========================================\n");
    printf("     PRECOS EM ORDEM CRESCENTE\n");
    printf("=========================================\n");
    for (i = 0; i < 10; i++) {
        printf("Produto %d: R$ %.2f\n", i + 1, precos[i]);
    }

    // 3. Ordenacao DECRESCENTE com Bubble Sort
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (precos[j] < precos[j + 1]) { // O sinal mudou aqui!
                temp = precos[j];
                precos[j] = precos[j + 1];
                precos[j + 1] = temp;
            }
        }
    }

    // Exibindo os dados em ordem decrescente
    printf("\n=========================================\n");
    printf("     PRECOS EM ORDEM DECRESCENTE\n");
    printf("=========================================\n");
    for (i = 0; i < 10; i++) {
        printf("Produto %d: R$ %.2f\n", i + 1, precos[i]);
    }

    printf("=========================================\n");
    printf("Fim da ordenacao. Obrigado!\n");

    return 0;
}
