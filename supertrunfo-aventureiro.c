#include <stdio.h>

 char estado1 [20];
 char codigo1 [20];
 char cidade1 [20];
 char estado2 [20];
 char codigo2 [20];
 char cidade2 [20];

 double populacao1, area1, pib1, populacao2, area2, pib2, pib_percapito1, pib_percapito2, densidade_populacional1, densidade_populacional2;
 
 int pontosturisticos1, pontosturisticos2;
 
 void receberdados() {
   
   printf("Digite o Estado da primeira carta: ");
   scanf(" %[^\n]", estado1); 
   printf("Digite o Codigo da primeira carta: ");
   scanf(" %[^\n]", codigo1);
   printf("Digite a Cidade da primeira carta: ");
   scanf(" %[^\n]", cidade1);
   printf("Digite a População da primeira carta: ");
   scanf("%lf", &populacao1);
   printf("Digite a Área da primeira carta: ");
   scanf("%lf", &area1);
   printf("Digite o PIB da primeira carta: ");
   scanf("%lf", &pib1);
   printf("Digite a quantidade de Pontos da primeira carta: ");
   scanf("%i", &pontosturisticos1);
   printf("Digite o Estado da segunda carta carta: ");
   scanf(" %[^\n]", estado2);
   printf("Digite o Codigo da segunda carta carta: ");
   scanf(" %[^\n]", codigo2);
   printf("Digite a Cidade da segunda carta carta: ");
   scanf(" %[^\n]", cidade2);
   printf("Digite a População da segunda carta carta: ");
   scanf("%lf", &populacao2);
   printf("Digite a Área da segunda carta carta: ");
   scanf("%lf", &area2);
   printf("Digite o PIB da segunda carta carta: ");
   scanf("%lf", &pib2);
   printf("Digite a quantidade de Pontos da segunda carta carta: ");
   scanf("%i", &pontosturisticos2);
   

 }

  float calcularpibedensidade() {
 
   densidade_populacional1 = populacao1 / area1;
   pib_percapito1 = populacao1 / pib1;
   densidade_populacional2 = populacao2 / area2;
   pib_percapito2 = populacao2 / pib2;

  }

  void imprimirdados() {
   printf("Carta 1:\n");
   printf("Estado da primeira carta: %s\n", estado1);
   printf("Codigo da primeira carta: %s\n", codigo1);
   printf("Cidade da primeira carta: %s\n", cidade1);
   printf("População da primeira carta: %.3lf\n", populacao1);
   printf("Área da primeira carta: %.3lf\n", area1);
   printf("PIB da primeira carta: %.3lf\n", pib1);
   printf("Quantidade de Pontos da primeira carta: %d\n", pontosturisticos1);
   printf("Densidade populacional da primeira carta: %.3lf\n", densidade_populacional1);
   printf("PIB per capita da primeira carta: %.3lf\n\n", pib_percapito1);

   printf("Carta 2:\n");
   printf("Estado da segunda carta: %s\n", estado2);
   printf("Codigo da segunda carta: %s\n", codigo2);
   printf("Cidade da segunda carta: %s\n", cidade2);
   printf("População da segunda carta: %.3lf\n", populacao2);
   printf("Área da segunda carta: %.3lf\n", area2);
   printf("PIB da segunda carta: %.3lf\n", pib2);
   printf("Quantidade de Pontos da segunda carta: %d\n", pontosturisticos2);
   printf("Densidade populacional da segunda carta: %.3lf\n", densidade_populacional2);
   printf("PIB per capita da segunda carta: %.3lf\n", pib_percapito2);
  }

  
  int main (void) {

   receberdados();
   calcularpibedensidade(); 
   imprimirdados();
   return 0;

 }