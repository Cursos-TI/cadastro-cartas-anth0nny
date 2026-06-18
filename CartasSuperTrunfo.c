#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
   //Carta 1  

   char Carta = '1';
   char Estado = 'A';
   char Codigo [5] = "A01";
   char Cidade [50] = "Sao Paulo";
   float Populacao = 12325000;
   float Area = 1521.11;
   float PIB = 699.28;
   int Pontos_Turisticos = 50;
   float Densidade = 8102.47;
   float PIB_per_capita = 56724.32;

   //Carta 2

   char Carta = '2';
   char Estado = 'B';
   char Codigo [5] = "B02";
   char Cidade [50] = "Rio_de_Janeiro";
   float Populacao = 6748000;
   float Area = 1200.25;
   float PIB = 300.50;
   int Pontos_Turisticos = 30;
   float Densidade = 5622.24;
   float PIB_per_capita = 44532.91;
    
   printf("Carta: %c", Carta);
   printf("Estado: %c", Estado);
   printf("Código: %s", Codigo);
   printf("Nome da Cidade: %s", Cidade);
   printf("População: %f", Populacao);
   printf("Área: %2.f", Area);
   printf("PIB: %2.f", PIB);
   printf("Número de pontos turísticos: %2.f", Pontos_Turisticos);
   printf("Densidade Populacional: %2.f", Densidade);
   printf("PIB per Capita: %2.f", PIB_per_capita);


    



   


   // Área para entrada de dados

   // Área para exibição dos dados da cidade

   return 0;
   } 
