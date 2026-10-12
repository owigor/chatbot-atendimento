#include <stdio.h>

int main() {
    int opcao;
    int contSuporte = 0;
    int contFinanceiro = 0;
    int contComercial = 0;
    int contAtendente = 0;
    int total = 0;

    printf("=========================================\n");
    printf("     CHATBOT DE ATENDIMENTO AO CLIENTE\n");
    printf("=========================================\n");
    printf("Este sistema foi criado para simular\n");
    printf("um atendimento virtual, permitindo que\n");
    printf("voce escolha entre os setores Suporte,\n");
    printf("Financeiro, Comercial ou falar com um\n");
    printf("atendente humano.\n");
    printf("\nOla! Seja bem-vindo(a)! Estou aqui para ajudar.\n");
    printf("=========================================\n\n");

    do {
        printf("\n=========== MENU PRINCIPAL ===========\n");
        printf("1 - Suporte\n");
        printf("2 - Financeiro\n");
        printf("3 - Comercial\n");
        printf("4 - Falar com atendente\n");
        printf("0 - Sair\n");
        printf("======================================\n");
        printf("Escolha uma opcao: ");
        
        if (scanf("%d", &opcao) != 1) {
            while (getchar() != '\n');
            printf("\nEntrada invalida! Digite apenas numeros.\n");
            printf("Se precisar de ajuda, fale com um atendente.\n");
            opcao = -1;
            continue;
        }

        switch(opcao) {
            case 1:
                printf("\n[SUPORTE] Como podemos ajudar?\n");
                printf("Aguarde um momento, um atendente respondera...\n");
                contSuporte++;
                total++;
                break;

            case 2:
                printf("\n[FINANCEIRO] Voce tem duvidas sobre pagamentos?\n");
                printf("Aguarde um momento...\n");
                contFinanceiro++;
                total++;
                break;

            case 3:
                printf("\n[COMERCIAL] Quer conhecer nossos produtos?\n");
                printf("Aguarde um momento...\n");
                contComercial++;
                total++;
                break;

            case 4:
                printf("\n[ATENDENTE] Voce sera atendido por um humano.\n");
                printf("Aguarde um momento...\n");
                contAtendente++;
                total++;
                break;

            case 0:
                printf("\nEncerrando o atendimento...\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
                printf("Se precisar de ajuda, fale com um atendente.\n");
        }

    } while(opcao != 0);

    printf("\n=========== RESUMO DO ATENDIMENTO ===========\n");
    printf("Suporte:      %d\n", contSuporte);
    printf("Financeiro:   %d\n", contFinanceiro);
    printf("Comercial:    %d\n", contComercial);
    printf("Atendente:    %d\n", contAtendente);
    printf("---------------------------------------------\n");
    printf("Total de atendimentos: %d\n", total);
    printf("=============================================\n");

    if (total == 0) {
        printf("Nenhum atendimento foi realizado.\n");
    } else if (total <= 3) {
        printf("Movimento baixo: poucos atendimentos.\n");
    } else if (total <= 6) {
        printf("Movimento moderado: demanda normal.\n");
    } else {
        printf("Movimento alto: muitos atendimentos!\n");
    }

    printf("\nObrigado por usar nosso chatbot!\n");

    return 0;
}