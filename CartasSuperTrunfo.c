#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1 [10];
  char codigo1 [10];
  char cidade1 [10];
  char estado2 [10];
  char codigo2 [10];
  char cidade2 [10];
  float populacao1, area1, pib1, populacao2, area2, pib2;
 
  int pontosturisticos1, pontosturisticos2;
  // Área para entrada de dados
 printf("Digite o Estado da primeira carta: ");
 scanf("%s", estado1);

 printf("Digite o Codigo da primeira carta: ");
 scanf("%s", codigo1);

 printf("Digite a Cidade da primeira carta: ");
 scanf("%s", cidade1);

 printf("Digite a População da primeira carta: ");
 scanf("%f", &populacao1);

 printf("Digite a Área da primeira carta: ");
 scanf("%f", &area1);

 printf("Digite o PIB da primeira carta: ");
 scanf("%f", &pib1);

 printf("Digite a quantidade de Pontos da primeira carta: ");
 scanf("%i", &pontosturisticos1);

 printf("Digite o Estado da segunda carta carta: ");
 scanf("%s", estado2);

 printf("Digite o Codigo da segunda carta carta: ");
 scanf("%s", codigo2);

 printf("Digite a Cidade da segunda carta carta: ");
 scanf("%s", cidade2);

 printf("Digite a População da segunda carta carta: ");
 scanf("%f", &populacao2);

 printf("Digite a Área da segunda carta carta: ");
 scanf("%f", &area2);

 printf("Digite o PIB da segunda carta carta: ");
 scanf("%f", &pib2);

 printf("Digite a quantidade de Pontos da segunda carta carta: ");
 scanf("%i", &pontosturisticos2);

  // Área para exibição dos dados da cidade
 printf("Carta 1\nO estado é: %s\nO código é: %s\nNome da cidade: %s\nPopulação: %f\nÁrea: %f\nPIB: %f\nPontos: %i\n\nCarta 2\nO estado é: %s\nO código é: %s\nNome da cidade: %s\nPopulação: %f\nÁrea: %f\nPIB: %f\nPontos: %i",estado1, codigo1, cidade1, populacao1, area1, pib1, pontosturisticos1,estado2, codigo2, cidade2, populacao2, area2, pib2, pontosturisticos2);

return 0;
} 
