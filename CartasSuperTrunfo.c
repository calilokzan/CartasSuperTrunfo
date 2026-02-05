#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado1;
    char codigoCarta1[10];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int numPontosTuristicos1;

    char estado2;
    char codigoCarta2[10];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numPontosTuristicos2;
    
  // Área para entrada de dados

   printf("=== Criando as Cartas do Super Trunfo ===\n\n");

    printf("=== Carta 1 ===\n");

    printf("Digite uma letra de 'A' a 'H' para o estado 1: \n");
    scanf("%c", &estado1);   

    printf("Digite o código da carta: \n");
    scanf("%s", &codigoCarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeCidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numPontosTuristicos1);

    printf("=== Carta 2 ===\n");

    printf("Digite uma letra de 'A' a 'H' para o estado 2: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigoCarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeCidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numPontosTuristicos2);

  // Área para exibição dos dados da cidade

   printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", numPontosTuristicos1);
    
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos2);



return 0;
} 
