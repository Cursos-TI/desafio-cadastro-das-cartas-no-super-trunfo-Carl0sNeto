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
    printf("\n=== Super Trunfo 2.0 ===\n");

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

    // Cálculo da densidade populacional e PIB per capita
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1;
    float pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;

    // Exibir os dados da carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB Per Capita: R$ %.2f\n", pibPerCapita1);
    printf("Número de Pontos Turísticos: %d\n", pot1);

    // Exibir os dados da carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB Per Capita: R$ %.2f\n", pibPerCapita2);
    printf("Número de Pontos Turísticos: %d\n", pot2);

    // Escolha do atributo fixo para comparação
    printf("\n=== Comparação de cartas (Atributo: População) ===\n");
    printf("Carta 1 - %s (%c): %d habitantes\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d habitantes\n", nomeCidade2, estado2, populacao2);

    // Determinar a carta vencedora
    if(populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
