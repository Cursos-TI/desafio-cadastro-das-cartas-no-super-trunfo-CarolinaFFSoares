#include <stdio.h>

int main() {
    // Declaração das variáveis da Carta 1
    char estado1[3], codigo1[4], cidade1[50];
    unsigned long int populacao1;
    float pib1, area1;
    int pontosturisticos1;
    float densidade1, renda1, superpoder1;

    // Declaração das variáveis da Carta 2
    char estado2[3], codigo2[4], cidade2[50];
    unsigned long int populacao2;
    float pib2, area2;
    int pontosturisticos2;
    float densidade2, renda2, superpoder2;

    // Leitura da Carta 1
    printf("Carta 1\n");
    printf("Estado: ");
    scanf(" %2s", estado1);

    printf("Codigo: ");
    scanf(" %3s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf(" %lu", &populacao1);

    printf("Area: ");
    scanf(" %f", &area1);

    printf("PIB: ");
    scanf(" %f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosturisticos1);

    // Cálculos para Carta 1
    densidade1 = populacao1 / area1;
    renda1 = pib1 / populacao1;
    superpoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + renda1 + (1.0 / densidade1);

    // Leitura da Carta 2
    printf("\nCarta 2\n");
    printf("Estado: ");
    scanf(" %2s", estado2);

    printf("Codigo: ");
    scanf(" %3s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf(" %lu", &populacao2);

    printf("Area: ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf(" %f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosturisticos2);

    // Cálculos para Carta 2
    densidade2 = populacao2 / area2;
    renda2 = pib2 / populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + renda2 + (1.0 / densidade2);

    // Impressão das Cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", renda1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", renda2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Comparações completas
    printf("\nComparação de Cartas:\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosturisticos1 > pontosturisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", renda1 > renda2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    // Comparação única com if/else
    printf("\n=== Comparação Única ===\n");

    // ESCOLHA: comparar por PIB per capita (poderia ser trocado por outro atributo)
    printf("Comparando por PIB per capita:\n");
    printf("Carta 1 - %s: %.2f\n", cidade1, renda1);
    printf("Carta 2 - %s: %.2f\n", cidade2, renda2);

    if (renda1 > renda2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (renda1 < renda2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
