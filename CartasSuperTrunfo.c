#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  char carta[10];
  char codigo[20], estado[20];
  char cidade[20];
  int populacao, pontos, pib;
  float area;

  printf("Digite o número da sua carta: \n");
  scanf("%s", carta);

  printf("Digite o código da carta: \n");
  scanf("%s", codigo);

  printf("Digite o estado: \n");
  scanf("%s", estado);

  printf("Qual o nome da cidade: \n");
  scanf("%s", cidade);

  printf("Qual a população?: \n");
  scanf("%d", &populacao);

  printf("Qual o PIB: \n");
  scanf("%d", &pib);

  printf("Quantos pontos turisticos existe?: \n");
  scanf("%d", &pontos);

  printf("A aréa é?: \n");
  scanf("%f", &area);
  
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
