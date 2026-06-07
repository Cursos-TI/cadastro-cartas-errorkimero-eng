#include <stdio.h>

int main() {
    char codigo1[20], estado1[20], cidade1[30];
    char codigo2[20], estado2[20], cidade2[30];

    unsigned long int populacao1, populacao2;
    int pontos1, pontos2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2;
    float percapita1, percapita2;
    float superPoder1, superPoder2;

    printf("**** SUPER TRUNFO ****\n");

    printf("Digite o código da 1ª carta: ");
    scanf("%s", codigo1);

    printf("Digite o estado: ");
    scanf("%s", estado1);

    printf("Qual o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Qual a população?: ");
    scanf("%lu", &populacao1);

    printf("Qual o PIB?: ");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos existem?: ");
    scanf("%d", &pontos1);

    printf("A área é?: ");
    scanf("%f", &area1);

    printf("\n**** SEGUNDA CARTA ****\n");

    printf("Digite o código da 2ª carta: ");
    scanf("%s", codigo2);

    printf("Digite o estado: ");
    scanf("%s", estado2);

    printf("Qual o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Qual a população?: ");
    scanf("%lu", &populacao2);

    printf("Qual o PIB?: ");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos existem?: ");
    scanf("%d", &pontos2);

    printf("A área é?: ");
    scanf("%f", &area2);

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    percapita1 = pib1 / populacao1;
    percapita2 = pib2 / populacao2;

    superPoder1 = populacao1 + area1 + pib1 + pontos1 + percapita1 + (1 / densidade1);
    superPoder2 = populacao2 + area2 + pib2 + pontos2 + percapita2 + (1 / densidade2);

    printf("\n-------------------------------------\n");
    printf("Carta 1\n");
    printf("Código: %s\n", codigo1);
    printf("Cidade e UF: %s - %s\n", cidade1, estado1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", percapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n-------------------------------------\n");
    printf("Carta 2\n");
    printf("Código: %s\n", codigo2);
    printf("Cidade e UF: %s - %s\n", cidade2, estado2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", percapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("\nComparação de Cartas:\n");

    printf("População: Carta %d venceu (%d)\n", 
           populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);

    printf("Área: Carta %d venceu (%d)\n", 
           area1 > area2 ? 1 : 2, area1 > area2);

    printf("PIB: Carta %d venceu (%d)\n", 
           pib1 > pib2 ? 1 : 2, pib1 > pib2);

    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
           pontos1 > pontos2 ? 1 : 2, pontos1 > pontos2);

    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
           densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2);

    printf("PIB per Capita: Carta %d venceu (%d)\n", 
           percapita1 > percapita2 ? 1 : 2, percapita1 > percapita2);

    printf("Super Poder: Carta %d venceu (%d)\n", 
           superPoder1 > superPoder2 ? 1 : 2, superPoder1 > superPoder2);

    return 0;
}