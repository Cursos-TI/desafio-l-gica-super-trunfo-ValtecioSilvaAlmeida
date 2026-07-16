#include <stdio.h>
#include <string.h>
// #include <windows.h> // Resolução de caracteres especiais no terminal

int main(void) {
    // SetConsoleOutputCP(CP_UTF8); // Resolução de caracteres especiais no terminal
    // SetConsoleCP(CP_UTF8); // Resolução de caracteres especiais no terminal

    printf("------------------------------------");
    printf("\n|           SUPER TRUNFO           |\n");
    printf("------------------------------------\n");

    // Dados da carta 1
    char estado_carta_1;
    char codigo_carta_1[4];
    char cidade_carta_1[31];
    int populacao_carta_1;
    float area_km_carta_1;
    float pib_carta_1;
    int qtd_pontos_turisticos_carta_1;
    float densidade_populacional_carta_1;
    float pib_per_capita_carta_1;
    long double super_poder_carta_1;
    float inverso_densidade_carta_1;

    // Dados da carta 2A
    char estado_carta_2;
    char codigo_carta_2[4];
    char cidade_carta_2[31];
    int populacao_carta_2;
    float area_km_carta_2;
    float pib_carta_2;
    int qtd_pontos_turisticos_carta_2;
    float densidade_populacional_carta_2;
    float pib_per_capita_carta_2;
    long double super_poder_carta_2;
    float inverso_densidade_carta_2;


    // Captura de dados da carta 1
    printf("Insira os dados da carta 1\n\n");
    printf("- Estado (uma letra de \"A\" a \"H\": ");
    scanf(" %c", &estado_carta_1);
    printf("- Código (A letra do estado seguida de um número de 01 a 04): ");
    scanf("%3s", codigo_carta_1);
    getchar(); // consome o '\n' deixado pelo scanf
    printf("- Cidade (até 30 caracteres): ");
    fgets(cidade_carta_1, sizeof(cidade_carta_1), stdin); // Entrada de dados que aceita strings com mais segurança
    cidade_carta_1[strcspn(cidade_carta_1, "\n")] = '\0'; // Remove o \n que o fgets insere no final do imput
    printf("- População (Quantitativo): ");
    scanf("%d", &populacao_carta_1);
    getchar(); // consome o '\n' deixado pelo scanf
    printf("- Área (km²): ");
    scanf("%f", &area_km_carta_1);
    getchar(); // consome o '\n' deixado pelo scanf
    printf("- PIB (R$): ");
    scanf("%f", &pib_carta_1);
    getchar(); // consome o '\n' deixado pelo scanf
    printf("- Número de pontos turísticos: ");
    scanf("%d", &qtd_pontos_turisticos_carta_1);
    getchar(); // consome o '\n' deixado pelo scanf

    densidade_populacional_carta_1 = (float) populacao_carta_1 / area_km_carta_1;
    pib_per_capita_carta_1 =  pib_carta_1 / (float) populacao_carta_1;

    // Captura de dados da carta 2
    printf("\n Insira os dados da carta 2\n\n");
    printf("- Estado (uma letra de \"A\" a \"H\": ");
    scanf(" %c", &estado_carta_2);
    printf("- Código (A letra do estado seguida de um número de 01 a 04): ");
    scanf("%3s", codigo_carta_2);
    getchar(); // consome o '\n' deixado pelo scanf
    printf("- Cidade (até 30 caracteres): ");
    fgets(cidade_carta_2, sizeof(cidade_carta_2), stdin); // Entrada de dados que aceita strings com mais segurança
    cidade_carta_2[strcspn(cidade_carta_2, "\n")] = '\0'; // Remove o \0 que o fgets insere no final do imput
    printf("- População (Quantitativo): ");
    scanf("%d", &populacao_carta_2);
    getchar(); // consome o '\n' deixado pelo scanf
    printf("- Área (km²): ");
    scanf("%f", &area_km_carta_2);
    getchar(); // consome o '\n' deixado pelo scanf
    printf("- PIB (R$): ");
    scanf("%f", &pib_carta_2);
    getchar(); // consome o '\n' deixado pelo scanf
    printf("- Número de pontos turísticos: ");
    scanf("%d", &qtd_pontos_turisticos_carta_2);
    getchar(); // consome o '\n' deixado pelo scanf

    densidade_populacional_carta_2 = (float) populacao_carta_2 / area_km_carta_2;
    pib_per_capita_carta_2 =  pib_carta_2 / (float) populacao_carta_2;

    if (densidade_populacional_carta_1 > 0.0f) {
        inverso_densidade_carta_1 = 1.0f / densidade_populacional_carta_1;
    } else {
        inverso_densidade_carta_1 = 0.0f;
    }

    super_poder_carta_1 = (float) populacao_carta_1 + area_km_carta_1 + pib_carta_1 + (float) qtd_pontos_turisticos_carta_1 + inverso_densidade_carta_1;

    inverso_densidade_carta_2 = (densidade_populacional_carta_2 > 0.0f) ? 1.0f / densidade_populacional_carta_2 : 0.0f;
    super_poder_carta_2 = (float) populacao_carta_2 + area_km_carta_2 + pib_carta_2 + (float) qtd_pontos_turisticos_carta_2 + inverso_densidade_carta_2;


    printf("------------------------------------ \n\n");

    printf("Escolha dois comparador: \n");
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Pontos Turísticos \n");
    printf("5 - Densidade Populacional \n");
    printf("6 - PIB per Capita \n");
    printf("7 - Super Poder \n");
    getchar(); // consome o '\n' deixado pelo scanf
    int escolha_1;
    int escolha_2;
    printf("> ");
    scanf("%d", &escolha_1);
    printf("> ");
    scanf("%d", &escolha_2);

    if (escolha_1 == escolha_2) {
        printf("Escolha dois comparador diferentes: \n");
        printf("REINICIE O PROGRAMA ");
    } else {
        printf("RESULTADO:\n\n");

        long double soma_carta_1 = 0;
        long double soma_carta_2 = 0;

        if ((escolha_1 == 1 && escolha_2 == 2) || (escolha_1 == 2 && escolha_2 == 1)) {

            printf("Estados: %c | %c\n", estado_carta_1, estado_carta_2);
            printf("Atributo escolhido: População | Área\n");
            printf("População: %d | %d\n", populacao_carta_1, populacao_carta_2);
            printf("Área: %.2f | %.2f\n", area_km_carta_1, area_km_carta_2);
            soma_carta_1 = (float) populacao_carta_1 + area_km_carta_1;
            soma_carta_2 = (float) populacao_carta_2 + area_km_carta_2;
            printf("Soma dos atributos: %.2Lf | %.2Lf\n", soma_carta_1, soma_carta_2);
            printf("Vencedor: %s", (soma_carta_1 > soma_carta_2 ? "Carta 1" : (soma_carta_2 < soma_carta_1) ? "Carta 2" : "Empate"));

        } else if ((escolha_1 == 1 && escolha_2 == 3) || (escolha_1 == 3 && escolha_2 == 1)) {

            printf("Estados: %c | %c\n", estado_carta_1, estado_carta_2);
            printf("Atributo escolhido: População | PIB\n");
            printf("População: %d | %d\n", populacao_carta_1, populacao_carta_2);
            printf("PIB: %.2f | %.2f\n", pib_carta_1, pib_carta_2);
            soma_carta_1 = (float) populacao_carta_1 + pib_carta_1;
            soma_carta_2 = (float) populacao_carta_2 + pib_carta_2;
            printf("Soma dos atributos: %.2Lf | %.2Lf\n", soma_carta_1, soma_carta_2);
            printf("Vencedor: %s", (soma_carta_1 > soma_carta_2 ? "Carta 1" : (soma_carta_2 < soma_carta_1) ? "Carta 2" : "Empate"));

        } else if ((escolha_1 == 1 && escolha_2 == 4) || (escolha_1 == 4 && escolha_2 == 1)) {

            printf("Estados: %c | %c\n", estado_carta_1, estado_carta_2);
            printf("Atributo escolhido: População | Pontos Turísticos\n");
            printf("População: %d | %d\n", populacao_carta_1, populacao_carta_2);
            printf("Pontos Turísticos: %d | %d\n", qtd_pontos_turisticos_carta_1, qtd_pontos_turisticos_carta_2);
            soma_carta_1 = (float) populacao_carta_1 + (float) qtd_pontos_turisticos_carta_1;
            soma_carta_2 = (float) populacao_carta_2 + (float) qtd_pontos_turisticos_carta_2;
            printf("Soma dos atributos: %.2Lf | %.2Lf\n", soma_carta_1, soma_carta_2);
            printf("Vencedor: %s", (soma_carta_1 > soma_carta_2 ? "Carta 1" : (soma_carta_2 < soma_carta_1) ? "Carta 2" : "Empate"));

        } else if ((escolha_1 == 1 && escolha_2 == 5) || (escolha_1 == 5 && escolha_2 == 1)) {

            printf("Estados: %c | %c\n", estado_carta_1, estado_carta_2);
            printf("Atributo escolhido: População | Densidade Populacional\n");
            printf("População: %d | %d\n", populacao_carta_1, populacao_carta_2);
            printf("Densidade Populacional: %.2f | %.2f\n", densidade_populacional_carta_1, densidade_populacional_carta_2);
            soma_carta_1 = (float) populacao_carta_1 + densidade_populacional_carta_1;
            soma_carta_2 = (float) populacao_carta_2 + densidade_populacional_carta_2;
            printf("Soma dos atributos: %.2Lf | %.2Lf\n", soma_carta_1, soma_carta_2);
            printf("Vencedor: %s", (soma_carta_1 > soma_carta_2 ? "Carta 1" : (soma_carta_2 < soma_carta_1) ? "Carta 2" : "Empate"));

        } else if ((escolha_1 == 1 && escolha_2 == 6) || (escolha_1 == 6 && escolha_2 == 1)) {

            printf("Estados: %c | %c\n", estado_carta_1, estado_carta_2);
            printf("Atributo escolhido: População | PIB per Capta\n");
            printf("População: %d | %d\n", populacao_carta_1, populacao_carta_2);
            printf("PIB per Capta: %.2f | %.2f\n", pib_per_capita_carta_1, pib_per_capita_carta_2);
            soma_carta_1 = (float) populacao_carta_1 + pib_per_capita_carta_1;
            soma_carta_2 = (float) populacao_carta_2 + pib_per_capita_carta_2;
            printf("Soma dos atributos: %.2Lf | %.2Lf\n", soma_carta_1, soma_carta_2);
            printf("Vencedor: %s", (soma_carta_1 > soma_carta_2 ? "Carta 1" : (soma_carta_2 < soma_carta_1) ? "Carta 2" : "Empate"));

        } else if ((escolha_1 == 1 && escolha_2 == 7) || (escolha_1 == 7 && escolha_2 == 1)) {

            printf("Estados: %c | %c\n", estado_carta_1, estado_carta_2);
            printf("Atributo escolhido: População | Super Poder\n");
            printf("População: %d | %d\n", populacao_carta_1, populacao_carta_2);
            printf("Super Poder: %.2Lf | %.2Lf\n", super_poder_carta_1, super_poder_carta_2);
            soma_carta_1 = (float) populacao_carta_1 + super_poder_carta_1;
            soma_carta_2 = (float) populacao_carta_2 + super_poder_carta_2;
            printf("Soma dos atributos: %.2Lf | %.2Lf\n", soma_carta_1, soma_carta_2);
            printf("Vencedor: %s", (soma_carta_1 > soma_carta_2 ? "Carta 1" : (soma_carta_2 < soma_carta_1) ? "Carta 2" : "Empate"));

        } else if ((escolha_1 == 2 && escolha_2 == 3) || (escolha_1 == 3 && escolha_2 == 1)) {

            printf("Estados: %c | %c\n", estado_carta_1, estado_carta_2);
            printf("Atributo escolhido: Área | PIB\n");
            printf("Área: %.2f | %.2f\n", area_km_carta_1, area_km_carta_2);
            printf("PIB: %.2f | %.2f\n", pib_carta_1, pib_carta_2);
            soma_carta_1 = area_km_carta_1 + pib_carta_1;
            soma_carta_2 = area_km_carta_2 + pib_carta_2;
            printf("Soma dos atributos: %.2Lf | %.2Lf\n", soma_carta_1, soma_carta_2);
            printf("Vencedor: %s", (soma_carta_1 > soma_carta_2 ? "Carta 1" : (soma_carta_2 < soma_carta_1) ? "Carta 2" : "Empate"));

        } else if ((escolha_1 == 2 && escolha_2 == 4) || (escolha_1 == 4 && escolha_2 == 2)) {

            printf("Estados: %c | %c\n", estado_carta_1, estado_carta_2);
            printf("Atributo escolhido: Área | Pontos Turísticos\n");
            printf("Área: %.2f | %.2f\n", area_km_carta_1, area_km_carta_2);
            printf("Pontos Turísticos: %d | %d\n", qtd_pontos_turisticos_carta_1, qtd_pontos_turisticos_carta_2);
            soma_carta_1 = area_km_carta_1 + (float) qtd_pontos_turisticos_carta_1;
            soma_carta_2 = area_km_carta_1 + (float) qtd_pontos_turisticos_carta_2;
            printf("Soma dos atributos: %.2Lf | %.2Lf\n", soma_carta_1, soma_carta_2);
            printf("Vencedor: %s", (soma_carta_1 > soma_carta_2 ? "Carta 1" : (soma_carta_2 < soma_carta_1) ? "Carta 2" : "Empate"));

        } else if ((escolha_1 == 2 && escolha_2 == 5) || (escolha_1 == 5 && escolha_2 == 2)) {

            printf("Estados: %c | %c\n", estado_carta_1, estado_carta_2);
            printf("Atributo escolhido: Área | Densidade Populacional\n");
            printf("Área: %.2f | %.2f\n", area_km_carta_1, area_km_carta_2);
            printf("Densidade Populacional: %.2f | %.2f\n", densidade_populacional_carta_1, densidade_populacional_carta_2);
            soma_carta_1 = area_km_carta_1 + densidade_populacional_carta_1;
            soma_carta_2 = area_km_carta_2 + densidade_populacional_carta_2;
            printf("Soma dos atributos: %.2Lf | %.2Lf\n", soma_carta_1, soma_carta_2);
            printf("Vencedor: %s", (soma_carta_1 > soma_carta_2 ? "Carta 1" : (soma_carta_2 < soma_carta_1) ? "Carta 2" : "Empate"));

        } else if ((escolha_1 == 2 && escolha_2 == 6) || (escolha_1 == 6 && escolha_2 == 2)) {

            printf("Estados: %c | %c\n", estado_carta_1, estado_carta_2);
            printf("Atributo escolhido: Área | PIB per Capta\n");
            printf("Área: %.2f | %.2f\n", area_km_carta_1, area_km_carta_2);
            printf("PIB per Capta: %.2f | %.2f\n", pib_per_capita_carta_1, pib_per_capita_carta_2);
            soma_carta_1 = area_km_carta_1 + pib_per_capita_carta_1;
            soma_carta_2 = area_km_carta_2 + pib_per_capita_carta_2;
            printf("Soma dos atributos: %.2Lf | %.2Lf\n", soma_carta_1, soma_carta_2);
            printf("Vencedor: %s", (soma_carta_1 > soma_carta_2 ? "Carta 1" : (soma_carta_2 < soma_carta_1) ? "Carta 2" : "Empate"));

        } else if ((escolha_1 == 2 && escolha_2 == 7) || (escolha_1 == 7 && escolha_2 == 2)) {

            printf("Estados: %c | %c\n", estado_carta_1, estado_carta_2);
            printf("Atributo escolhido: Área | Super Poder\n");
            printf("Área: %.2f | %.2f\n", area_km_carta_1, area_km_carta_2);
            printf("Super Poder: %.2Lf | %.2Lf\n", super_poder_carta_1, super_poder_carta_2);
            soma_carta_1 = area_km_carta_1 + super_poder_carta_1;
            soma_carta_2 = area_km_carta_2 + super_poder_carta_2;
            printf("Soma dos atributos: %.2Lf | %.2Lf\n", soma_carta_1, soma_carta_2);
            printf("Vencedor: %s", (soma_carta_1 > soma_carta_2 ? "Carta 1" : (soma_carta_2 < soma_carta_1) ? "Carta 2" : "Empate"));

        } else if ((escolha_1 == 3 && escolha_2 == 4) || (escolha_1 == 3 && escolha_2 == 1)) {

            printf("Estados: %c | %c\n", estado_carta_1, estado_carta_2);
            printf("Atributo escolhido: PIB | Pontos Turísticos\n");
            printf("PIB: %.2f | %.2f\n", pib_carta_1, pib_carta_2);
            printf("Pontos Turísticos: %d | %d\n", qtd_pontos_turisticos_carta_1, qtd_pontos_turisticos_carta_2);
            soma_carta_1 = pib_carta_1 + (float) qtd_pontos_turisticos_carta_1;
            soma_carta_2 = pib_carta_2 + (float) qtd_pontos_turisticos_carta_2;
            printf("Soma dos atributos: %.2Lf | %.2Lf\n", soma_carta_1, soma_carta_2);
            printf("Vencedor: %s", (soma_carta_1 > soma_carta_2 ? "Carta 1" : (soma_carta_2 < soma_carta_1) ? "Carta 2" : "Empate"));

        } else if ((escolha_1 == 3 && escolha_2 == 5) || (escolha_1 == 5 && escolha_2 == 3)) {

            printf("Estados: %c | %c\n", estado_carta_1, estado_carta_2);
            printf("Atributo escolhido: PIB | Densidade Populacional\n");
            printf("PIB: %.2f | %.2f\n", pib_carta_1, pib_carta_2);
            printf("Densidade Populacional: %.2f | %.2f\n", densidade_populacional_carta_1, densidade_populacional_carta_2);
            soma_carta_1 = pib_carta_1 + densidade_populacional_carta_1;
            soma_carta_2 = pib_carta_2 + densidade_populacional_carta_2;
            printf("Soma dos atributos: %.2Lf | %.2Lf\n", soma_carta_1, soma_carta_2);
            printf("Vencedor: %s", (soma_carta_1 > soma_carta_2 ? "Carta 1" : (soma_carta_2 < soma_carta_1) ? "Carta 2" : "Empate"));

        } else if ((escolha_1 == 3 && escolha_2 == 6) || (escolha_1 == 6 && escolha_2 == 3)) {

            printf("Estados: %c | %c\n", estado_carta_1, estado_carta_2);
            printf("Atributo escolhido: PIB | PIB per Capta\n");
            printf("PIB: %.2f | %.2f\n", pib_carta_1, pib_carta_2);
            printf("PIB per Capta: %.2f | %.2f\n", pib_per_capita_carta_1, pib_per_capita_carta_2);
            soma_carta_1 = pib_carta_1 + pib_per_capita_carta_1;
            soma_carta_2 = pib_carta_2 + pib_per_capita_carta_2;
            printf("Soma dos atributos: %.2Lf | %.2Lf\n", soma_carta_1, soma_carta_2);
            printf("Vencedor: %s", (soma_carta_1 > soma_carta_2 ? "Carta 1" : (soma_carta_2 < soma_carta_1) ? "Carta 2" : "Empate"));

        } else if ((escolha_1 == 3 && escolha_2 == 7) || (escolha_1 == 7 && escolha_2 == 3)) {

            printf("Estados: %c | %c\n", estado_carta_1, estado_carta_2);
            printf("Atributo escolhido: PIB | Super Poder\n");
            printf("PIB: %.2f | %.2f\n", pib_carta_1, pib_carta_2);
            printf("Super Poder: %.2Lf | %.2Lf\n", super_poder_carta_1, super_poder_carta_2);
            soma_carta_1 = pib_carta_1 + super_poder_carta_1;
            soma_carta_2 = pib_carta_2 + super_poder_carta_2;
            printf("Soma dos atributos: %.2Lf | %.2Lf\n", soma_carta_1, soma_carta_2);
            printf("Vencedor: %s", (soma_carta_1 > soma_carta_2 ? "Carta 1" : (soma_carta_2 < soma_carta_1) ? "Carta 2" : "Empate"));

        } else if ((escolha_1 == 4 && escolha_2 == 5) || (escolha_1 == 5 && escolha_2 == 4)) {

            printf("Estados: %c | %c\n", estado_carta_1, estado_carta_2);
            printf("Atributo escolhido: Pontos Turísticos | Densidade Populacional\n");
            printf("Pontos Turísticos: %d | %d\n", qtd_pontos_turisticos_carta_1, qtd_pontos_turisticos_carta_2);
            printf("Densidade Populacional: %.2f | %.2f\n", densidade_populacional_carta_1, densidade_populacional_carta_2);
            soma_carta_1 = (float) qtd_pontos_turisticos_carta_1 + densidade_populacional_carta_1;
            soma_carta_2 = (float) qtd_pontos_turisticos_carta_2 + densidade_populacional_carta_2;
            printf("Soma dos atributos: %.2Lf | %.2Lf\n", soma_carta_1, soma_carta_2);
            printf("Vencedor: %s", (soma_carta_1 > soma_carta_2 ? "Carta 1" : (soma_carta_2 < soma_carta_1) ? "Carta 2" : "Empate"));

        } else if ((escolha_1 == 4 && escolha_2 == 6) || (escolha_1 == 6 && escolha_2 == 4)) {

            printf("Estados: %c | %c\n", estado_carta_1, estado_carta_2);
            printf("Atributo escolhido: Pontos Turísticos | PIB per Capta\n");
            printf("Pontos Turísticos: %d | %d\n", qtd_pontos_turisticos_carta_1, qtd_pontos_turisticos_carta_2);
            printf("PIB per Capta: %.2f | %.2f\n", pib_per_capita_carta_1, pib_per_capita_carta_2);
            soma_carta_1 = (float) qtd_pontos_turisticos_carta_1 + pib_per_capita_carta_1;
            soma_carta_2 = (float) qtd_pontos_turisticos_carta_2 + pib_per_capita_carta_2;
            printf("Soma dos atributos: %.2Lf | %.2Lf\n", soma_carta_1, soma_carta_2);
            printf("Vencedor: %s", (soma_carta_1 > soma_carta_2 ? "Carta 1" : (soma_carta_2 < soma_carta_1) ? "Carta 2" : "Empate"));

        } else if ((escolha_1 == 4 && escolha_2 == 7) || (escolha_1 == 7 && escolha_2 == 4)) {

            printf("Estados: %c | %c\n", estado_carta_1, estado_carta_2);
            printf("Atributo escolhido: Pontos Turísticos | Super Poder\n");
            printf("Pontos Turísticos: %d | %d\n", qtd_pontos_turisticos_carta_1, qtd_pontos_turisticos_carta_2);
            printf("Super Poder: %.2Lf | %.2Lf\n", super_poder_carta_1, super_poder_carta_2);
            soma_carta_1 = (float) qtd_pontos_turisticos_carta_1 + super_poder_carta_1;
            soma_carta_2 = (float) qtd_pontos_turisticos_carta_2 + super_poder_carta_2;
            printf("Soma dos atributos: %.2Lf | %.2Lf\n", soma_carta_1, soma_carta_2);
            printf("Vencedor: %s", (soma_carta_1 > soma_carta_2 ? "Carta 1" : (soma_carta_2 < soma_carta_1) ? "Carta 2" : "Empate"));

        } else if ((escolha_1 == 5 && escolha_2 == 6) || (escolha_1 == 6 && escolha_2 == 5)) {

            printf("Estados: %c | %c\n", estado_carta_1, estado_carta_2);
            printf("Atributo escolhido: Densidade Populacional | PIB per Capta\n");
            printf("Densidade Populacional: %.2f | %.2f\n", densidade_populacional_carta_1, densidade_populacional_carta_2);
            printf("PIB per Capta: %.2f | %.2f\n", pib_per_capita_carta_1, pib_per_capita_carta_2);
            soma_carta_1 = densidade_populacional_carta_1 + pib_per_capita_carta_1;
            soma_carta_2 = densidade_populacional_carta_2 + pib_per_capita_carta_2;
            printf("Soma dos atributos: %.2Lf | %.2Lf\n", soma_carta_1, soma_carta_2);
            printf("Vencedor: %s", (soma_carta_1 > soma_carta_2 ? "Carta 1" : (soma_carta_2 < soma_carta_1) ? "Carta 2" : "Empate"));

        } else if ((escolha_1 == 5 && escolha_2 == 7) || (escolha_1 == 7 && escolha_2 == 5)) {

            printf("Estados: %c | %c\n", estado_carta_1, estado_carta_2);
            printf("Atributo escolhido: Densidade Populacional | Super Poder\n");
            printf("Densidade Populacional: %.2f | %.2f\n", densidade_populacional_carta_1, densidade_populacional_carta_2);
            printf("Super Poder: %.2Lf | %.2Lf\n", super_poder_carta_1, super_poder_carta_2);
            soma_carta_1 = densidade_populacional_carta_1 + super_poder_carta_1;
            soma_carta_2 = densidade_populacional_carta_2 + super_poder_carta_2;
            printf("Soma dos atributos: %.2Lf | %.2Lf\n", soma_carta_1, soma_carta_2);
            printf("Vencedor: %s", (soma_carta_1 > soma_carta_2 ? "Carta 1" : (soma_carta_2 < soma_carta_1) ? "Carta 2" : "Empate"));

        } else if ((escolha_1 == 6 && escolha_2 == 7) || (escolha_1 == 7 && escolha_2 == 6)) {

            printf("Estados: %c | %c\n", estado_carta_1, estado_carta_2);
            printf("Atributo escolhido: PIB per Capta | Super Poder\n");
            printf("PIB per Capta: %.2f | %.2f\n", pib_per_capita_carta_1, pib_per_capita_carta_2);
            printf("Super Poder: %.2Lf | %.2Lf\n", super_poder_carta_1, super_poder_carta_2);
            soma_carta_1 = pib_per_capita_carta_1 + super_poder_carta_1;
            soma_carta_2 = pib_per_capita_carta_2 + super_poder_carta_2;
            printf("Soma dos atributos: %.2Lf | %.2Lf\n", soma_carta_1, soma_carta_2);
            printf("Vencedor: %s", (soma_carta_1 > soma_carta_2 ? "Carta 1" : (soma_carta_2 < soma_carta_1) ? "Carta 2" : "Empate"));

        }

        printf("------------------------------------ \n\n");

        printf("Carta 1: \n");
        printf("Estado: %c\n", estado_carta_1);
        printf("Código: %s\n", codigo_carta_1);
        printf("Nome da Cidade: %s\n", cidade_carta_1);
        printf("População: %d\n", populacao_carta_1);
        printf("Área: %.2f km² \n", area_km_carta_1);
        printf("PIB: %.2f reais\n", pib_carta_1);
        printf("Número de pontos turísticos: %d\n", qtd_pontos_turisticos_carta_1);
        printf("Densidade Populacional: %.2f\n", densidade_populacional_carta_1);
        printf("PIB per capita: %.2f\n", pib_per_capita_carta_1);

        printf("\n ------------------------------------ \n\n");

        printf("Carta 2: \n");
        printf("Estado: %c\n", estado_carta_2);
        printf("Código: %s\n", codigo_carta_2);
        printf("Nome da Cidade: %s\n", cidade_carta_2);
        printf("População: %d\n", populacao_carta_2);
        printf("Área: %.2f km²\n", area_km_carta_2);
        printf("PIB: %.2f reais\n", pib_carta_2);
        printf("Número de pontos turísticos: %d\n", qtd_pontos_turisticos_carta_2);
        printf("Densidade Populacional: %.2f\n", densidade_populacional_carta_2);
        printf("PIB per capita: %.2f\n", pib_per_capita_carta_2);
    }

    return 0;
}


