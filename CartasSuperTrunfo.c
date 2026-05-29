#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
  // Área para definição das variáveis para armazenar as propriedades das cidades

  int turistico, população, carta;
  float pib;
  float area;
  char estado[50];
  char código[50];
  char cidade[50];

  // Área para definição da Segunda carta

  int turistico2, população2, carta2;
  float pib2;
  float area2;
  char estado2[50];
  char código2[50]; 
  char cidade2[50];

  // Área para entrada de dados

  printf("Digite a numeração da carta: \n");
  scanf("%d", &carta);

  printf("Digite o código da carta \n");
  scanf("%s", código);

  printf("Digite o nome da estado: \n");
  scanf("%s", estado);

  printf("Digite o nome da cidade: \n");
  scanf("%s", cidade);

  printf("Digite o número de habitantes da cidade: \n");
  scanf("%d", &população);

  printf("Digite o PIB da cidade: \n");
  scanf("%f", &pib);

  printf("Digite a área da cidade: \n");
  scanf("%f", &area);

  printf("Digite o número de Pontos Turísticos: \n");
  scanf("%d", &turistico);

  // Área para entrada de dados da segunda carta

  printf("Digite a numeração da segunda carta: \n");
  scanf("%d", &carta2);

  printf("Digite o código da carta \n");
  scanf("%s", código2);

  printf("Digite o nome da estado: \n");
  scanf("%s", estado2);

  printf("Digite o nome da cidade: \n");
  scanf("%s", cidade2);

  printf("Digite o número de habitantes da cidade: \n");
  scanf("%d", &população2);

  printf("Digite o PIB da cidade: \n");
  scanf("%f", &pib2);

  printf("Digite a área da cidade: \n");
  scanf("%f", &area2);

  printf("Digite o número de Pontos Turísticos: \n");
  scanf("%d", &turistico2);

  // Área para exibição dos dados da cidade

  printf("Carta: %d\n", carta);
  printf("Código: %s\n", código);
  printf("Estado: %s\n", estado);
  printf("Cidade: %s\n", cidade);
  printf("População: %d\n", população);
  printf("PIB: %.2f\n", pib);
  printf("Área: %.2f\n", area);
  printf("Número de Pontos Turísticos: %d\n", turistico);

  // Área para exibição dos dados da segunda cidade

  printf("Carta: %d\n", carta2);
  printf("Código: %s\n", código2);
  printf("Estado: %s\n", estado2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", população2);
  printf("PIB: %.2f\n", pib2);
  printf("Área: %.2f\n", area2);
  printf("Número de Pontos Turísticos: %d\n", turistico2);

  return 0;
} 
