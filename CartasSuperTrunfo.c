#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  char carta1[10], carta2[10];
  char codigo1[20], estado1[20], codigo2[20], estado2[20];
  char cidade1[20], cidade2[20];
  int populacao1, pontos1, pib1, populacao2, pontos2, pib2;
  float area1, densidade1, percapita1, area2, densidade2, percapita2;


  printf(" **** SUPER TRUNFO ****\n");
  printf("Digite os dados da 1º carta");
  printf("Digite o número da sua carta: \n");
  scanf("%s", &carta1);

  printf("Digite o código da carta: \n");
  scanf("%s", &codigo1);

  printf("Digite o estado: \n");
  scanf("%s", &estado1);

  printf("Qual o nome da cidade: \n");
  scanf("%s", &cidade1);

  printf("Qual a população?: \n");
  scanf("%d", &populacao1);

  printf("Qual o PIB: \n");
  scanf("%d", &pib1);

  printf("Quantos pontos turisticos existe?: \n");
  scanf("%d", &pontos1);

  printf("A aréa é?: \n");
  scanf("%f", &area1);

  printf("Digite a renda percapita?: \n");
  scanf("%f", &percapita1);
  
  printf("Digite os dados da 2º carta\n");
  printf("Digite o número da sua carta: \n");
  scanf("%s", &carta2);

  printf("Digite o código da carta: \n");
  scanf("%s", &codigo2);

  printf("Digite o estado: \n");
  scanf("%s", &estado2);

  printf("Qual o nome da cidade: \n");
  scanf("%s", &cidade2);

  printf("Qual a população?: \n");
  scanf("%d", &populacao2);

  printf("Qual o PIB: \n");
  scanf("%d", &pib2);

  printf("Quantos pontos turisticos existe?: \n");
  scanf("%d", &pontos2);

  printf("A aréa é?: \n");
  scanf("%f", &area2);

  printf("Digite a renda percapita?: \n");
  scanf("%f", &percapita2);
  
  // printando as informações das cartas
  printf("\n");printf("A carta escolhida é: \n");
  printf("Carta: %s Código: %s\n", carta1, codigo1);
  printf("Estado: %s e cidade: %s\n", estado1, cidade1);
  printf("PIB: %d | População de: %d | Pontos turisticos de: %d\n", pib1, populacao1, pontos1);
  printf("Com a área de %2.f\n", area1);
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 
