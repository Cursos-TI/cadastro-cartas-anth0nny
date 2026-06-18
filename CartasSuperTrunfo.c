#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
   //Carta 1  
    char Carta1 = '1';
    char Estado1 = 'A';
    char Codigo1[5] = "A01";
    char Cidade1[50] = "Sao Paulo";
    int Populacao1 = 12325000;
    float Area1 = 1521.11;
    float PIB1 = 699.28;
    int Pontos_Turisticos1 = 50;
    float Densidade1 = Populacao1 / Area1;
    float PIB_capita1 = (PIB1 * 1e9) / Populacao1;

    // Carta 2
    char Carta2 = '2';
    char Estado2 = 'B';
    char Codigo2[5] = "B02";
    char Cidade2[50] = "Rio de Janeiro";
    int Populacao2 = 6748000;
    float Area2 = 1200.25;
    float PIB2 = 300.50;
    int Pontos_Turisticos2 = 30;
    float Densidade2 = Populacao2 / Area2;
    float PIB_capita2 = (PIB2 * 1e9) / Populacao2;

    // Exibição da Carta 1
    printf("Carta: %c\n", Carta1);
    printf("Estado: %c\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhoes de reais\n", PIB1);
    printf("Numero de pontos turisticos: %d\n", Pontos_Turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", Densidade1);
    printf("PIB per capita: %.2f reais\n\n", PIB_capita1);

    // Exibição da Carta 2
    printf("Carta: %c\n", Carta2);
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhoes de reais\n", PIB2);
    printf("Numero de pontos turisticos: %d\n", Pontos_Turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", Densidade2);
    printf("PIB per capita: %.2f reais\n", PIB_capita2);

  

   // Área para entrada de dados

   // Área para exibição dos dados da cidade

   return 0;

   } 
