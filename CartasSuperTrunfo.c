#include <stdio.h>

int main(){
    printf("Desafio Super Trunfo - Cidades\n");

    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
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
    scanf(" %[^\n]s", cidade1); // [^\n] permite identificar o espaço no nome da cidade

    printf("Digite a população da cidade da Carta 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade da Carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da Carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade da Carta 1: ");
    scanf("%d", &ptur1);

    printf("\n");

// SOLICITA AO USUÁRIO A ATRIBUIÇÃO DE VALOR ÀS VARIÁVEIS PARA CARTA 2
    printf("Digite o estado da cidade da Carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade da Carta 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]s", cidade2); // [^\n] permite identificar o espaço no nome da cidade

    printf("Digite a população da cidade da Carta 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade da Carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da Carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade da Carta 2: ");
    scanf("%d", &ptur2);

    printf("\n");

// CALCULA A DENSIDADE POPULACIONAL E O PIB PER CAPITA DAS CIDADES
    denpop1 = (float) populacao1 / area1;
    denpop2 = (float) populacao2 / area2;
    pibpc1 = (pib1 / (float) populacao1) *1000000000; //multiplicado por bilhões de reais
    pibpc2 = (pib2 / (float) populacao2) *1000000000; //multiplicado por bilhões de reais

// CALCULA SUPER PODER
    float superpoder1 = (float) populacao1 + area1 + pib1 + (float) ptur1 + pibpc1 + (1 / denpop1);
    float superpoder2 = (float) populacao2 + area2 + pib2 + (float) ptur2 + pibpc2 + (1 / denpop2);

// IMPRIME OS DADOS DA CARTA 1
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", ptur1);
    printf("Densidade Populacional: %.2f hab/km²\n", denpop1);
    printf("PIB per Capita: %.2f reais\n", pibpc1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n");

// IMPRIME OS DADOS DA CARTA 2
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", ptur2);
    printf("Densidade Populacional: %.2f hab/km²\n", denpop2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);
    printf("Super Poder: %.2f\n", superpoder2);

    printf("\n");
    
// COMPARA OS DADOS DAS CARTAS
    int r_populacao = populacao1 > populacao2;
    float r_area = area1 > area2;
    float r_pib = pib1 > pib2;
    int r_ptur = ptur1 > ptur2;
    float r_denpop = denpop1 < denpop2;
    float r_pibpc = pibpc1 > pibpc2;
    float r_superpoder = superpoder1 > superpoder2;


// IMPRIME OS RESULTADOS DAS COMPARAÇÕES
    printf("Comparação de Cartas:\n");
    printf("População: %d\n", r_populacao);
    printf("Área: %.1f\n", r_area);
    printf("PIB: %.1f\n", r_pib);
    printf("Pontos Turísticos: %d\n", r_ptur);
    printf("Densidade Populacional: %.1f\n", r_denpop);
    printf("PIB per capta: %.1f\n", r_pibpc);
    printf("Super Poder: %.1f\n", r_superpoder);

    return 0;

}