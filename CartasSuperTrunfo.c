#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
   //Carta 1

  char Estado1  = 'A';
  char Cidade1 [50] = "Campo Belo";
  char Codigo1 [4] = "A01";
  int Populacao1 = 60000;
  float Area1 = 150.55f;
  float PIB1 = 100.00f;
  int NumerosPontosTuristicos1 = 5;

   //Carta 2

  char Estado2 = 'B';
  char Cidade2 [50] = "São Paulo";
  char Codigo2 [4] = "A02";
  int Populacao2 = 500000;
  float Area2 = 5550.50f;
  float PIB2 = 950.55f;
  int NumerosPontosTuristicos2 = 50;

  printf("Carta 1 \n:");
  printf("Estado %c\n", Estado1);
  printf("Cidade %s\n", Cidade1);
  printf("Codigo %s\n", Codigo1);
  printf("População %d\n", Populacao1);
  printf("Área %.2f\n", Area1);
  printf("PIB %.2f\n", PIB1);
  printf("Números de pontos turísticos %d\n", NumerosPontosTuristicos1);

  printf("Carta 2 \n:");
  printf("Estado %c\n", Estado2);
  printf("Cidade %s\n", Cidade2);
  printf("Codigo %s\n", Codigo2);
  printf("População %d\n", Populacao2);
  printf("Área %.2f\n", Area2);
  printf("PIB %.2f\n", PIB2);
  printf("Números de pontos turísticos %d\n", NumerosPontosTuristicos2);



  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 
