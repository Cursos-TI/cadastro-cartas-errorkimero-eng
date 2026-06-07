#include <stdio.h>

int main() {
    char codigo1[20], estado1[20], codigo2[20], estado2[20];
    char cidade1[20], cidade2[20];

    int populacao1, populacao2;
    int pontos1, pontos2;

    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float percapita1, percapita2;

    printf(" **** SUPER TRUNFO ****\n");

    printf("Digite o código da 1ª carta: \n");
    scanf("%s", codigo1);

    printf("Digite o estado: \n");
    scanf("%s", estado1);

    printf("Qual o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Qual a população?: \n");
    scanf("%d", &populacao1);

    printf("Qual o PIB: \n");
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos existe?: \n");
    scanf("%d", &pontos1);

    printf("A área é?: \n");
    scanf("%f", &area1);

    printf(" **************************\n");

    printf("Digite o código da 2ª carta: \n");
    scanf("%s", codigo2);

    printf("Digite o estado: \n");
    scanf("%s", estado2);

    printf("Qual o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Qual a população?: \n");
    scanf("%d", &populacao2);

    printf("Qual o PIB: \n");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos existe?: \n");
    scanf("%d", &pontos2);

    printf("A área é?: \n");
    scanf("%f", &area2);

    // calculando a densidade populacional e o pib per capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    percapita1 = pib1 / populacao1;
    percapita2 = pib2 / populacao2;

    // printando as informacoes das cartas
    printf("-------------------------------------\n");
    printf("Código da 1ª carta: %s\n", codigo1);
    printf("Cidade e UF: %s - %s\n", cidade1, estado1);
    printf("PIB: %.2f | População de: %d | Pontos turisticos de: %d\n", pib1, populacao1, pontos1);
    printf("Com a área de %.2f\n", area1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("Com a renda percapta de: %.2f\n", percapita1);

    printf("-------------------------------------\n");
    printf("Código da 2ª carta: %s\n", codigo2);
    printf("Cidade e UF: %s - %s\n", cidade2, estado2);
    printf("PIB: %.2f | População de: %d | Pontos turisticos de: %d\n", pib2, populacao2, pontos2);
    printf("Com a área de %.2f\n", area2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("Com a renda percapta de: %.2f\n", percapita2);

    // comparacao escolhida diretamente no codigo
    // atributo escolhido: populacao
    printf("\nComparação de cartas (Atributo: População):\n\n");

    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: As duas cartas empataram!\n");
    }

    return 0;
}