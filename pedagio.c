#include <stdio.h>

int main() {
    int carros[7];
    int total = 0;
    int maior, menor, diaPico = 0, diaMenor = 0;
    float media;
    int i;

    printf("=========================================\n");
    printf("       SISTEMA DE PEDAGIO - SEMANA\n");
    printf("=========================================\n");
    printf("Vamos registrar os carros que passaram\n");
    printf("em cada dia da semana.\n\n");

    for (i = 0; i < 7; i++) {
        printf("Digite a quantidade de carros do dia %d: ", i + 1);
        scanf("%d", &carros[i]);
        
        if (carros[i] < 0) {
            printf("Valor invalido! Digite um numero maior ou igual a zero.\n");
            i--;
        }
    }

    maior = carros[0];
    menor = carros[0];

    for (i = 0; i < 7; i++) {
        total += carros[i];

        if (carros[i] > maior) {
            maior = carros[i];
            diaPico = i;
        }
        if (carros[i] < menor) {
            menor = carros[i];
            diaMenor = i;
        }
    }

    media = total / 7.0;

    printf("\n=========================================\n");
    printf("          RELATORIO DA SEMANA\n");
    printf("=========================================\n");
    
    for (i = 0; i < 7; i++) {
        printf("Dia %d: %d carros\n", i + 1, carros[i]);
    }

    printf("-----------------------------------------\n");
    printf("Total de carros na semana: %d\n", total);
    printf("Media diaria de carros:    %.2f\n", media);
    printf("-----------------------------------------\n");
    
    printf("\n*****************************************\n");
    printf("*  DESTAQUE: DIA DE PICO                *\n");
    printf("*  O maior movimento foi no Dia %d      *\n", diaPico + 1);
    printf("*  Com um total de %d carros          *\n", maior);
    printf("*****************************************\n\n");
    
    printf("Dia mais fraco: Dia %d com %d carros\n", diaMenor + 1, menor);
    printf("=========================================\n");
    printf("Fim do relatorio. Obrigado!\n");

    return 0;
}
