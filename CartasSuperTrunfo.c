#include <stdio.h>

int main(){
    printf("Desafio Super Trunfo - Cidades\n");

    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int ptur1, ptur2;
    float denpop1, denpop2;
    float pibpc1, pibpc2;

// SOLICITA AO USUÁRIO A ATRIBUIÇÃO DE VALOR ÀS VARIÁVEIS PARA CARTA 1
    printf("Digite o estado da cidade da Carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o código da cidade da Carta 1: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]s", cidade1); // [^\n] permite espaço no nome da cidade

    printf("Digite a população da cidade da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade da Carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da Carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade da Carta 1: ");
    scanf("%d", &ptur1);

// SOLICITA AO USUÁRIO A ATRIBUIÇÃO DE VALOR ÀS VARIÁVEIS PARA CARTA 2
    printf("Digite o estado da cidade da Carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade da Carta 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]s", cidade2); // [^\n] permite espaço no nome da cidade

    printf("Digite a população da cidade da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade da Carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da Carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade da Carta 2: ");
    scanf("%d", &ptur2);

// CALCULA A DENSIDADE POPULACIONAL E O PIB PER CAPITA DAS CIDADES
    denpop1 = (float) populacao1 / area1;
    denpop2 = (float) populacao2 / area2;
    pibpc1 = (float) pib1 / populacao1;
    pibpc2 = (float) pib2 / populacao2;

// IMPRIME OS DADOS DA CARTA 1
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", ptur1);
    printf("Densidade Populacional: %.2f hab/km²\n", denpop1);
    printf("PIB per Capita: %.2f reais\n", pibpc1);

// IMPRIME OS DADOS DA CARTA 2
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", ptur2);
    printf("Densidade Populacional: %.2f hab/km²\n", denpop2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);

    return 0;

}