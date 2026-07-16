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

    printf("------------------------------------ \n\n");

    printf("Escolha um comparador: \n");
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Pontos Turísticos \n");
    printf("5 - Densidade Populacional \n");
    printf("6 - PIB per Capita \n");
    printf("7 - Super Poder \n");
    getchar(); // consome o '\n' deixado pelo scanf
    int escolha;
    printf("> ");
    scanf("%d", &escolha);

    printf("RESULTADO:\n\n");

    switch (escolha) {
        case 1:
            printf("População: %s\n", (populacao_carta_1 > populacao_carta_2) ? "Carta 1 Venceu" : (populacao_carta_2 > populacao_carta_1) ? "Carta 2 Venceu" : "Empate");
            break;
        case 2:
            printf("Área: %s\n", (area_km_carta_1 > area_km_carta_2) ? "Carta 1 Venceu" : (area_km_carta_2 > area_km_carta_1) ? "Carta 2 Venceu" : "Empate");
            break;
        case 3:
            printf("PIB: %s\n", (pib_carta_1 > pib_carta_2) ? "Carta 1 Venceu" : (pib_carta_2 > pib_carta_1) ? "Carta 2 Venceu" : "Empate");
            break;
        case 4:
            printf("Pontos Turísticos: %s\n", (qtd_pontos_turisticos_carta_1 > qtd_pontos_turisticos_carta_2) ? "Carta 1 Venceu" : (qtd_pontos_turisticos_carta_2 > qtd_pontos_turisticos_carta_1) ? "Carta 2 Venceu" : "Empate");
            break;
        case 5:
            printf("Densidade Populacional: %s\n", (densidade_populacional_carta_1 > densidade_populacional_carta_2) ? "Carta 2 Venceu" : (densidade_populacional_carta_2 > densidade_populacional_carta_1) ? "Carta 1 Venceu" : "Empate");
            break;
        case 6:
            printf("PIB per Capita: %s\n", (pib_per_capita_carta_1 > pib_per_capita_carta_2) ? "Carta 1 Venceu" : (pib_per_capita_carta_2 > pib_per_capita_carta_1) ? "Carta 2 Venceu" : "Empate");
            break;
        case 7:
            printf("Super Poder: %s\n", (super_poder_carta_1 > super_poder_carta_2) ? "Carta 1 Venceu" : (super_poder_carta_2 > super_poder_carta_1) ? "Carta 2 Venceu" : "Empate");
            break;
        default:
            printf("Opção inválida");
            break;
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

    // printf("\n ------------------------------------ \n\n");
    //
    // if (densidade_populacional_carta_1 > 0.0f) {
    //     inverso_densidade_carta_1 = 1.0f / densidade_populacional_carta_1;
    // } else {
    //     inverso_densidade_carta_1 = 0.0f;
    // }
    //
    // super_poder_carta_1 = (float) populacao_carta_1 + area_km_carta_1 + pib_carta_1 + (float) qtd_pontos_turisticos_carta_1 + inverso_densidade_carta_1;
    //
    // inverso_densidade_carta_2 = (densidade_populacional_carta_2 > 0.0f) ? 1.0f / densidade_populacional_carta_2 : 0.0f;
    // super_poder_carta_2 = (float) populacao_carta_2 + area_km_carta_2 + pib_carta_2 + (float) qtd_pontos_turisticos_carta_2 + inverso_densidade_carta_2;
    //
    // printf("Comparação de Cartas:");
    // printf("População: %s\n", (populacao_carta_1 > populacao_carta_2) ? "Carta 1 Venceu" : (populacao_carta_2 > populacao_carta_1) ? "Carta 2 Venceu" : "Empate");
    // printf("Área: %s\n", (area_km_carta_1 > area_km_carta_2) ? "Carta 1 Venceu" : (area_km_carta_2 > area_km_carta_1) ? "Carta 2 Venceu" : "Empate");
    // printf("PIB: %s\n", (pib_carta_1 > pib_carta_2) ? "Carta 1 Venceu" : (pib_carta_2 > pib_carta_1) ? "Carta 2 Venceu" : "Empate");
    // printf("Pontos Turísticos: %s\n", (qtd_pontos_turisticos_carta_1 > qtd_pontos_turisticos_carta_2) ? "Carta 1 Venceu" : (qtd_pontos_turisticos_carta_2 > qtd_pontos_turisticos_carta_1) ? "Carta 2 Venceu" : "Empate");
    // printf("Densidade Populacional: %s\n", (densidade_populacional_carta_1 > densidade_populacional_carta_2) ? "Carta 1 Venceu" : (densidade_populacional_carta_2 > densidade_populacional_carta_1) ? "Carta 2 Venceu" : "Empate");
    // printf("PIB per Capita: %s\n", (pib_per_capita_carta_1 > pib_per_capita_carta_2) ? "Carta 1 Venceu" : (pib_per_capita_carta_2 > pib_per_capita_carta_1) ? "Carta 2 Venceu" : "Empate");
    // printf("Super Poder: %s\n", (super_poder_carta_1 > super_poder_carta_2) ? "Carta 1 Venceu" : (super_poder_carta_2 > super_poder_carta_1) ? "Carta 2 Venceu" : "Empate");

    return 0;
}