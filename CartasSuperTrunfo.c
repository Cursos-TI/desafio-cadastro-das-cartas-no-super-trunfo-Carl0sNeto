#include <stdio.h>

int main(){

    // Declarando as variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pot1, pot2;

    // Desafio Super Trunfo!
    printf("\n=== Super Trunfo ===\n");

    // Leitura dos dados da carta 1
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", &nomeCidade1);

    printf("Digite a população: ");
    scanf(" %d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf(" %f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pot1);

    // Leitura dos dados da carta 2
    printf("Digite a letra do estado (A-H) para a segunda carta: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf(" %s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", &nomeCidade2);

    printf("Digite a população: ");
    scanf(" %d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf(" %f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pot2);

    // Exibir os dados da carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pot1);

    // Exibir os dados da carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pot2);

    return 0;
};