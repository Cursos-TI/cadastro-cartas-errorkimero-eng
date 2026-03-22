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


  printf(" **** SUPER TRUNFO ****");
  prinff("Digite os dados da 1º carta")
  printf("Digite o número da sua carta: \n");
  scanf("%s", carta1);

  printf("Digite o código da carta: \n");
  scanf("%s", codigo1);

  printf("Digite o estado: \n");
  scanf("%s", estado1);

  printf("Qual o nome da cidade: \n");
  scanf("%s", cidade1);

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
  
  
  // printando as informações das cartas
  printf("\n");
  printf("A carta escolhida é: \n");
  printf("Carta: %s Código: %s\n", carta, codigo);
  printf("Estado: %s e cidade: %s\n", estado, cidade);
  printf("PIB: %d | População de: %d | Pontos turisticos de: %d\n", pib, populacao, pontos);
  printf("Com a área de %2.f\n", area);
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 
